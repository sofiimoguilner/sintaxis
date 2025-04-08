#include <stdio.h>

int cadenaVacia(const char *cadena)
{
    return cadena[0]=='\0';
};

int main()
{
    const char cadena1[] = "";
    const char cadena2[] = "que capa que soy";

    if(cadenaVacia(cadena1))
    {
        printf("cadena1 vacia\n");
    } else printf("cadena1 no vacia\n");

    if (cadenaVacia(cadena2))
    {
        printf("cadena2 vacia\n");
    } else printf("cadena2 no vacia\n");

    return 0;
    
}