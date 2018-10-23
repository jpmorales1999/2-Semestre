#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void ingresarDatos();
void ordenamiento(int vector[],int tamano);

//Variables
int vector[], tamano=5;

int main()
{
    ingresarDatos();
    ordenamiento(vector,tamano);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Pedir numeros al usuario para llenar el vector
    printf("Llenamiento del vector:\n");
    for(int i=0; i<tamano; i++){
        printf("Digite un numero:\n");
        scanf("%d",&vector[i]);
    }
}

void ordenamiento(int vector[],int tamano){
    //Determinar si el vector esta ordenado crecientemente o no
    int aux=1;
    for(int i=1; i<tamano; i++){
        if(vector[i]>=vector[i-1]){
            aux++;
        }
    }
    if(aux==tamano){
        printf("El vector esta ordenado crecientemente\n");
    }else{
        printf("El vector esta desordenado\n");
    }
}
