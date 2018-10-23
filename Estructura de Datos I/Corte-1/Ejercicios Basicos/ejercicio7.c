#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Determinar entre tres numeros cual es el mayor
    int n1, n2, n3;
    printf("Ingrese el valor del primer numero:\n"); scanf("%d",&n1);
    printf("Ingrese el valor del segundo numero:\n"); scanf("%d",&n2);
    printf("Ingrese el valor del tercer numero:\n"); scanf("%d",&n3);

    if ((n1>n2) && (n1>n3)){
        printf("El numero uno es el mayor\n");
    } else if ((n2>n1) && (n2>n3)){
        printf("El numero dos es el mayor\n");
    } else {
        printf("El numero tres es el mayor\n");
    }

    system("pause");
    return 0;
}
