#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    //Creamos 2 matrices de 3x3 para calcular su suma
    int matriz[3], matrizz[3], matrizzz[3];
    int *Pmatriz = matriz, *Pmatrizz = matrizz, *Pmatrizzz = matrizzz;
    int vector[3], vectorr[3], vectorrr[3];
    int *Pvector = vector, *Pvectorr = vectorr, *Pvectorrr = vectorrr;

    //Llenando vector 1
    for(i=0; i<3; i++){
        *(Pmatriz+i) = rand () % 100;
        *(Pmatrizz+i) = rand () % 100;
        *(Pmatrizzz+i) = rand () % 100;
    }

    //Llenando vector 2
    for(i=0; i<3; i++){
        *(Pvector+i) = rand () % 100;
        *(Pvectorr+i) = rand () % 100;
        *(Pvectorrr+i) = rand () % 100;
    }

    //Sumando Matrices
    for(i=0; i<3; i++){
        *(Pmatriz+i) += *(Pvector+i);
        *(Pmatrizz+i) += *(Pvectorr+i);
        *(Pmatrizzz+i) += *(Pvectorrr+i);
    }

    //Mostrando matriz sumada
    printf("Mostrando Matrices sumadas: \n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }

    system("pause");
    return 0;
}
