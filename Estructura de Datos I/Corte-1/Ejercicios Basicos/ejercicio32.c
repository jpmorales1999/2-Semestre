#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Hacer un menu con diferentes opciones frente a un numero
    int opcion, numero;
    float cubo=0;

    printf("BIENVENIDO AL MENU INGRESE UN NUMERO PARA LUEGO ESCOGER LA OPCION DESEADA:\n");
    scanf("%d",&numero);
    printf("1. Cubo del numero ingresado\n");
    printf("2. Determinacion de si es un numero par o impar\n");
    printf("3. Salir del menu de opciones\n");
    printf("Opcion:\n");
    scanf("%d",&opcion);

    switch(opcion){
        case 1:
            cubo = pow(numero,3);
            printf("Su numero al cubo es: %1.0f\n", cubo);
            break;
        case 2:
            if(numero%2==0){
                printf("El numero ingresado es un par\n");
            } else {
                printf("El numero ingresado es un impar\n");
            }
            break;
        case 3:
            printf("Ha finalizado el menu\n");
            break;
        default: printf("La opcion ingresada es invalida\n");
    }


    system("pause");
    return 0;
}
