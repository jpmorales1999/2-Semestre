#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa donde el usuario ingrese un entero entre 1-10 y muestre en la salida su tabla de multiplicar
    int numero, n=1, multiplicacion=0;

    do{
            printf("Ingrese un numero entre el 1 y el 10 para mostrar su tabla de multiplicar\n");
            scanf("%d",&numero);
        }while(numero<1||numero>10);

        do{
            multiplicacion = numero*n;
            printf("%d * %d = %d\n", numero,n,multiplicacion);
            n++;
        }while(n<=10);


    system("pause");
    return 0;
}
