#include <stdio.h>
#include <stdlib.h>

int main()
{
    char contenido[30];
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;

    printf("Ingrese una frase\n");
    fgets(contenido, 30, stdin);

    for(int i=0; i<30; i++){
        switch(contenido[i]){
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    }

    printf("Hay %d ocurrencias de a\n", vocal_a);
    printf("Hay %d ocurrencias de e\n", vocal_e);
    printf("Hay %d ocurrencias de i\n", vocal_i);
    printf("Hay %d ocurrencias de o\n", vocal_o);
    printf("Hay %d ocurrencias de u\n", vocal_u);

    system("pause");
    return 0;
}
