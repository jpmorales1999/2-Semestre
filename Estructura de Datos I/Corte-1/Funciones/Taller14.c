#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void datos();
void simetrica(int matriz[][100],int filas, int columnas);

//Variables
int matriz[100][100], filas, columnas;


int main()
{
    datos();
    simetrica(matriz,filas,columnas);

    system("pause");
    return 0;
}

void datos(){
    //Pidiendo numero de filas y columnas y llenando el vector
    printf("Ingrese la cantidad de filas de la matriz:\n");
    scanf("%d",&filas);
    printf("Ingrese la cantidad de columnas de la matriz:\n");
    scanf("%d",&columnas);

    for(int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            printf("Digite un numero para la posicion: [%d] [%d] ", i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

void simetrica(int matriz[][100], int filas, int columnas){
    //Determinar si la matriz es simetrica o no
    int contador=0;
    if(filas==columnas){
        for(int i=0; i<filas; i++){
            for (int j=0; j<columnas; j++){
                if(matriz[i][j]==matriz[j][i]){
                    contador++;
                }
            }
        }
    }
    if (contador==filas*columnas){
        printf("La matriz es simetrica\n");
    }else{
        printf("La matriz no es simetrica\n");
    }
}
