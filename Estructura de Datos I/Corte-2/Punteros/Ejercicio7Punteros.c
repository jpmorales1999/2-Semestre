#include <stdio.h>
#include <stdlib.h>

//Pedir su nombre al usuario y devolver la cantidad de vocales que hay

//Prototipo funcion
void contadorVocales(char *);

int main()
{
    char nombre[30];
    printf("Ingrese su nombre: ");
    fgets(nombre,30,stdin);

    contadorVocales(nombre);

    system("pause");
    return 0;
}

void contadorVocales(char *nombre){
    //Contador de vocales
    int contador=0;
     for(int i=0; i<30; i++){ // Tambien se puede con while(*nombre) = Mientras que no sea nula (final cadena)
        switch(*nombre){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': contador++;
        }
        nombre++;
    }
    printf("La cantidad total de vocales es: %d\n", contador);
}
