#include <stdio.h>   // Librería estándar de entrada/salida
#include <locale.h>
//Ejercicio 3
//Escribe un programa que rellene un array con los 50 primeros números enteros impares y los muestre en pantalla en orden descendente.

int main() {
    int array[50], i=1, j=0;

    while(j < 50){
        if(i % 2 != 0){
            array[j] = i;
            j++;
        }
        i++;
    }
    i = 49;
    while(i >= 0){
        printf("Número: %d\n", array[i]);
        i--;
    }
    return 0;         // Indica que el programa terminó sin errores
}