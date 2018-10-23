#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabla[50][50], tabla2[50][50], filas, columnas;

    printf("Ingrese el numero de filas\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d",&columnas);

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("Digite un numero [%d][%d]: ", i,j);
            scanf("%d",&tabla[i][j]);
        }
    }

    for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                tabla2[i][j]=tabla[i][j];
            }
    }

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("%d", tabla2[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
