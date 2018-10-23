#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa donde el usuario digita un numero entre 20-30 o pulsa 0 y calcula la suma de los numeros que se digitaron fuera del  rango
    int suma=0, numero;

    do{
            printf("Ingrese un valor que se encuentre entre el rango 20-30 o introduzca un 0\n");
            scanf("%d",&numero);
                if(numero>0) {
                suma = suma+numero;
                    }
        }while( ((numero<20) || (numero>30)) && (numero!=0));

        printf("La suma de los valores ingresados por fuera del rango 20-30 y el 0 es: %d\n", suma);


    system("pause");
    return 0;
}
