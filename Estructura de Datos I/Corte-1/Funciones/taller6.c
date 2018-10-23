#include <stdio.h>
#include <stdlib.h>

//Prototipo de la funcion
void cambiar(int* , int* );

int main(){

    int numero1, numero2;
    printf("Digite el valor del primer numero:\n");
    scanf("%d",&numero1);
    printf("Digite el valor del segundo numero:\n");
    scanf("%d",&numero2);

    cambiar(&numero1,&numero2);

    printf("El nuevo valor del primer numero es: %d\n",numero1);
    printf("El nuevo valor del segundo numero es: %d\n",numero2);

    system("pause");
    return 0;
}

void cambiar(int*numero1, int*numero2){
    //Asignando nuevo valor a variable en su posicion en memoria
    int aux;
    aux=*numero1;
    *numero1=*numero2;
    *numero2=aux;
}
