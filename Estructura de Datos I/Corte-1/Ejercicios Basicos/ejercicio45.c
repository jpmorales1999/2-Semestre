#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabla[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite un numero [%d][%d]: ", i, j);
            scanf("%d",&tabla[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", tabla[j][i]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
