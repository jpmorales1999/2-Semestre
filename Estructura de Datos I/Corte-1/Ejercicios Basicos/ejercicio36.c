#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que defina un vector de numeros y muestre en salida el vector en orden inverso
    int numeros[]={3,6,9,13,23,10};

    for(int i=5; i>=0; i--){
        printf("%d --> %d\n", i, numeros[i]);
    }

    system("pause");
    return 0;
}
