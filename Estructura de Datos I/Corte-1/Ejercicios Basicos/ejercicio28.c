#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que determine si la vocal es mayuscula o minuscula o si no es vocal
    char vocal;

    printf("Ingrese una vocal\n");
    scanf("%c",&vocal);

    switch(vocal){
        case 'a': printf("La vocal es minuscula\n"); break;
        case 'e': printf("La vocal es minuscula\n"); break;
        case 'i': printf("La vocal es minuscula\n"); break;
        case 'o': printf("La vocal es minuscula\n"); break;
        case 'u': printf("La vocal es minuscula\n"); break;
        case 'A': printf("La vocal es mayuscula\n"); break;
        case 'E': printf("La vocal es mayuscula\n"); break;
        case 'I': printf("La vocal es mayuscula\n"); break;
        case 'O': printf("La vocal es mayuscula\n"); break;
        case 'U': printf("La vocal es mayuscula\n"); break;
        default: printf("No es una vocal\n");

    }

    system("pause");
    return 0;
}
