#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void datos();
void imprimir(int matriz[][100], int filas, int columnas);
void menor(int matriz[][100], int filas, int columnas);

//Variables
int matriz[100][100], filas, columnas;

int main()
{
    datos();
    imprimir(matriz,filas,columnas);
    menor(matriz,filas,columnas);


    system("pause");
    return 0;
}

void datos(){
    //Pidiendo al usuario numero de filas y columnas y llenando matriz
    printf("Digite el numero de filas de la matriz:\n");
    scanf("%d",&filas);
    printf("Digite el numero de columnas de la matriz:\n");
    scanf("%d",&columnas);

    printf("Llenamiento de la matriz:\n");
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("Digite un numero para la posicion [%d] [%d] ", i, j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

void imprimir(int matriz[][100],int filas,int columnas){
    //Imprimiendo la matriz
    printf("Imprimiendo la matriz\n");
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

void menor(int matriz[][100], int filas, int columnas){
    //Determinar el numero menor en la fila que escoja el usuario
    int menor = 9999;
    int filaEscogida;
    do{
        printf("Escoja una fila para determinar el menor de esta:\n");
        scanf("%d",&filaEscogida);
    }while(filaEscogida>filas);

    for(int i=filaEscogida; i<=filaEscogida; i++){
        for(int j=0; j<columnas; j++){
            if(matriz[i][j]<menor){
                menor=matriz[i][j];
            }
        }
        printf("El numero menor de la fila es: %d\n", menor);
    }

}
