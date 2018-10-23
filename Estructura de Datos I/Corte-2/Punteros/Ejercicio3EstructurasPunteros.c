#include <stdio.h>
#include <stdlib.h>

//Estructura
struct Trabajadores{
    char nombre[30];
    int edad;
    int cedula;
    char direccion[30];
    int telefono;
    float salario;
}trabajador[100], *Ptrabajador = trabajador;

//Prototipo de funciones
void menu();
void pedirDatos();
void mostrarTrabajadores(struct Trabajadores*);
void mayorSalario(struct Trabajadores*);
void menorSalario(struct Trabajadores*);

//Variables globales
int cantTrabajadores=0;

int main()
{
    menu();

    system("pause");
    return 0;
}

void menu(){
    //Menu principal
    int opcion;
    do{
        printf("MENU PRINCIPAL\n");
        printf("1. Ingresar Trabajador\n");
        printf("2. Mostrar Trabajadores\n");
        printf("3. Mayor Salario\n");
        printf("4. Menor Salario\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: pedirDatos();
            system("pause");
            system("cls");
            break;
            case 2: mostrarTrabajadores(Ptrabajador);
            break;
            case 3: mayorSalario(Ptrabajador);
            break;
            case 4: menorSalario(Ptrabajador);
            break;
            case 0: exit(0);
            break;
            default: printf("Opcion invalida\n");
        }
    }while(opcion!=0);
}

void pedirDatos(){
    //Ingresando datos trabajadores
    printf("Trabajador No. %d\n", cantTrabajadores+1);
    printf("Ingrese nombre trabajador: ");
    fflush(stdin);
    fgets((Ptrabajador+cantTrabajadores)->nombre,30,stdin);
    printf("Ingrese edad Trabajador: ");
    scanf("%d",&(Ptrabajador+cantTrabajadores)->edad);
    printf("Ingrese cedula Trabajador: ");
    scanf("%d",&(Ptrabajador+cantTrabajadores)->cedula);
    printf("Ingrese direccion Trabajador: ");
    fflush(stdin);
    fgets((Ptrabajador+cantTrabajadores)->direccion,30,stdin);
    printf("Ingrese telefono Trabajador: ");
    scanf("%d",&(Ptrabajador+cantTrabajadores)->telefono);
    printf("Ingrese salario Trabajador: ");
    scanf("%f",&(Ptrabajador+cantTrabajadores)->salario);
    printf("\n\n");
    cantTrabajadores++;
}

void mostrarTrabajadores(struct Trabajadores* Ptrabajador){
    //Mostramos los trabajadores que estan en el sistema
    for(int i=0; i<cantTrabajadores; i++){
        printf("Mostrando trabajadores\n");
        printf("Trabajador No. %d\n", i+1);
        printf("Nombre del Trabajador: %s\n", (Ptrabajador+i)->nombre);
        printf("Edad del Trabajador: %d\n", (Ptrabajador+i)->edad);
        printf("Cedula del Trabajador: %d\n", (Ptrabajador+i)->cedula);
        printf("Direccion del trabajador: %s\n", (Ptrabajador+i)->direccion);
        printf("Telefono del Trabajador: %d\n", (Ptrabajador+i)->telefono);
        printf("Salario del Trabajador: %f\n", (Ptrabajador+i)->salario);
        printf("\n\n");
    }
}

void mayorSalario(struct Trabajadores* Ptrabajador){
    //Mayor salario
    float mayor=0;
    int base=0;
    for(int i=0; i<cantTrabajadores; i++){
        if((Ptrabajador+i)->salario>mayor){
            mayor = (Ptrabajador+i)->salario;
            base = i;
        }
    }
    for(int i=base; i<=base; i++){
        printf("Mostrando trabajador con Mayor Salario\n");
        printf("Trabajador No. %d\n", base+1);
        printf("Nombre del Trabajador: %s\n", (Ptrabajador+base)->nombre);
        printf("Edad del Trabajador: %d\n", (Ptrabajador+base)->edad);
        printf("Cedula del Trabajador: %d\n", (Ptrabajador+base)->cedula);
        printf("Direccion del trabajador: %s\n", (Ptrabajador+base)->direccion);
        printf("Telefono del Trabajador: %d\n", (Ptrabajador+base)->telefono);
        printf("Salario del Trabajador: %f\n", (Ptrabajador+base)->salario);
        printf("\n\n");
    }
}

void menorSalario(struct Trabajadores* Ptrabajador){
    //Menor salario
    float menor=9999999;
    int base=0;
    for(int i=0; i<cantTrabajadores; i++){
        if((Ptrabajador+i)->salario<menor){
            menor = (Ptrabajador+i)->salario;
            base = i;
        }
    }
    for(int i=base; i<=base; i++){
        printf("Mostrando trabajador con Menor Salario\n");
        printf("Trabajador No. %d\n", base+1);
        printf("Nombre del Trabajador: %s\n", (Ptrabajador+base)->nombre);
        printf("Edad del Trabajador: %d\n", (Ptrabajador+base)->edad);
        printf("Cedula del Trabajador: %d\n", (Ptrabajador+base)->cedula);
        printf("Direccion del trabajador: %s\n", (Ptrabajador+base)->direccion);
        printf("Telefono del Trabajador: %d\n", (Ptrabajador+base)->telefono);
        printf("Salario del Trabajador: %f\n", (Ptrabajador+base)->salario);
        printf("\n\n");
    }
}
