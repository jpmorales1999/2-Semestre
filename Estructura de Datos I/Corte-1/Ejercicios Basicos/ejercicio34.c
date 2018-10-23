#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que defina un vector y calcule la multiplicacion acumulada de sus elementos

    int numeros[]={2,4,6,9,13}, multiplicacion=1;

    for(int i=0; i<5; i++){
        multiplicacion=multiplicacion*numeros[i];
    }
    printf("La multiplicacion de los elementos es de: %d\n", multiplicacion);

    system("pause");
    return 0;
}
