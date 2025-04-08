#include <stdio.h>

//funcion calcula longitud de una cadena
int Longitud_Cadena(const char *cadena) //const char = cadena de texto
{
    int longitud = 0;
    while(cadena[longitud]!='\0') // "\0" = caracter nulo en c
    {
        longitud++;
    }

    return longitud;
}

int main()
{
    const char cadena[] = "Hola mundo";

    int longitud = Longitud_Cadena(cadena);

    printf("la longitud de la cadena \"%s\" es: %d\n", cadena, longitud);
    /* '\' = interpreta a que hay "" dentro de la cadena
    %s = avisa q imprime una cadena de caracteres
    por ende se traduciria a IMPRIMI UNA CADENA DE CARACTERES ENTRE COMILLAS
    %d = indica q va a mostrar o leer un nmro entero con signo, el d viene de decimal pq se muestra con base 10
    \n = salto de linea*/

    return 0;
}