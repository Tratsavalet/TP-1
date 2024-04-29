/*7) Realizar el mismo ejercicio anterior para los números pares e impares/*6) Dada una lista de números informar
a) la cantidad de números ingresada
b) la cantidad de números que son primos
c) la cantidad de números que no son primos*/

#include <stdio.h>

int main(){
	
	int numero[100], cantidad, aux = 0, x, impar = 0, par = 0, y;
	
	printf("Ingrese la cantidad de numeros que va a ingresar: ");
	scanf("%d", &cantidad);
	
	for(x=0;x<cantidad;x++){
		
		printf("Ingrese el valor del numero %d: ", x+1);
		scanf("%d", &numero[x]);
	}

	for(x=0;x<cantidad;x++){
		
		if(numero[x]%2 == 0){
			
			par++;
		}
		
		else{
			
			impar++;
		}
	}
		
	printf("La cantidad de numeros ingresados es: %d\n", cantidad);
	printf("La cantidad de numeros par es: %d\n", par);
	printf("La cantidad de numeros impar es: %d\n", impar);
	
	return 0;
}