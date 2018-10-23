#include <stdio.h>
#include <stdlib.h>

//Variables globales
int filas, columnas;
int matriz1[100][100];

//Prototipo funciones
void ingresarDatos();
void llenarMatriz(int ma1[][100], int filas, int columnas);
void traspuesta(int ma1[][100], int filas, int columnas);


int main()
{
    ingresarDatos();
    llenarMatriz(matriz1, filas, columnas);
    traspuesta(matriz1, filas, columnas);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Ingresando numero de filas y columnas
    printf("Ingrese la cantidad de filas para la matriz: \n");
    scanf("%d",&filas);
    printf("Ingrese la cantidad de columnas para la matriz: \n");
    scanf("%d",&columnas);
}


void llenarMatriz(int ma1[][100], int filas, int columnas){
    //Llenando la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("Ingrese un numero: \n");
            scanf("%d",&ma1[i][j]);
        }
    }

}

void traspuesta(int ma1[][100], int filas, int columnas){
    //Imprimiendo matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
                printf("%d ", ma1[i][j]);
        }
        printf("\n");
    }

    //Matriz traspuesta
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
                ma1[i][j] = ma1[j][i];
        }
    }
    //Imprimiendo traspuesta
    printf("Matriz traspuesta\n");
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
                printf("%d ", ma1[i][j]);
        }
        printf("\n");
    }


}
