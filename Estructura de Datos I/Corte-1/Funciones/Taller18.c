#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void pedirDatos();
void operacion(int arreglo[][100], int filas, int columnas);
void imprimir();

//Variables
int arreglo[100][100];
int num1, num2;

int main()
{
    pedirDatos();
    operacion(arreglo,num1,num2);
    imprimir(arreglo,num1,num2);

    system("pause");
    return 0;
}

void pedirDatos(){
    //Pedir datos al usuario
    printf("Digite el valor de las filas\n");
    scanf("%d",&num1);
    printf("Digite el valor de las columnas\n");
    scanf("%d",&num2);
}

void operacion(int arreglo[][100], int filas, int columnas){
    //Llenar matriz con 0 o 1
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
                if(j%2==0){
                    arreglo[i][j]=1;
                }else{
                    arreglo[i][j]=0;
                }
        }
    }
}

void imprimir(int arreglo[][100], int filas, int columnas){
    //Imprimiendo matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf("%d ", arreglo[i][j]);
        }
        printf("\n");
    }
}
