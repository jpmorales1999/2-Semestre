#include <stdio.h>
#include <stdlib.h>

//Prototipo funciones
void pedirDato();
void llenandoVector(int tamano);
void menor(int vector[], int tamano);

//Variable globlal
int vector[100], tamano;

int main(){

    pedirDato();
    llenandoVector(tamano);
    menor(vector, tamano);

    system("pause");
    return 0;
}

void pedirDato(){
    //Pedir numero de elementos
    printf("Ingrese la cantidad de elementos que tendra el vector:\n");
    scanf("%d",&tamano);
}

void llenandoVector(int n){
    //Llenando el vector
    for(int i=0; i<tamano; i++){
        printf("Ingrese un numero:\n");
        scanf("%d",&vector[i]);
    }
}

void menor(int vector[], int tamano){
    //Determinar el numero menor del vector
    int menor=99999;
    for(int i=0; i<tamano; i++){
        if(vector[i]<menor){
            menor=vector[i];
        }
    }
    printf("El numero menor del vector es: %d\n", menor);
}

