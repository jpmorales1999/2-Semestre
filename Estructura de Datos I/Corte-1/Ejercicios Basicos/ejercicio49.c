#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const l=20;
    char cadena[l];
    int longitud=0;

    printf("Digite la cadena\n");
    fgets(cadena,l,stdin);

    for(int i = 0; i < l; i++){
		if(cadena[i] == '\n'){
			break;
		}
		longitud=longitud+1;
	}
	printf("La longitud de la cadena es: %d\n", longitud);

	if(longitud>=10){
        printf("%s\n", cadena);
	}

    system("pause");
    return 0;
}
