#include <stdio.h>   // Librería estándar de entrada/salida
#include <locale.h>
//Ejercicio 1
//Escribe un programa que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden ascendente.
int main() {
    int array[100], i=0;
    while(i < 100){
        array[i] = i + 1;
        i++;
    }
    i = 0;
    while(i < 100){
        printf("Número: %d\n", array[i]);
        i++;
    }
    
    return 0;         // Indica que el programa terminó sin errores
}