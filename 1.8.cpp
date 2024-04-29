/*8) Dado un vector con números ordenarlo con los siguientes criterios prioritarios
a) números primos de menor a mayor
b) números impares de mayor a menor
c) Números pares de menor a mayor*/

#include <stdio.h>

void primo(int numero[], int cantidad);
void par(int numero[], int cantidad);
void impar(int numero[], int cantidad);
void ordenarAscendente(int arreglo[], int tam);
void ordenarDescendente(int arreglo[], int tam);

int main() {
    int cantidad, numero[100];

    printf("Ingrese la cantidad de numeros con los que quiera trabajar: ");
    scanf("%d", &cantidad);

    for (int x = 0; x < cantidad; x++) {
        printf("Ingrese el numero %d: ", x + 1);
        scanf("%d", &numero[x]);
    }

    primo(numero, cantidad);
    par(numero, cantidad);
    impar(numero, cantidad);

    return 0;
}

void primo(int numero[], int cantidad) {
    int z1 = 0;
    int primos[100];

    for (int y1 = 0; y1 < cantidad; y1++) {
        int num = numero[y1];
        int aux1 = 0;

        for (int x1 = 1; x1 <= num; x1++) {
            if (num % x1 == 0) {
                aux1++;
            }
        }

        if (aux1 == 2) {
            primos[z1] = num;
            z1++;
        }
    }

    ordenarAscendente(primos, z1);

    printf("Numeros primos ordenados de menor a mayor: ");
    for (int x = 0; x < z1; x++) {
        printf("%d ", primos[x]);
    }
    printf("\n");
}

void par(int numero[], int cantidad) {
    int z2 = 0;
    int pares[100];

    for (int x2 = 0; x2 < cantidad; x2++) {
        if (numero[x2] % 2 == 0) {
            pares[z2] = numero[x2];
            z2++;
        }
    }

    ordenarAscendente(pares, z2);

    printf("Numeros pares ordenados de menor a mayor: ");
    for (int x = 0; x < z2; x++) {
        printf("%d ", pares[x]);
    }
    printf("\n");
}

void impar(int numero[], int cantidad) {
    int z3 = 0;
    int impares[100];

    for (int x3 = 0; x3 < cantidad; x3++) {
        if (numero[x3] % 2 != 0) {
            impares[z3] = numero[x3];
            z3++;
        }
    }

    ordenarDescendente(impares, z3);

    printf("Numeros impares ordenados de mayor a menor: ");
    for (int x = 0; x < z3; x++) {
        printf("%d ", impares[x]);
    }
    printf("\n");
}

void ordenarAscendente(int arreglo[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (arreglo[i] > arreglo[j]) {
                int temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }
    }
}

void ordenarDescendente(int arreglo[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (arreglo[i] < arreglo[j]) {
                int temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }
    }
}
