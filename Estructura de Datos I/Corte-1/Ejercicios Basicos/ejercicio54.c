#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[] = "mariana";
    char nombre2[] = "pablo";
    char nombre3[20];
    char nombre4[20];
    int longitud1=0, longitud2=0, n, m;

    for (int i=0; i<7; i++){
        if(nombre=='\n'){
            break;
        }
        longitud1+=1;
    }

    for (int i=0; i<5; i++){
        if(nombre2=='\n'){
            break;
        }
        longitud2+=1;
    }

    for(int i=0; i<longitud1; i++){
        n=nombre[i]-32;
        nombre3[i]=n;
    }

    for(int i=0; i<longitud2; i++){
        m=nombre2[i]-32;
        nombre4[i]=m;
    }

    if(nombre3==nombre4){
        printf("Las cadenas son iguales\n");
    }else{
        printf("Las cadenas no son iguales\n");
    }


    system("pause");
    return 0;
}
