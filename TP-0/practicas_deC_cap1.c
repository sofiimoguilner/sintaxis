#include <stdio.h>

/*1.2 Variables arimetricas 
1. Modificar el programa de conversion de temperaturas de modo que se escriba un encabezado sobre la tabla
2.Escriba un programa que imprima la tabla correspomdiente celsius a fahrenheit*/


/*int main()
{
    float fahr, celsius;
    int lower, upper, step, lowerC, upperC, stepC;

    lower = 0; //limite superior de la tabla de tempperaturas
    upper = 300; //limite superior 
    step = 20; //tam del incremento

    fahr = lower;

    printf("talbla de temp\n");
    printf("Farh  Celcius\n");
    printf("--------------------\n");
    while (fahr<=upper)
    {
        celsius = (5.0/9.0)*(fahr-32.0); //Fórmula para convertir Fahrenheit a Celsius.
        printf("%3.0f %6.1f\n", fahr,celsius );
        
        /* %3.0f: imprime fahr como flotante sin decimales, con ancho mínimo 3 caracteres.
        %6.1f: imprime celsius con un decimal, en 6 caracteres de ancho total.

        fahr = fahr + step;
    };

    lowerC = 0;
    upperC = 100;
    stepC = 10;

    celsius = lowerC;

    printf("talbla de temp\n");
    printf("Celcius Farh\n");
    printf("--------------------\n");
    while (celsius<=upper)
    {
        fahr = (9.0/5.0)*(celsius+32.0);
        printf("%3.0f %6.1f\n", celsius,fahr);
        celsius = celsius + step;
    };
     
    return 0;
}*/

/*1.3 La proposicion for
1.Modifique el programa de manera que escriba latabla en orden inverso, desde 300 grados 
hasta 0*/

int main()
{
    int fahr;

    for(fahr=300; fahr>=0; fahr = fahr - 20)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }
}

/*While y For 
For: apropiado para ciclos, donde la inicializacion e incrmento son proposiciones sencillas y logicamte relacionados.

1.4 Ctes simbolicas*/




