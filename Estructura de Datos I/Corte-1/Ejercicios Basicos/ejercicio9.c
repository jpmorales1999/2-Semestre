#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Determinar si un numero ingresado por el usuario es positivo o negativo
    float numero;
    printf("Ingrese un numero para determinar si es positivo o negativo:\n");
    scanf("%f",&numero);

    if (numero>=0) {
        printf("El numero es positivo\n");
    } else {
        printf("El numero es negativo\n");
    }

    system("pause");
    return 0;
}
