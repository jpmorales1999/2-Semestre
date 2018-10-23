#include <stdio.h>
#include <stdlib.h>

// Arreglo que almacene n numeros, ordenarlos de forma ascendente y mostrarlo en pantalla

//Prototipo de funciones
void ingresarDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

//Variables Globales
int numeros[100], *Pnumeros = numeros;
int cantElementos;

int main()
{
    ingresarDatos();
    ordenarArreglo(Pnumeros,cantElementos);
    mostrarArreglo(Pnumeros,cantElementos);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Ingresando Datos para el vector
    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d",&cantElementos);

    for(int i=0; i<cantElementos; i++){
        printf("Digite un numero: ");
        scanf("%d",&*(Pnumeros+i));
    }
}

void ordenarArreglo(int *Pnumeros, int cantElementos){
    //Ordenamos el vector por burbuja
    int aux;
    for(int i=0; i<cantElementos; i++){
        for(int j=0; j<cantElementos-1; j++){
            if(*(Pnumeros+j)>*(Pnumeros+j+1)){
                aux = *(Pnumeros+j);
                *(Pnumeros+j) = *(Pnumeros+j+1);
                *(Pnumeros+j+1) = aux;
            }
        }
    }
}

void mostrarArreglo(int *Pnumeros, int cantElementos){
    //Mostramos el arreglo
    printf("Mostrando arreglo ordenado: \n");
    for(int i=0; i<cantElementos; i++){
        printf("%d ", *(Pnumeros+i));
    }
}

