/*2) Realizar una mejora al programa anterior con las siguientes condiciones
Sabiendo que las elecciones son el 30 de septiembre,
Menor de 16 años no puede votar
Mayor de 16 años (inclusive) y menor de 18 años puede votar
Mayor de 18 años (inclusive) y menor de 80 años debe votar
Mayor de 80 años (inclusive) puede votar*/

#include <stdio.h>

int main(){
	
	int anio, mes, dia, dni[8];
	char nombre[100], apellido[100];
	
	printf("Ingrese su nombre: ");
	scanf("%s", &nombre);
	
	printf("Ingrese su apellido: ");
	scanf("%s", &apellido);
	
	printf("Ingrese su dni: ");
	scanf("%d", &dni);
	
	printf("Ingrese su año de nacimiento: ");
	scanf("%d", &anio);
	
	printf("Ingrese su mes de nacimiento: ");
	scanf("%d", &mes);
	
	printf("Ingrese su dia de nacimiento: ");
	scanf("%d", &dia);
	
	if(anio <= 2006 && anio >= 1928 && mes >= 9 && dia < 31){
		
		printf("Debe votar");
	}
	
	else if(anio >= 2006 && mes <= 9 && dia < 30 || anio <= 2008 && mes <= 9 && dia < 30 || anio <1928){
		
		printf("Puede votar");
	}
	
	else{
		
		printf("No puede votar");
	}
	
	return 0;
}