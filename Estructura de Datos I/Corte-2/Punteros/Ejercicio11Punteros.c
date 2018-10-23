#include <stdio.h>
#include <stdlib.h>

//Estructura
struct alumno{
    char nombre[30];
    int edad;
    float notas[4];
    float promedio;
}alumnos[3], *Palumnos = alumnos;

//Prototipo de funciones
void pedirDatosAlumno();
void mostrarAlumnos(struct alumno *);
void mejorPromedio(struct alumno *);

int main()
{
    pedirDatosAlumno();
    system("pause");
    system("cls");
    mostrarAlumnos(Palumnos);
    mejorPromedio(Palumnos);

    system("pause");
    return 0;
}

void pedirDatosAlumno(){
    //Pidiendo datos al alumno
    for(int i=0; i<3; i++){
    fflush(stdin);
    printf("Alumno No. %d\n", i+1);
    printf("Ingrese nombre del alumno: ");
    fgets((Palumnos+i)->nombre,30,stdin);
    printf("Ingrese edad del alumno: ");
    scanf("%d",&(Palumnos+i)->edad);
    printf("Ingrese promedio del alumno: ");
    scanf("%f",&(Palumnos+i)->promedio);
    printf("Alumno ingresado correctamente\n");
    printf("\n\n");
  }
}

void mostrarAlumnos(struct alumno *Palumnos){
    //Mostrando estudiantes
    printf("Mostrando Alumnos: \n");
    for(int i=0; i<3; i++){
        printf("Estudiante No. %d\n", i+1);
        printf("Nombre del alumno: %s\n", (Palumnos+i)->nombre);
        printf("Edad del alumno: %d\n", (Palumnos+i)->edad);
        printf("Promedio del alumno: %1.1f\n", (Palumnos+i)->promedio);
        printf("\n\n");
    }
}

void mejorPromedio(struct alumno *Palumnos){
    //Mejor promedio
    float mayor=0;
    int base=0;
    for(int i=0; i<3; i++){
        if((Palumnos+i)->promedio>mayor){
            mayor = (Palumnos+i)->promedio;
            base = i;
        }
    }
    printf("Mostrando alumno con mejor promedio: \n");
    for(int i=base; i<=base; i++){
        printf("Estudiante No. %d\n", i+1);
        printf("Nombre del alumno: %s\n", (Palumnos+base)->nombre);
        printf("Edad del alumno: %d\n", (Palumnos+base)->edad);
        printf("Promedio del alumno: %1.1f\n", (Palumnos+base)->promedio);
    }
}
