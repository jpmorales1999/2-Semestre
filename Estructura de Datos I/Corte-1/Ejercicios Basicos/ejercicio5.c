#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pedir al usuario que ingrese el valor del dolar y pedir la cantidad de dolares que tiene, determinar cuanto dinero tiene la persona
    int valorDolar, cantidadDolar, resultado=0;
    printf("Ingrese el valor del dolar y despues ingrese su cantidad de dolares:\n");
    scanf("%d",&valorDolar);
    scanf("%d",&cantidadDolar);

    resultado = valorDolar*cantidadDolar;

    printf("La cantidad total que posee es: %d\n", resultado);


    system("pause");
    return 0;
}
