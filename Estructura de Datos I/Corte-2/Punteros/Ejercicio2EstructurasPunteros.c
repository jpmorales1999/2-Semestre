#include <stdio.h>
#include <stdlib.h>

//Estructura
struct Estudiante{
    char nombre[30];
    int edad;
    int grado;
    float promedio;
}estudent[3], *Pestudent = estudent;

//Prototipo funciones
void pedirDatos();
void mostrarDatos(struct Estudiante*);
void mejorPromedio(struct Estudiante*);

int main()
{
    pedirDatos();
    system("pause");
    system("cls");

    mostrarDatos(Pestudent);
    mejorPromedio(Pestudent);

    system("pause");
    return 0;
}

void pedirDatos(){
    //Pidiendo datos para 3 estudiantes
    for(int i=0; i<3; i++){
        fflush(stdin);
        printf("Estudiante No. %d\n", i+1);
        printf("Ingrese nombre del Estudiante: ");
        fgets((Pestudent+i)->nombre,30,stdin);
        printf("Ingrese edad del Estudiante: ");
        scanf("%d",&(Pestudent+i)->edad);
        printf("Ingrese grado del Estudiante: ");
        scanf("%d",&(Pestudent+i)->grado);
        printf("Ingrese promedio general del Estudiante: ");
        scanf("%f",&(Pestudent+i)->promedio);
        printf("\n\n");
    }
}

void mostrarDatos(struct Estudiante* Pestudent){
    //Mostrando los tres estudiantes
    printf("Mostrando Estudiantes\n\n");
    for(int i=0; i<3; i++){
        printf("Estudiante No. %d\n", i+1);
        printf("Nombre del Estudiante: %s\n", (Pestudent+i)->nombre);
        printf("Edad del Estudiante: %d\n", (Pestudent+i)->edad);
        printf("Grado del Estudiante: %d\n", (Pestudent+i)->grado);
        printf("Promedio general del Estudiante: %1.1f\n", (Pestudent+i)->promedio);
        printf("\n\n");
    }
}

void mejorPromedio(struct Estudiante* Pestudent){
    //Determinando mayor promedio entre los 3 estudiantes
    int mayor=0, base=0;
    for(int i=0; i<3; i++){
        if((Pestudent+i)->promedio>mayor){
            mayor = (Pestudent+i)->promedio;
            base = i;
        }
    }
    //Mostrando el mejor promedio
    for(int i=base; i<=base; i++){
        printf("Mostrando Estudiante mejor Promedio\n");
        printf("Estudiante No. %d\n", i+1);
        printf("Nombre del Estudiante: %s\n", (Pestudent+base)->nombre);
        printf("Edad del Estudiante: %d\n", (Pestudent+base)->edad);
        printf("Grado del Estudiante: %d\n", (Pestudent+base)->grado);
        printf("Promedio general del Estudiante: %1.1f\n", (Pestudent+base)->promedio);
    }
}
