#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void ingresarDatos();
void imprimir(int vector[], int tamano);
void impares(int vector[], int tamano);
void imprimir2(int vector[], int tamano);

//Variables
int vector[], tamano=5;

int main()
{
    ingresarDatos();
    imprimir(vector,tamano);
    impares(vector,tamano);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Llenando el vector
    printf("Vamos a llenar el vector:\n");
    for(int i=0; i<tamano; i++){
        printf("Digite numeros al azar:\n");
        scanf("%d",&vector[i]);
    }
}

void imprimir(int vector[], int tamano){
    //Imprimir el vector
    printf("Vamos a impimir el vector:\n");
    for(int i=0; i<tamano; i++){
        printf("%d\n", vector[i]);
    }
}

void impares(int vector[], int tamano){
    //Determinando los impares del vector y los que son pares aclara textualmente que no son impares
    int nuevo[tamano];
    printf("Impares de un nuevo vector:\n");
    for (int i=0; i<tamano; i++){
        if(vector[i]%2==1){
            nuevo[i]=vector[i];
            printf("%d\n", nuevo[i]);
        }else{
            nuevo[i]=printf("El valor en este subindice no era impar\n");
        }
    }
}
