#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Hacer un programa que calcule el resultado de la siguiente expresion 1-2+3-4+5-6...n
    int n, total=0;

    printf("Digite el numero hasta el cual se debe realizar la operacion\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if (i%2==0){
            total = total - i;
        } else {
            total = total + i;
        }
    }

    printf("El total es: %d\n", total);


    system("pause");
    return 0;
}
