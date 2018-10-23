#include <stdio.h>
#include <stdlib.h>

//Prototipo de las funciones
void ingresarDatos();
void mult(float numero1, float numero2);

//Variables
float numero1, numero2;

int main(){
    ingresarDatos();
    mult(numero1, numero2);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Pedimos datos al usuario
    printf("Digite los numeros a multiplicar:\n");
    scanf("%f\n %f",&numero1,&numero2);
}

void mult(float numero1, float numero2){
    //Multiplicamos los dos numeros
    float resultado;
    resultado=numero1*numero2;

    printf("El resultado de la multiplicacion es: %f\n", resultado);
}
