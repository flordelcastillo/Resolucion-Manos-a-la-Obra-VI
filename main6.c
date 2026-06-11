#include <stdio.h>
#include <string.h>
//Ejercicio 6
//Escribe un programa que lea dos strings y muestre las diferencias.

int main() {
    char str1[100], str2[100];
    int len1, len2, maxLen, haydif = 0, i = 0;
    char c1, c2;

    printf("Ingrese el string 1: ");
    scanf("%99s", str1);
    printf("Ingrese el string 2: ");
    scanf("%99s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    maxLen = (len1 > len2) ? len1 : len2;

    if (strcmp(str1, str2) == 0) {
        printf("Los strings son iguales.\n");
    } else {
        printf("\nDiferencias:\n");
        printf("%s %s %s\n", "Posicion", "String 1", "String 2");
        printf("------------------------------------\n");

        i = 0;
        while(i < maxLen){
            c1 = (i < len1) ? str1[i] : '\0';
            c2 = (i < len2) ? str2[i] : '\0';

            if (c1 != c2) {
                haydif = 1;
                if (c1 == '\0')
                    printf("%-8d %-12s %-12c\n", i + 1, "(fin)", c2);
                else if (c2 == '\0')
                    printf("%-8d %-12c %-12s\n", i + 1, c1, "(fin)");
                else
                    printf("%-8d %-12c %-12c\n", i + 1, c1, c2);
            }
            i++;
        }

        if (!haydif)
            printf("No hay diferencias de caracteres (solo de longitud).\n");
    }

    return 0;
}
