#include <stdio.h>   // Librería estándar de entrada/salida
#include <string.h>
#include <locale.h>
//Ejercicio 5
//Escribe un programa que lea un string y lo muestre al revés.

int main() {
    char nombre[100], reves[100];
    int len, i, j=0;
    printf("Ingrese su nombre: ");
    scanf("%99s", nombre);
    len = strlen(nombre);
    i = len - 1;
    while(i >= 0){
        reves[j] = nombre[i];
        j++;
        i--;
    }
    reves[j] = '\0';
    printf("nombre al reves: %s\n", reves);

    return 0;         // Indica que el programa terminó sin errores
}