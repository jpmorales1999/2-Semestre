#include <stdio.h>
#include <stdlib.h>

//Prototipo de la funcion
void maximo(int x, int y, int z);

//Variables
int n1,n2,n3;

int main()
{
    maximo(n1,n2,n3);

    system("pause");
    return 0;
}

void maximo(int x, int y, int z){
    //Determinar el numero mayor que hay entre tres numeros
    printf("Ingrese tres numeros para determinar cual es el mayor\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y&&x>y){
        printf("El mayor es: %d\n", x);
    }else if(y>x&&y>z){
        printf("El mayor es: %d\n", y);
    }else if(z>x&&z>y){
        printf("El mayor es: %d\n", z);
    }
}

