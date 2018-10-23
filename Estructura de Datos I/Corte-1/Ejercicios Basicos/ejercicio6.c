#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Determinar entre dos numeros cual es el mayor
    int n1, n2;
    printf("Ingrese el valor del primer numero y despues ingrese el del segundo:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);

    if (n1>n2){
        printf("El primer numero es mayor que el segundo\n");
    } else {
        printf("El segundo numero es mayor que el primero\n");
    }


    system("pause");
    return 0;
}
