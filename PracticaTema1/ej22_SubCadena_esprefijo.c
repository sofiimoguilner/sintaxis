#include <stdio.h>
#include <string.h>
#define t 100

int EsPrefijo(char *subcadena, char *cadena)
{
    int longitudSubcadena = strlen(subcadena);//strlen = cto mide una cadena

    //comparacion de los primeros elementos de la cadena con la sub cadena
    if(strncmp(cadena,subcadena,longitudSubcadena)==0)//strncmp compara cadenas, y si son iguales devuelve 0
    {
        return 1; //es prefijo
    }else return 0;
}

int main()
{
    char cadena[t], subcadena[t];

    printf("cadena: ");
    fgets(cadena,sizeof(cadena),stdin);
    printf("subcadena (debe ser una parte de la cadena previamente ingresada): ");
    fgets(subcadena,sizeof(subcadena),stdin);

    if(EsPrefijo(subcadena,cadena)==0)
    {
        printf("La subcadena ingresada es prefija a la cadena original\n");
    } else printf("La subcadena ingresada NO es prefija a la cadena original\n");

}