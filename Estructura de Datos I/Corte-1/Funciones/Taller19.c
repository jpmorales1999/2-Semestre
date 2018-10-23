#include <stdio.h>
#include <stdlib.h>

//Variables
int arreglo[100][100];
int filas = 4, columnas =4;

//Prototipos de las funciones
void pedirDatos();
void operaciones(int arreglo[][columnas], int filas, int columnas);
void imprimir(int arreglo[][columnas], int filas, int columnas);

int main()
{
    operaciones(arreglo,filas,columnas);
    imprimir(arreglo,filas,columnas);

    system("pause");
    return 0;
}

void operaciones(int arreglo[][columnas], int filas, int columnas){
    /* Llenando la matriz donde en la columna 1 se ingresen los numeros ingresados por el usuario
    en la segundo columna se ponen esos numeros pero al cuadrado, en la tercera se ponen esos numeros
    elevados al cubo y en la cuarta columna esos numeros elevados a la cuarta */
    int num1, num2, num3, num4;
    printf("Digite 4 numeros:\n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
                if(i==0 && j==0){
                    arreglo[i][j]=num1;
                }
                if(i==0 && j==1){
                    arreglo[i][j]=num1*num1;
                }
                if(i==0 && j==2){
                    arreglo[i][j]=num1*num1*num1;
                }
                if(i==0 && j==3){
                    arreglo[i][j]=num1*num1*num1*num1;
                }
                if(i==1 && j==0){
                    arreglo[i][j]=num2;
                }
                if(i==1 && j==1){
                    arreglo[i][j]=num2*num2;
                }
                if(i==1 && j==2){
                    arreglo[i][j]=num2*num2*num2;
                }
                if(i==1 && j==3){
                    arreglo[i][j]=num2*num2*num2*num2;
                }
                if(i==2 && j==0){
                    arreglo[i][j]=num3;
                }
                 if(i==2 && j==1){
                    arreglo[i][j]=num3*num3;
                }
                 if(i==2 && j==2){
                    arreglo[i][j]=num3*num3*num3;
                }
                 if(i==2 && j==3){
                    arreglo[i][j]=num3*num3*num3*num3;
                }
                 if(i==3 && j==0){
                    arreglo[i][j]=num4;
                }
                if(i==3 && j==1){
                    arreglo[i][j]=num4*num4;
                }
                if(i==3 && j==2){
                    arreglo[i][j]=num4*num4*num4;
                }
                if(i==3 && j==3){
                    arreglo[i][j]=num4*num4*num4*num4;
                }
       }
   }
}

void imprimir(int arreglo[][columnas], int filas, int columnas){
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            printf("%d ", arreglo[i][j]);
        }
        printf("\n");
    }
}
