#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*//Programa que defina dos vectores de tipo caracter
    y almacenar los dos vectores en un nuevo vector, primero primer vector despues segundo
    */

    char caracteres1[]={'a','e','i','o','u'}, caracteres2[]={'b','c','f','g','h'}, caracteres3[10];

    for(int i=0; i<5; i++){
        caracteres3[i]=caracteres1[i];
    }

    for(int i=5; i<10; i++){
        caracteres3[i]=caracteres2[i-5];
    }

    for(int i=0; i<10; i++){
        printf("%d --> %c\n", i, caracteres3[i]);
    }


    system("pause");
    return 0;
}
