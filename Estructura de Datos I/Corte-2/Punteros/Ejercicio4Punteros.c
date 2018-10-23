#include <stdio.h>
#include <stdlib.h>

/* Vector de n numeros y determinar el menor del vector */

int main()
{
    int numeros[100], *Pnumeros;
    int n, menor=9999999;

    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d",&n);

    //Llenando vector
    for(int i=0; i<n; i++){
        printf("Ingrese un numero: ");
        scanf("%d",&numeros[i]);
    }

    Pnumeros = numeros;

    //Determinando numero menor del vector
    for(int i=0; i<n; i++){
        if(*Pnumeros<menor){
            menor=*Pnumeros;
        }
        Pnumeros++;
    }

    printf("El menor elemento del vector es: %d\n", menor);



    system("pause");
    return 0;
}
