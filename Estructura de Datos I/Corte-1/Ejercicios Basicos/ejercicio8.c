#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Determinar si el numero entero ingresado es par o impar
    int numero;
    printf("Ingrese un numero para determinar si es par o impar:\n");
    scanf("%d",&numero);

    if (numero%2==0){
        printf("El numero es par\n");
    } else {
        printf("El numero es impar\n");
    }

    system("pause");
    return 0;
}
