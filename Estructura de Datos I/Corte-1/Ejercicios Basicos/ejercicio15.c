#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Factorial de un numero
    int numero, factorial, resultado=1;
    printf("Ingrese un numero para determinar su factorial:\n");
    scanf("%d",&numero);
    factorial=numero;

    while(factorial>1){
        resultado=resultado*factorial;
        factorial=factorial-1;
    }

    printf("El valor del factorial es: %d\n", resultado);


    system("pause");
    return 0;
}
