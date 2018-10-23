#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    //Creamos una matriz 3x3 para generar su matriz traspuesta
    int vector1[3], vector2[3], vector3[3], *Pvector1 = vector1, *Pvector2 = vector2, *Pvector3 = vector3;

    //Llenando matriz con numero aleatorios
    for(i=0; i<3; i++){
        *(Pvector1+i) = rand () % 100;
        *(Pvector2+i) = rand () % 100;
        *(Pvector3+i) = rand () % 100;
    }

    //Mostrando matriz original
    printf("Mostrando matriz original: \n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pvector1+i));
        printf("%d \t", *(Pvector2+i));
        printf("%d \t", *(Pvector3+i));
        printf("\n");
    }

    printf("Matriz traspuesta: \n");
    //Generando Matriz traspuesta
    for(i=0; i<3; i++){
    printf("%d \t", *(Pvector1+i));
    }
    printf("\n");
    for(i=0; i<3; i++){
    printf("%d \t", *(Pvector2+i));
    }
    printf("\n");
    for(i=0; i<3; i++){
    printf("%d \t", *(Pvector3+i));
    }
    printf("\n");


    system("pause");
    return 0;
}
