#include <stdio.h>
#include <stdlib.h>

//Pedir cadena y mostrar en pantalla el total de veces que aparece cada vocal

//Prototipo funcion
void contarVocales(char *);

int main()
{
    char cadena[30];
    printf("Ingrese una cadena: ");
    fgets(cadena,30,stdin);

    contarVocales(cadena);

    system("pause");
    return 0;
}

void contarVocales(char*nombre){
    //Calculamos el total de veces que se repite cada vocal
    int conta=0,conte=0,conti=0,conto=0,contu=0;
    while(*nombre){
        switch(*nombre){
            case 'a': conta++;
            break;
            case 'e': conte++;
            break;
            case 'i': conti++;
            break;
            case 'o': conto++;
            break;
            case 'u': contu++;
            break;
        }
        nombre++;
    }
    //Mostrando en pantalla
    printf("Cantidad de vocal a: %d\n", conta);
    printf("Cantidad de vocal e: %d\n", conte);
    printf("Cantidad de vocal i: %d\n", conti);
    printf("Cantidad de vocal o: %d\n", conto);
    printf("Cantidad de vocal u: %d\n", contu);
}
