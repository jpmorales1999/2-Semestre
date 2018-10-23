#include <stdio.h>
#include <stdlib.h>


//Arreglo de n numeros, donde se busque el numero ingresado

//Prototipos de funciones
void pedirDatos();
int buscarNumero(int *, int );
void comprobacion(int);

//Variables globales
int numeros[100], *Pnumeros = numeros;
int cantElementos;

int main()
{
    int encontrado;

    pedirDatos();
    comprobacion(buscarNumero(Pnumeros,cantElementos));

    system("pause");
    return 0;
}

void pedirDatos(){
    //Llenando vector
    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d",&cantElementos);

    for(int i=0; i<cantElementos; i++){
        printf("Digite un numero: ");
        scanf("%d",&*(Pnumeros+i));
    }
}

int buscarNumero(int *Pnumeros, int cantElementos){
    //Buscamos un numero dentro del arreglo y retornamos
    int numeroBuscar, cont=0;
    printf("Ingrese el numero a buscar en el arreglo: ");
    scanf("%d",&numeroBuscar);

    for(int i=0; i<cantElementos; i++){
        if(*(Pnumeros+i) == numeroBuscar){
            return 1;
        }else{
            cont++;
        }
    }
    if(cont == cantElementos){
        return 2;
    }
}

void comprobacion(int encontrado){
    if(encontrado == 1){
        printf("Se encontro el numero en el arreglo\n");
    }else{
        printf("No se encontro el numero en el arreglo\n");
    }
}
