/*1) Se debe realizar un programa el cual se solicite la siguiente información al usuario
Nombre, Apellido, Fecha de nacimiento, y DNI. Y luego informe si puede o no votar y los
datos de Apellido, Nombre y DNI
Sabiendo que las elecciones son el 30 de septiembre, y pueden votar los mayores de 16 años*/

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
	
	if(anio <= 2007){
		
		printf("Puede votar");
	}
	
	else if(anio == 2008 && mes <= 9 && dia < 30){
		
		printf("Puede votar");
	}
	
	else{
		
		printf("No puede votar");
	}
	
	return 0;
}