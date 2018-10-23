#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const l=30;
    char caracteres1[l];
    char caracteres2[l];

    printf("Digite una cadena:\n");
    fgets(caracteres1,l,stdin);

    for(int i=0; i<30; i++){
        caracteres2[i]=caracteres1[i];
    }

    printf("El nuevo contenido de la segunda cadena de caracteres es: %s\n", caracteres2);

    system("pause");
    return 0;
}
