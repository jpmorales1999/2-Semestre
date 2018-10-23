#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que determine si el caracter es una vocal minuscula o no
    char vocal;

    printf("Ingrese un vocal:\n");
    scanf("%c",&vocal);

    switch(vocal){
    case 'a': printf("La vocal es minuscula\n"); break;
    case 'e': printf("La vocal es minuscula\n"); break;
    case 'i': printf("La vocal es minuscula\n"); break;
    case 'o': printf("La vocal es minuscula\n"); break;
    case 'u': printf("La vocal es minuscula\n"); break;
    default: printf("La vocal NO es minuscula\n");
    }


    system("pause");
    return 0;
}
