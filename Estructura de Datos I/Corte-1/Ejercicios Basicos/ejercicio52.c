#include <stdio.h>
#include <stdlib.h>

int main()
{
    char saludo[]="Buenos dias ";
    char nombre[20];
    char termino[30];

    printf("Digite su nombre\n");
    fgets(nombre,30,stdin);

    for(int i=0; i<30; i++){
        termino[i]=saludo[i];
    }
    for(int i=12; i<30; i++){
        termino[i]=nombre[i-12];
    }

    printf("%s", termino);


    system("pause");
    return 0;
}
