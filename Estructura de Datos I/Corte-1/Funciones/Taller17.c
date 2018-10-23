#include <stdio.h>
#include <stdlib.h>

//Prototipo de la funcion
void imprimir(float vector[], float tamano);

//Variable
float vector[] = {32.583, 11.239, 45.781, 22.237} , tamano = 4;

int main()
{

    imprimir(vector,tamano);

    system("pause");
    return 0;
}

void imprimir(float vector[], float tamano){
    //Imprimiendo el vector
    printf("Imprimiendo el vector\n");
    for(int i=0; i<tamano; i++){
        printf("%1.3f\n",vector[i]);
    }
}
