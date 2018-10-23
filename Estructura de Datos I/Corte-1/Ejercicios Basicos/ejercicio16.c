#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Resolver finonacci
    int x=0, n, y=0, z=1, i=1;

    printf("Digite el numero de elementos:\n");
    scanf("%d",&n);

    while(i<=n){
        x = z + y;
        printf("%d\n", x);
        z = y;
        y = x;
        i++;
    }

    system("pause");
    return 0;
}
