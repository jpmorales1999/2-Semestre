#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Usuario ingresa numero para plasmar su tabla de multiplicacion hasta el 10
    int numero, resultado=0;

    printf("Ingrese el numero a multiplicar:\n");
    scanf("%d",&numero);

    resultado=numero*1;
    printf("%d * 1 = %d\n", numero, resultado);
    resultado=numero*2;
    printf("%d * 2 = %d\n", numero, resultado);
    resultado=numero*3;
    printf("%d * 3 = %d\n", numero, resultado);
    resultado=numero*4;
    printf("%d * 4 = %d\n", numero, resultado);
    resultado=numero*5;
    printf("%d * 5 = %d\n", numero, resultado);
    resultado=numero*6;
    printf("%d * 6 = %d\n", numero, resultado);
    resultado=numero*7;
    printf("%d * 7 = %d\n", numero, resultado);
    resultado=numero*8;
    printf("%d * 8 = %d\n", numero, resultado);
    resultado=numero*9;
    printf("%d * 9 = %d\n", numero, resultado);
    resultado=numero*10;
    printf("%d * 10 = %d\n", numero, resultado);

    system("pause");
    return 0;
}
