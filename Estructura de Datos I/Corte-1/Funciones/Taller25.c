#include <stdio.h>
#include <stdlib.h>

//Prototipo funciones
void pedirDato();
void llenar(int tamano);
void buscar(int vector[], int tamano);

//Variable global
int tamano, vector[100];

int main()
{
    pedirDato();
    llenar(tamano);
    buscar(vector,tamano);

    system("pause");
    return 0;
}

void pedirDato(){
    //Tamaño
    printf("Ingrese la cantidad de elementos del vector\n");
    scanf("%d",&tamano);
}

void llenar(int tamano){
    //Llenar vector
    for(int i=0; i<tamano; i++){
        printf("Digite un numero: \n");
        scanf("%d",&vector[i]);
    }
}

void buscar(int vector[], int tamano){
    //buscar un numero en particular
    int numero;
    char bandera = 'F';
    printf("Ingrese el numero a buscar: \n");
    scanf("%d",&numero);

    for(int i=0; i<tamano; i++){
        if(vector[i]==numero){
            bandera = 'V';
            if(bandera=='V'){
        printf("El numero ingresado se ha encontrado en el vector en la posicion %d del vector \n", i);
        }
    }
 }
    if(bandera=='F'){
    printf("El numero ingresado no se encuentra en el vector\n");
    }
}
