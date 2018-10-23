#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Determinar si el 4 numero coindice con alguno de los ingresados anteriormente
    int n1,n2,n3,n4;
    printf("Digite un valor para el primer numero:\n"); scanf("%d",&n1);
    printf("Digite un valor para el segundo numero:\n"); scanf("%d",&n2);
    printf("Digite un valor para el tercer numero:\n"); scanf("%d",&n3);
    printf("Digite un valor para el cuarto numero:\n"); scanf("%d",&n4);

    if (n4==n1 && n4==n2 && n4==n3){
        printf("El cuarto numero coincide con los demas numeros\n");
    } else if (n4==n1 && n4==n2){
        printf("El numero cuatro es igual al numero uno y dos\n");
    } else if (n4==n2 && n4==n3){
        printf("El numero cuatro es igual al numero dos y tres\n");
    } else if (n4==n3 && n4==n1){
        printf("El numero cuatro es igual al numero tres y uno\n");
    } else if (n4==n1){
        printf("El numero cuatro es igual al numero uno\n");
    } else if (n4==n2){
        printf("El numero cuatro es igual al numero dos\n");
    } else if (n4==n3){
        printf("El numero cuatro es igual al numero tres\n");
    } else if (n4!=n1 && n4!=n2 && n4!=n3){
        printf("El numero cuatro no coincide con ningun numero\n");
    }


    system("pause");
    return 0;
}
