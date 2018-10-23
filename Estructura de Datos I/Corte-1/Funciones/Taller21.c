#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void pedirCadena();
void sumaCadaVocal(char cadena[], int tamano);

//Variables
char cadena[100];
int tamano=30;

int main()
{
    pedirCadena();
    sumaCadaVocal(cadena,tamano);

    system("pause");
    return 0;
}

void pedirCadena(){
    //Ingresar cadena
    printf("Digite una cadena:\n");
    fgets(cadena, tamano, stdin);
}

void sumaCadaVocal(char cadena[], int tamano){
    //Operacion suma de cada vocal y mostrar en pantalla
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;
    for(int i=0; i<tamano; i++){
        switch(cadena[i]){
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    }
    printf("Hay %d de a\n", vocal_a);
    printf("Hay %d de e\n", vocal_e);
    printf("Hay %d de i\n", vocal_i);
    printf("Hay %d de o\n", vocal_o);
    printf("Hay %d de u\n", vocal_u);
}
