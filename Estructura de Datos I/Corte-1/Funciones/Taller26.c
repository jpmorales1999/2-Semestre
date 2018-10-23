#include <stdio.h>
#include <stdlib.h>

//Prototipo funciones
void llenarMatriz();
void suma(int matriz[][3]);

//Variable global
int matriz[3][3];

int main()
{
    llenarMatriz();
    suma(matriz);

    system("pause");
    return 0;
}

void llenarMatriz(){
    //Llenamiento de la matriz
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Ingrese un numero para la matriz: \n");
            scanf("%d",&matriz[i][j]);
        }
    }
}

void suma(int matriz[][3]){
    //Sumando los elementos de la matriz e imprimiendo
    int suma=0;
    printf("Imprimiendo matriz\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Sumar elementos\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                suma = suma + matriz[i][j];
        }
    }
    printf("El valor total de la suma de la matriz es de: %d\n", suma);
}
