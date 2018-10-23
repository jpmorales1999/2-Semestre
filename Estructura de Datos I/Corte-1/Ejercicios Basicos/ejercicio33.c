#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que defina un vector y muestre en pantalla la suma de sus elementos

    int numeros[] = {1,3,5,6,10}, suma=0;

    for(int i=0; i<5; i++){
        suma=suma+numeros[i];
    }
        printf("La suma de los elementos del vector es: %d\n", suma);

    system("pause");
    return 0;
}
