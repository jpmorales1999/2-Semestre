#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calcular un programa que realice la suma hasta n numero
    int i, numero, suma=0;

    printf("Digite el numero de elementos:\n");
    scanf("%d",&numero);

    for(i=1; i<=numero; i++){
        suma=suma+i;
    }

    printf("La suma de los numeros es: %d\n", suma);


    system("pause");
    return 0;
}
