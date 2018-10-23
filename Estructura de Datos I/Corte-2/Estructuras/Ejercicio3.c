#include <stdio.h>
#include <stdlib.h>

//Estructura
struct trabajadores{
    char nombre[30];
    int edad;
    int estrato;
    char direccion[30];
    int telefono;
    int salario;
}datos[100];

//Variable global
int tamano;

//Prototipos de las funciones
void menu();
void crearTrabajador(int tamano);
void mostrarTrabajadores (int tamano);
void trabajadorMayor(int tamano);
void trabajadorMenor(int tamano);

int main()
{
    menu();

    system("pause");
    return 0;
}

void menu(){
    //Menu de opciones
    int opcion;
    printf("Ingrese la cantidad de trabajadores para verificar sus datos: ");
    scanf("%d",&tamano);
    do{
            printf("\nBienvenido al MENU de opciones\n");
            printf("1. Ingresar datos trabajador\n");
            printf("2. Mostrar Trabajadores\n");
            printf("3. Trabajador mayor Salario\n");
            printf("4. Trabajador menor Salario\n");
            printf("0. Salir\n");
            printf("Ingrese la opcion: ");
            scanf("%d",&opcion);
            switch(opcion){
                case 1: crearTrabajador(tamano);
                system("pause");
                system("cls");
                break;
                case 2: mostrarTrabajadores(tamano);
                system("pause");
                break;
                case 3: trabajadorMayor(tamano);
                system("pause");
                break;
                case 4: trabajadorMenor(tamano);
                system("pause");
                case 0: exit(0);
                break;
                default: printf("Opcion invalida\n");
            }

    }while(opcion!=0);
}

void crearTrabajador(int tamano){
    //Ingresando los datos de los trabajadores
    for(int i=0; i<tamano; i++){
            printf("Trabajador No. %d\n", i+1);
        fflush(stdin);
    printf("Ingrese su nombre: ");
    fgets(datos[i].nombre, 30, stdin);
    printf("Ingrese su edad: ");
    scanf("%d",&datos[i].edad);
    printf("Ingrese su estrato: ");
    scanf("%d",&datos[i].estrato);
    printf("Ingrese su direccion: ");
    fflush(stdin);
    fgets(datos[i].direccion, 30, stdin);
    printf("Ingrese su telefono: ");
    scanf("%d",&datos[i].telefono);
    printf("Ingrese su salario: ");
    scanf("%d",&datos[i].salario);
    printf("\n\n");
    }
}

void mostrarTrabajadores (int tamano){
    //Imprimiendo datos de los trabajadores
    for (int i=0; i<tamano; i++){
        printf("Trabajador No. %d\n", i+1);
        printf("Nombre: %s\n", datos[i].nombre);
        printf("Edad: %d\n", datos[i].edad);
        printf("Estrato: %d\n", datos[i].estrato);
        printf("Direccion: %s\n", datos[i].direccion);
        printf("Telefono: %d\n", datos[i].telefono);
        printf("Salario: %d\n", datos[i].salario);
    }
}

void trabajadorMayor(int tamano){
    int mayor=0, base;
    //Determinar el trabajador con mayor salario e imprimirlo
    for(int i=0; i<tamano; i++){
        if(datos[i].salario>mayor){
            mayor = datos[i].salario;
            base=i;
        }
    }
        printf("Trabajador No. %d\n", base+1);
        printf("Nombre: %s\n", datos[base].nombre);
        printf("Edad: %d\n", datos[base].edad);
        printf("Estrato: %d\n", datos[base].estrato);
        printf("Direccion: %s\n", datos[base].direccion);
        printf("Telefono: %d\n", datos[base].telefono);
        printf("Salario: %d\n", datos[base].salario);
}

void trabajadorMenor(int tamano){
    int menor=9999999, base;
    //Determinar el trabajador con menor salario e imprimirlo
    for(int i=0; i<tamano; i++){
        if(datos[i].salario<menor){
            menor = datos[i].salario;
            base=i;
        }
    }
        printf("Trabajador No. %d\n", base+1);
        printf("Nombre: %s\n", datos[base].nombre);
        printf("Edad: %d\n", datos[base].edad);
        printf("Estrato: %d\n", datos[base].estrato);
        printf("Direccion: %s\n", datos[base].direccion);
        printf("Telefono: %d\n", datos[base].telefono);
        printf("Salario: %d\n", datos[base].salario);
}
