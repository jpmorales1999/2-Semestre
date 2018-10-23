#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void ingresarDatos();
void funpot(int x, int y);

//Variables
int numero, potencia;

int main()
{
    ingresarDatos();
    funpot(numero, potencia);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Pedir datos al usuario
    printf("Digite un numero: \n");
    scanf("%d",&numero);
    printf("Digite su exponente: \n");
    scanf("%d",&potencia);
}

void funpot(int x, int y){
    //Operacion numero elevado a la potencia brindada por el usuario
    int resultado=1;
    for(int i=1; i<=y; i++){
        resultado=resultado*x;
    }
    printf("El resultado de la operacion es: %d\n", resultado);
}


