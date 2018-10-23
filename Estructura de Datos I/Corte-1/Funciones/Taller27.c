#include <stdio.h>
#include <stdlib.h>

//Prototipo funciones
void llenarMatriz();
void imprimir(int matriz[][3]);

//Variable global
int matriz[3][3];

int main()
{
    llenarMatriz();
    imprimir(matriz);

    system("pause");
    return 0;
}

void llenarMatriz(){
    //Llenando matriz con numero aleatorios generados por el sistema
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz[i][j] = rand() % 1000;
        }
    }
}

void imprimir(int matriz[][3]){
    //Imprimiendo la matriz
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
