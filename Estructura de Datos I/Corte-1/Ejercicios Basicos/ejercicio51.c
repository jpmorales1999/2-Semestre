#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const l=30;
    char cadena1[l];
    char cadena2[l];

    printf("Digite la primer cadena\n");
    fgets(cadena1,l,stdin);
    printf("Digite la segunda cadena\n");
    fgets(cadena2,l,stdin);

    if(cadena1==cadena2){
        printf("Las cadenas son iguales\n");
    }else if(cadena1>cadena2){
        printf("La cadena uno es mayor");
    }else if(cadena2>cadena1){
        printf("La cadena dos es mayor");
    }

    system("pause");
    return 0;
}
