#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros1[3][3], numeros2[3][3], multiplicacion[3][3];

    printf("Matriz 1:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d",&numeros1[i][j]);
        }
    }

    printf("Matriz 2:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d",&numeros2[i][j]);
        }
    }

    printf("Multiplicacion de las matrices:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            multiplicacion[i][j] = numeros1[i][j]*numeros2[i][j];
        }
    }

    printf("Matriz resuelta\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", multiplicacion[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
