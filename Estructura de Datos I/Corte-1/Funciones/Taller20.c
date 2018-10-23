#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void pedirNombre();
void vocalesSuma(char nombre[], int tamano);

//Variables
char nombre[100];
int tamano = 20;

int main()
{
    pedirNombre();
    vocalesSuma(nombre,tamano);

    system("pause");
    return 0;
}

void pedirNombre(){
    //Pedir cadena al usuario
    printf("Ingrese su nombre:\n");
    fgets(nombre, tamano, stdin);
}

void vocalesSuma(char nombre[], int tamano){
    //Determinando la suma total de vocales en la cadena
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;
    int resultado=0;
    for(int i=0; i<tamano; i++){
        switch(nombre[i]){
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    }
    resultado = vocal_a+vocal_e+vocal_i+vocal_o+vocal_u;
    printf("El numero de vocales que hay es: %d\n", resultado);
}
