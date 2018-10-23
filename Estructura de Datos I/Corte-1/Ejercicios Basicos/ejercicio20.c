#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que calcule y realice la suma de los cuadrados de los primeros 10 enteros mayores que 0
    int i, suma=0, resultado=0;

    for(i=1;i<=10;i++){
        resultado = i*i;
        suma = suma + resultado;
    }
    printf("La suma de los cuadrados es de: %d\n", suma);


    system("pause");
    return 0;
}
