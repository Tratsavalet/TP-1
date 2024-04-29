/*3) Se solicita realizar un software que pida al usuario los datos de los catetos de un triángulo
rectángulo y luego me informe cual es el valor de su hipotenusa*/

#include <stdio.h>
#include <math.h>

int main(){
	
	int cateto1, cateto2;
	float hipotenusa;
	
	printf("Programa Hipotenusa");
	
	printf("Ingrese el primer cateto: ");
	scanf("%d", &cateto1);	
	
	printf("Ingrese el segundo cateto: ");
	scanf("%d", &cateto2);
	
	hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
	
	printf("El valor de la hipotenusa es: %.3f", hipotenusa);
	
	return 0;
}