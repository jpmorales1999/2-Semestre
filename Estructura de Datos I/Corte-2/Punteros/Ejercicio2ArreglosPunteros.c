#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Creando matriz
    int arreglo1[3], arreglo2[3], arreglo3[3];
    int *Parreglo1 = arreglo1, *Parreglo2 = arreglo2, *Parreglo3 = arreglo3;

    //Llenando matriz con numeros entre 0 y 1
    for(int i=0; i<3; i++){
        *(Parreglo1+i) = rand() % 2;
        *(Parreglo2+i) = rand() % 2;
        *(Parreglo3+i) = rand() % 2;
    }

    //Mostrando matriz
    for(int i=0; i<3; i++){
        printf("%d \t", *(Parreglo1+i));
        printf("%d \t", *(Parreglo2+i));
        printf("%d \t", *(Parreglo3+i));
        printf("\n");
    }


    system("pause");
    return 0;
}
