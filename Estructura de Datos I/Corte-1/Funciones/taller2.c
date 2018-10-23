#include <stdio.h>
#include <stdlib.h>

//Prototipo de las funciones
void ingresarDatos();
void al_cuadrado(float x);

//Variable
float numero;

int main()
{
    ingresarDatos();
    al_cuadrado(numero);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Pedir dato al usuario
    printf("Digite un numero para elevarlo al cuadrado:\n");
    scanf("%f",&numero);
}

void al_cuadrado(float x){
    //Operacion cuadrado de un numero
    float resultado;
    resultado=x*x;

    printf("El resultado del numero al cuadrado es: %1.1f\n", resultado);
}
