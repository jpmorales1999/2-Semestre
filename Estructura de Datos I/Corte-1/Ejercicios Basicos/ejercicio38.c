#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[]={2,4,6,8,20}, suma=0;

    for(int i=0; i<5; i++){
        suma=suma+numeros[i];
        if (numeros[i]==suma){
            printf("Si existe un valor: %d\n", numeros[i]);
        }else{
            printf("No existe un valor\n");
        }
    }

    system("pause");
    return 0;
}
