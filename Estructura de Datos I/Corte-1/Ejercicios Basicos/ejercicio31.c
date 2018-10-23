#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que simule un cajero automatico con 1.000.000 de saldo inicial que permita ingresar y retirar dinero
    int opcion, saldoInicial= 1000000, ingreso=0, retiro=0, saldo=0;
    printf("\nBIENVENIDO A SU CAJERO AUTOMATICO\n");
    printf("Elija la opcion a realizar\n");
    printf("1. Verificar saldo en la cuenta\n");
    printf("2. Ingresar dinero a la cuenta\n");
    printf("3. Retirar dinero de la cuenta\n");
    printf("4. Salir de su cajero automatico\n");
    printf("Opcion:\n");
    scanf("%d",&opcion);

    switch(opcion){
    case 1:
        printf("Su saldo en cuenta es de: %d\n", saldoInicial);
        break;
    case 2:
        printf("Digite la cantidad de dinero a ingresar en su cuenta:\n");
        scanf("%d",&ingreso);
        saldo = saldoInicial+ingreso;
        printf("El saldo actual de su cuenta es de: %d\n", saldo);
        break;
    case 3:
        printf("Digite la cantidad de dinero a retirar de la cuenta:\n");
        scanf("%d",&retiro);
        if(retiro > saldoInicial){
            printf("No cuenta con esa cantidad de dinero en su cuenta\n");
        } else {
            saldo = saldoInicial - retiro;
            printf("Su saldo actual es de: %d\n", saldo);
        }
        break;
    case 4:
        printf("Ha salido con su exito de su cuenta\n");
        break;
    default: printf("La opcion es invalida\n");
    }

    system("pause");
    return 0;
}
