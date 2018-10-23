#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE *Archivo;

char direccion[]="D:\\prueba\\ejercicio.txt";

//Variables Globales
int vector[4000], i, j, contador=0, dato;

//Prototipos de funciones
void menu();
void crearArchivo();
void llenarArchivo();
void generarNumeros();
void mostrarNumeros();
void guardarArchivo();
void cargarArchivo();
void ordenar();
void buscar();

int main()
{
    menu();

    system("pause");
    return 0;
}

void menu(){
    //Menu Principal
    int opcion;
    do{
        printf("MENU DE OPCIONES\n");
        printf("1. Crear Archivo\n");
        printf("2. Generar Numeros\n");
        printf("3. Mostrar Numeros\n");
        printf("4. Ordenar\n");
        printf("5. Buscar\n");
        printf("6. Guardar Datos\n");
        printf("7. Cargar Archivo\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: crearArchivo();
            system("pause");
            system("cls");
            break;
            case 2: llenarArchivo();
            break;
            case 3: mostrarNumeros();
            system("pause");
            system("cls");
            break;
            case 4: ordenar();
            system("pause");
            system("cls");
            break;
            case 5: buscar();
            system("pause");
            system("cls");
            break;
            case 6: guardarArchivo();
            system("pause");
            system("cls");
            break;
            case 7: cargarArchivo();
            system("pause");
            system("cls");
            break;
            case 0: exit(0);
            default: printf("Opcion invalida\n");
        }
    }while(opcion!=0);
}

void crearArchivo(){
    //Creamos el archivo
    Archivo = fopen(direccion,"w"); //Escribir - Crear Archivo
    if(Archivo==NULL){
        printf("No se pudo crear el archivo\n");
    }else{
        printf("Se pudo crear el archivo con exito\n");
    }
}

void llenarArchivo(){
    //Menu de opciones para llenar el archivo
    int opcion;
    do{
        printf("CANTIDAD DE NUMEROS A GENERAR\n");
        printf("1. 1000 Numeros\n");
        printf("2. 2000 Numeros\n");
        printf("3. 3000 Numeros\n");
        printf("4. 4000 Numeros\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: j=1000;
            generarNumeros();
            contador+=j;
            system("pause");
            system("cls");
            break;
            case 2: j=2000;
            generarNumeros();
            contador+=j;
            system("pause");
            system("cls");
            break;
            case 3: j=3000;
            generarNumeros();
            contador+=j;
            system("pause");
            system("cls");
            break;
            case 4: j=4000;
            generarNumeros();
            contador+=j;
            system("pause");
            system("cls");
            break;
            case 0:
            system("cls");
            break;
            default: printf("Opcion invalida\n");
        }
    }while(opcion!=0);
}

void generarNumeros(){
    //Generando numeros
    printf("Generando Numeros: \n");
    srand(time(NULL));
    for(i=0; i<j; i++){
        vector[i+contador] = 1 + rand()%((5000+1) - 1);
    }
    printf("Se generaron los numeros con exito\n");
}

void mostrarNumeros(){
    //Mostramos los numeros que se van a guardar en el archivo
    printf("Mostrando Numeros: \n");
    for(i=0; i<contador; i++){
        printf("%d, ", vector[i]);
    }
    printf("\n");
}

void guardarArchivo(){
    //Guardamos el Archivo
    Archivo = fopen(direccion, "w");
    if(Archivo==NULL){
        printf("Error al abrir el archivo\n");
    }else{
        printf("Se abrio el archivo con exito\n");
    }

    for(i=0; i<contador; i++){
        fprintf(Archivo, "%d, ", vector[i]); //Guardamos como se vera en el txt
    }
    fclose(Archivo);
    printf("Se han guardado los datos con exito\n");
}

void cargarArchivo(){
    //Cargamos la informacion del Archivo
    Archivo = fopen(direccion, "r"); //Leemos el Archivo

    if(Archivo == NULL){
        printf("Error al tratar de leer el archivo\n");
    }

    printf("Mostrando Archivo: \n");
    while(!feof(Archivo)){ //Leer numero a numero hasta el final del Archivo
            fscanf(Archivo,"%d, ",&dato);
            printf("%d, ",dato);
    }
    printf("\n");
    printf("Se ha cargado el archivo con exito\n");
    fclose(Archivo);
}

void ordenar(){
    //Ordenamos Numeros
    int aux;
    for(i=0; i<contador; i++){
        for(int y=0; y<contador-1; y++){
            if(vector[y]>vector[y+1]){
                aux = vector[y];
                vector[y] = vector[y+1];
                vector[y+1] = aux;
            }
        }
    }
}

void buscar(){
    //Buscamos Numeros
    int numero;
    printf("Ingrese el numero a buscar: \n");
    scanf("%d",&numero);

    for(i=0; i<contador; i++){
        if(vector[i]==numero){
            printf("Numero encontrado en la posicion [%d]\n", i);
        }
    }
}
