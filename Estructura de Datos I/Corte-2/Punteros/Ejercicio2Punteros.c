#include <stdio.h>
#include <stdlib.h>

//Determinar si un numero es primo o no ademas indicar su posicion en memoria donde se esta guardando el numero

int main()
{
    int numero, *Pnumero;
    int contador=0;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    Pnumero = &numero;

    for(int i=1; i<=numero; i++){
        if(numero%i==0){
            contador++;
        }
    }

    if(contador==2){
        printf("El numero %d es primo\n", *Pnumero);
        printf("Su posicion en memoria es: %d\n", Pnumero);
    }else{
        printf("El numero %d no es primo\n", *Pnumero);
        printf("Su posicion en memoria es: %d\n", Pnumero);
    }

    system("pause");
    return 0;
}
