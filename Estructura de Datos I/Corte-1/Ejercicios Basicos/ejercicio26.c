#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,i;
    printf("Ingrese un numero:\n");
    scanf("%d",&numero);

    for(i=2;numero>1;i++){
        while(numero%i==0){
            printf("%d",i);
            printf("%d \t | \t %d\n", numero,i);
            numero=numero/i;
        }
    }

    system("pause");
    return 0;
}
