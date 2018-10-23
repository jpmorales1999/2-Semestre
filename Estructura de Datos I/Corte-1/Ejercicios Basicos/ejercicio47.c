#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[100][100], filas, columnas;
    char band = 'F';

    printf("Digite la cantidad de filas\n");
    scanf("%d",&filas);
    printf("Digite la cantidad de columnas\n");
    scanf("%d",&columnas);

    //Matriz 1
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("Digite un numero: [%d][%d]", i, j);
            scanf("%d",&matriz1[i][j]);
        }
    }
    if(filas==columnas){
        for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            if(matriz1[i][j]==matriz1[j][i]){
              band = 'V';
            }
    }
        }
    }

    if(band == 'V'){
        printf("La matriz es simetrica\n");
    }else{
        printf("La matriz no es simetrica\n");
    }


    system("pause");
    return 0;
}
