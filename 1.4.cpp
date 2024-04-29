/*4) Realizar una modificación al programa anterior, para el ingreso de dos de cualquiera de sus
lados, y me devuelva el valor de sus catetos y de su hipotenusa*/

#include <stdio.h>
#include <math.h>

int main(){

	float hipotenusa, cateto1, cateto2;
	
	printf("Programa Hipotenusa\n\n\n\n");
	
	printf("Ingrese el primer cateto: ");
	scanf("%f", &cateto1);	
	
	printf("Ingrese el segundo cateto: ");
	scanf("%f", &cateto2);
	
	hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
	
	printf("El valor de la hipotenusa es: %.3f\n El valor del cateto1 es: %f\nEl valor del cateto2 es: %f", hipotenusa, cateto1, cateto2);
	
	return 0;
}
