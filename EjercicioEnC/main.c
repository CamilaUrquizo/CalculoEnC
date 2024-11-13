// main.c
#include <stdio.h>
#include "funciones.h"

int main() {
    float numeros[10];
    printf("Ingresa 10 numeros:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%f", &numeros[i]);
    }

    ordenarNumeros(numeros, 10);

    float media = calcularMedia(numeros, 10);
    float mediana = calcularMediana(numeros, 10);
    float moda = calcularModa(numeros, 10);
    float menor = numeros[0];
    float mayor = numeros[9];

    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %.2f\n", moda);
    printf("Menor: %.2f\n", menor);
    printf("Mayor: %.2f\n", mayor);

    return 0;
}
