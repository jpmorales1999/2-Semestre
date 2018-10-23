#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[20];
    char palabra2[20];
    int longitud=0;

    printf("Digite la palabra:\n");
    gets(palabra);

    for(int i=0; i<20; i++){
        if(palabra=="\n"){
            break;
        }
        longitud+=1;
    }

    for(int i=0; i<longitud; i++){
            for(int j=longitud; j>=0; j--){
                    palabra2[i]=palabra[j];
                    break;
            }
    }

    if(palabra2==palabra){
        printf("Es una palabra palindroma\n");
    }else{
        printf("No es una palabra palindroma\n");
    }

    system("pause");
    return 0;
}
