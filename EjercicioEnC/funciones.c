// funciones.c
#include <stdio.h>
#include "funciones.h"

void ordenarNumeros(float numeros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                float temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

float calcularMedia(float numeros[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += numeros[i];
    }
    return suma / n;
}

float calcularMediana(float numeros[], int n) {
    if (n % 2 == 0) {
        return (numeros[n / 2 - 1] + numeros[n / 2]) / 2;
    } else {
        return numeros[n / 2];
    }
}

float calcularModa(float numeros[], int n) {
    float moda = numeros[0];
    int maxRepeticiones = 1, repeticionActual = 1;

    for (int i = 1; i < n; i++) {
        if (numeros[i] == numeros[i - 1]) {
            repeticionActual++;
        } else {
            if (repeticionActual > maxRepeticiones) {
                maxRepeticiones = repeticionActual;
                moda = numeros[i - 1];
            }
            repeticionActual = 1;
        }
    }
    return repeticionActual > maxRepeticiones ? numeros[n - 1] : moda;
}
