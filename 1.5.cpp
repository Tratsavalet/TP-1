/*5) Al ingresar un número se debe informar si es primo o no es primo*/

#include <stdio.h>

int main(){
	
	int numero, aux = 0, x;
	
	printf("Ingrese el numero del cual quiera saber si es primo o no: ");
	scanf("%d", &numero);
	
	for(x=1;x<=numero;x++){
		
		if(numero%x == 0){
			
			aux++;
		}
	}
	
	if(aux == 2){
		
		printf("Es primo");
	}
	
	else{
		
		printf("No es primo");
	}
	
	return 0;
}