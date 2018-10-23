#include <stdio.h>
#include <stdlib.h>

//Prototipo de las funciones
void ingresarDatos();
void resultado(float x);

//Variable
float numero;

int main()
{
    ingresarDatos();
    resultado(numero);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Pedir datos al usuario
    printf("Digite un numero decimal: \n");
    scanf("%f",&numero);
}

void resultado(float x){
    //Operacion hacer que un numero sea menor que uno
    float solucion;
    while(x>1){
        x--;
    }
    printf("El numero en su parte fraccionaria es: %0.3f\n", x);
}
