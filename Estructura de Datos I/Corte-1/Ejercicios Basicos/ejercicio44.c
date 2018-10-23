#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[2][2];
    int numeros2[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Digite un numero [%d][%d]: ", i,j);
            scanf("%d",&numeros[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            numeros2[i][j]=numeros[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d", numeros2[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
