#include <stdio.h>
#include <stdlib.h>

//Prototipo funciones
void ingresarNumeros();
void pares(int par[10]);

//Variable global
int vector[10];

int main(){

    ingresarNumeros();
    pares(vector);

    system("pause");
    return 0;
}

void ingresarNumeros(){
    //Llenamiento del vector
    for(int i=0; i<10; i++){
        printf("Ingrese un numero:\n");
        scanf("%d",&vector[i]);
    }
}

void pares(int par[10]){
    //Determinando los pares del vector
    for(int i=0; i<10; i++){
        if(par[i]%2==0){
            printf("%d Este numero es par\n", par[i]);
        }else{
            printf("%d Este numero no es par\n", par[i]);
        }
    }
}
