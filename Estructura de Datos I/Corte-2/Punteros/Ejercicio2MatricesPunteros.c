#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    //Creamos una matriz 3x3 para llenarla automaticamente por el sistema
    int vector1[3], vector2[3], vector3[3], *Pvector1 = vector1, *Pvector2 = vector2, *Pvector3 = vector3;

    //Llenando matriz con numero aleatorios
    for(i=0; i<3; i++){
        *(Pvector1+i) = rand () % 500;
        *(Pvector2+i) = rand () % 500;
        *(Pvector3+i) = rand () % 500;
    }

    //Mostrando matriz
    printf("Mostrando matriz: \n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pvector1+i));
        printf("%d \t", *(Pvector2+i));
        printf("%d \t", *(Pvector3+i));
        printf("\n");
    }

    system("pause");
    return 0;
}
