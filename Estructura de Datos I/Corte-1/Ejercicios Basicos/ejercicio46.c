#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[3][3], matriz2[3][3], sumaMatriz[3][3];

    printf("Matriz 1:\n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d",&matriz1[i][j]);
        }
    }

    printf("Matriz 2:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                printf("Digite un numero [%d][%d]: ", i, j);
                scanf("%d",&matriz2[i][j]);
        }
    }

    printf("Suma de las matrices:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                sumaMatriz[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }

    printf("Resultado de la suma de las matrices\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                printf("%d", sumaMatriz[i][j]);
                printf(" ");
        }
        printf("\n");
    }



    system("pause");
    return 0;
}
