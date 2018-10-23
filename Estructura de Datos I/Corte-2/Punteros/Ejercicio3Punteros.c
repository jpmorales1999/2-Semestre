#include <stdio.h>
#include <stdlib.h>

//Declarar un vector de 10 numeros indicar cuales son pares y su posicion en memoria

int main()
{
    int numeros[10], *Pnumeros;

    for(int i=0; i<10; i++){
        printf("Ingrese un numero [%d]: ",i);
        scanf("%d",&numeros[i]);
    }

    Pnumeros = numeros;

    for(int i=0; i<10; i++){
        if(*Pnumeros%2==0){
            printf("El numero %d es par\n", *Pnumeros);
            printf("La direccion en memoria es: %d\n", Pnumeros);
        }
        Pnumeros++;
    }

    system("pause");
    return 0;
}
