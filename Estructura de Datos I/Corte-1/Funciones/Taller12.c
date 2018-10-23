#include <stdio.h>
#include <stdlib.h>

//Prototipos de funciones
void ingresarDatos();
void negativo(int vector[], int tamano);
void imprimir(int vector[], int tamano);

//Variables
int vector[], tamano=5;

int main()
{
    ingresarDatos();
    negativo(vector,tamano);
    imprimir(vector, tamano);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Llenando el vector
    for(int i=0; i<tamano; i++){
    printf("Digite un numero entero positivo:\n");
    scanf("%d",&vector[i]);
  }
}

void negativo(int vector[], int tamano){
    //Convirtiendo los numeros positivos a negativos
    for(int i=0; i<tamano; i++){
        vector[i]=vector[i]*-1;
    }
}

void imprimir(int vector[], int tamano){
    //Imprimimos los numeros del vector
    printf("Nuevos signos para los valores ingresados en el vector:\n");
    for(int i=0; i<tamano; i++){
        printf("%d\n",vector[i]);
    }
}

