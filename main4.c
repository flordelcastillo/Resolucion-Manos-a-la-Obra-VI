#include <stdio.h> // Librería estándar de entrada/salida
#include <locale.h>
// Ejercicio 4
// Escribe un programa que lea 10 números por teclado, los almacene en un array y muestre el promedio, el mayor y el menor.

int main()
{
    int array[10], i = 0, suma = 0, mayor, menor;
    float promedio = 0;
    while (i < 10)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &array[i]);
        if (i == 0)
        {
            mayor = array[0];
            menor = array[0];
        }
        if (array[i] > mayor)
        {
            mayor = array[i];
        }
        if (array[i] < menor)
        {
            menor = array[i];
        }
        suma = suma + array[i];
        i++;
    }
    promedio = (float)suma / 10;
    printf("Promedio: %f\nMayor: %d\nMenor: %d", promedio, mayor, menor);
    return 0;
}