#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vector que lea 5 numeros, lo copie a otro vector pero multiplicado por dos y mostrar en pantalla
    int numeros1[5], numeros2[5];

    for(int i=0; i<5; i++){
        printf("Digite un numero: \n");
        scanf("%d",&numeros1[i]);
    }

    for(int i=0; i<5; i++){
        numeros2[i]=numeros1[i]*2;
    }

    for(int i=0; i<5; i++){
        printf("%d --> %d\n", i, numeros2[i]);
    }

    system("pause");
    return 0;
}
