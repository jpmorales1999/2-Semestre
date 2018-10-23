#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Estructuras
struct cancion{
    char nombre[30];
    char cancion[30];
    int duracion;
    int tamano;
}disco[100];

//Variables
int cantDiscos=0;

//Prototipos de las funciones
void menu();
void nuevaCancion();
void mostrarTitulos();
bool comparar(int);

int main()
{
    menu();

    system("pause");
    return 0;
}

void menu(){
    //Menu de opciones
    int opcion=0;
    do{
        printf("MENU DE OPCIONES\n");
        printf("1. Agregar cancion\n");
        printf("2. Mostrar el titulo de todas las canciones\n");
        printf("3. Comprobar\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
        case 1: nuevaCancion();
        system("pause");
        system("cls");
        break;
        case 2: mostrarTitulos();
        system("pause");
        break;
        case 3:
            printf("Si retorna (1) cancion encontrada, si retorna (0) cancion no encontrada %d\n", comparar(cantDiscos));
        system("pause");
        break;
        case 0: exit(0);
        break;
            default: printf("Opcion invalida\n");
        }
    }while(opcion!=0);
}

void nuevaCancion(){
    //Ingresar canciones
    fflush(stdin);
    printf("Nombre del artista: ");
    fgets(disco[cantDiscos].nombre, 30, stdin);
    printf("Nombre cancion o titulo: ");
    fgets(disco[cantDiscos].cancion, 30, stdin);
    printf("Duracion (Seg) disco: ");
    scanf("%d",&disco[cantDiscos].duracion);
    printf("Tamaño (KB) disco: ");
    scanf("%d",&disco[cantDiscos].tamano);
    cantDiscos++;
}

void mostrarTitulos(){
    //Mostrar en pantalla todos los titulos de canciones guardadas
    for(int i=0; i<cantDiscos; i++){
    printf("Titulo: %s\n", disco[i].cancion);
    }
}

bool comparar(int cantDiscos){
    //Comparamos las cadenas para determinar si existe el titulo de la cancion
    char cancionBuscar[30];
    bool encontrado;
    int indice=0, j=0;
    printf("Ingrese el titulo de la cancion a buscar\n");
    fflush(stdin);
    fgets(cancionBuscar,30,stdin);
    for(int i=0; i<cantDiscos; i++){
        while(disco[i].cancion[j] != '\n'){
            if(disco[i].cancion[j] != cancionBuscar[j]){
                return false;
            }
            j++;
        }
    }
    return true;
}
