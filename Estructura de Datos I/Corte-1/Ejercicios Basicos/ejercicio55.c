#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20], nombre2[20];
    int n, longitud=0;

    printf("Digite su nombre en mayuscula\n");
    fgets(nombre,20,stdin);

    for(int i=0; i<20; i++){
        if(nombre[i]=='\n'){
            break;
        }
        longitud+=1;
    }

    printf("%d\n", longitud);

    for(int i=0; i<1; i++){
        if(nombre[i]=='A'){
            for(int j=0; j<longitud; j++){
                n=nombre[j]+32;
                nombre2[j]=n;
            }
            printf("%s\n", nombre2);
    }else{
        printf("%s\n", nombre);
    }
}


    system("pause");
    return 0;
}
