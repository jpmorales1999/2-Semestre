#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vector que lea sus elementos (enteros) y muestra en pantalla el mayor
    int numeros[200], n, mayor=-99999;
    printf("Ingrese la cantidad de elementos del vector:\n");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Digite un numero: \n");
        scanf("%d",&numeros[i]);

        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
    }

    printf("El numero mayor del vector es: %d\n", mayor);

    system("pause");
    return 0;
}
