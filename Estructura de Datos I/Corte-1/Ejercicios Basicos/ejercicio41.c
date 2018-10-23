#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabla[100][100], columnas, filas;

    printf("Ingrese el numero de filas para la matriz\n");
    scanf("%d",&filas);

    printf("Ingrese el numero de columnas para la matriz\n");
    scanf("%d",&columnas);

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d",&tabla[i][j]);
        }
    }

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("%d", tabla[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
