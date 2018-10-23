#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, suma=0;
    //Crear una matriz que sume todos los elementos en ella
    int vector1[3], vector2[3], vector3[3], *Pvector1 = vector1, *Pvector2 = vector2, *Pvector3 = vector3;

    //Llenando primer vector
    for(i=0; i<3; i++){
        printf("Digite un numero: ");
        scanf("%d",&*(Pvector1+i));
    }
    //Llenando segundo vector
    for(i=0; i<3; i++){
        printf("Digite un numero: ");
        scanf("%d",&*(Pvector2+i));
    }
    //Llenando tercer vector
    for(i=0; i<3; i++){
        printf("Digite un numero: ");
        scanf("%d",&*(Pvector3+i));
    }

    //Sumando matriz
    for(i=0; i<3; i++){
        suma += (*(Pvector1+i)+*(Pvector2+i)+*(Pvector3+i));
    }
    printf("La suma total de todos los elementos del vector es: %d\n", suma);

    system("pause");
    return 0;
}
