#include <stdio.h>
#include <stdlib.h>

//Comprobar si un numero es impar o par, y señalar la posicion en memoria donde se esta guardando el numero

int main()
{
    int numero, *Pnumero;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    Pnumero = &numero;

    if(*Pnumero%2==0){
        printf("El numero %d es par\n", *Pnumero);
        printf("Su posicion en memoria es: %d\n", Pnumero);
    }else{
        printf("El numero %d es impar\n", *Pnumero);
        printf("Su posicion en memoria es: %d\n", Pnumero);
    }

    system("pause");
    return 0;
}
