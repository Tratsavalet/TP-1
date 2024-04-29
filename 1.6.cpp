/*6) Dada una lista de números informar
a) la cantidad de números ingresada
b) la cantidad de números que son primos
c) la cantidad de números que no son primos*/

#include <stdio.h>

int main(){
	
	int cantidad, x, y, aux, primo = 0, compuesto = 0, numero[100];
	
	printf("Ingrese la cantidad de numeros con los que va a trabajar: ");
	scanf("%d", &cantidad);
	
	for(x=0;x<cantidad;x++){
		
		printf("Ingrese el numero %d: ", x+1);
		scanf("%d", &numero[x]);
	}
	
	for(y=0;y<cantidad;y++){
		
		aux = 0;
		
		for(x=1;x<=numero[y];x++){	
		
			if(numero[y]%x == 0){
				
				aux++;
			}
			
			else{
			}
		
		}
		
		if(aux == 2){
			
			primo++;
		}
		
		else{
			
			compuesto++;
		}
		
	}
	
	printf("Nro primos: %d\nNro compuestos: %d\nNro numeros %d", primo, compuesto, cantidad);
	
	return 0;
		
}