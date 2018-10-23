#include <stdio.h>
#include <stdlib.h>

//Prototipo de funciones
void pedirDatos();
void llenarVector(int tamano);
void burbuja(int vector[], int tamano);
void imprimir(int vector[], int tamano);

//Variables globales
int vector[100], tamano;

int main()
{
    pedirDatos();
    llenarVector(tamano);
    burbuja(vector, tamano);
    imprimir(vector, tamano);

    system("pause");
    return 0;
}

void pedirDatos(){
    //Pedir al usuario el numero de elementos del vector
    printf("Ingrese el numero de elementos del vector:\n");
    scanf("%d",&tamano);
}

void llenarVector(int tamano){
    //Llenando el vector con numeros digitados
    for(int i=0; i<tamano; i++){
        printf("Ingrese un numero: ");
        scanf("%d",&vector[i]);
    }
}

void burbuja(int vector[], int tamano){
    //Ordenando el vector por el metodo burbuja
    int aux, j;
    for(int i=0; i<tamano; i++){
       for(int j=0; j<tamano; j++){
        if(vector[j]>vector[j+1]){
            aux=vector[j];
            vector[j]=vector[j+1];
            vector[j+1]=aux;
        }
            }
    }
}

void imprimir(int vector[], int tamano){
    //Imprimiendo el vector ordenado ascendentemente
    printf("Vector ordenado ascendentemente:\n");
    for(int i=1; i<=tamano; i++){
        printf("%d ", vector[i]);
    }
}
