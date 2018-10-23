#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que lea un vector de numeros y muestre en la salida, los numeros con sus indices asociados
    int numeros[100], n;
    printf("Ingrese la cantidad de elementos que tendra el vector:\n");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Digite un numero:\n");
        scanf("%d",&numeros[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d --> %d\n", i, numeros[i]);
    }

    system("pause");
    return 0;
}
