#include <stdio.h>
#include <locale.h>
//Ejercicio 2
//Escribe un programa que rellene un array con los 50 primeros números enteros pares y los muestre en pantalla en orden ascendente.

int main() {
    int array[50], i=1, j=0;

    while(j < 50){
        if(i % 2 == 0){
            array[j] = i;
            j++;
        }
        i++;
    }
    i = 0;
    while(i < 50){
        printf("Número: %d\n", array[i]);
        i++;
    }
    return 0;
}