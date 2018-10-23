#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Sumar los numeros par del 1 al 50
    int i, suma=0;

    i=1;

    while(i<=50){
        if(i%2==0){
            suma = suma+i;
        }
        i++;
    }
    printf("El total de la suma de los pares es: %d\n", suma);

    system("pause");
    return 0;
}
