#include <stdio.h>
#include <stdlib.h>

int main()
{
    char entero[]="1765";
    char real[]="2.35";
    int valorEntero;
    float valorReal, suma=0;

    valorEntero=atoi(entero);
    valorReal=atof(real);

    suma=valorEntero+valorReal;

    printf("El numero entero es: %d\n", valorEntero);
    printf("El numero real es: %1.2f\n", valorReal);
    printf("La suma de los numeros es %f\n", suma);

    system("pause");
    return 0;
}
