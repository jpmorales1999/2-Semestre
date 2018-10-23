#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void ingresarDatos();
int suma(int vector[], int tamano);

//Variables
int vector[], tamano=5;

int main()
{
    ingresarDatos();
    suma(vector, tamano);

    printf("La suma de los elementos del vector es: %d\n", suma(vector,tamano));

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Pedir datos al usuario para llenar el vector
    for(int i=0; i<tamano; i++){
        printf("Digite un numero:\n");
        scanf("%d",&vector[i]);
    }
}

int suma(int vector[], int tamano){
    //Suma total elementos del vector
    int suma=0;
    for(int i=0; i<tamano; i++){
        suma = suma + vector[i];
    }
    return suma;
}
