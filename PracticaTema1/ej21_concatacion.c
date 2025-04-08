#include <stdio.h>
#include <string.h> //herramientas para manejar cadenas.
#define t 100

int main()
{
    char cadena1[t], cadena2[t], resultado[t*2];

    printf("ingrese cadena 1: ");
    fgets(cadena1,sizeof(cadena1),stdin);//stdin = entrada estandar en c (teclado)
    printf("ingrse cadena 2: ");
    fgets(cadena2,sizeof(cadena2),stdin);

    strcpy(resultado,cadena1);//strcpy se usa para copiar de una cadena a otra (strcpy(destino,origen))
    strcat(resultado,cadena2);//stract concaneta, agrega al final de la cadena
    
    printf("concatacion de dos cadenas: \"%s\"\n", resultado);

    return 0;

}
