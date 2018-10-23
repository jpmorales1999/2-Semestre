#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Sumar los numeros del 1 al 100
    int i=1, suma=0;

    while(i<=100){
        suma=suma+i;
        i++;
    }

    printf("%d\n", suma);


    system("pause");
    return 0;
}
