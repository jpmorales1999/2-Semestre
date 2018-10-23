#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que lea numeros hasta que se le digite el cero y mostrar en pantalla los numeros mayores que cero leidos
    int numero, acum=0;
    do{
        printf("Ingrese digitos al azar y a la final digite el cero, para ver en pantalla los numeros leidos\n");
        scanf("%d",&numero);
        if(numero>0){
         acum++;
        }
    }while(numero!=0);

    printf("El numero de valores introducidos antes del cero fueron: %d\n", acum);



    system("pause");
    return 0;
}
