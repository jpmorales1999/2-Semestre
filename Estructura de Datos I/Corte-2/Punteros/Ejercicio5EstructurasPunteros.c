#include <stdio.h>
#include <stdlib.h>

//Estructuras
struct promedio{
    float nota1,nota2,nota3;
};

struct alumno{
    char nombre[30];
    char sexo[30];
    int edad;
    struct promedio procentaje;
}alumnos[100], *Palumnos = alumnos;

//Prototipo de funciones
void menu();
void pedirDatos();
void mostrarAlumnos(struct alumno*);
float mejorPromedio(struct alumno*);
float menorPromedio(struct alumno*);
void mostrarAlumnoMejor(struct alumno*);
void mostrarAlumnoMenor(struct alumno*);

//Variables globales
int cantAlumnos=0;
float promedio_Total[100];
int base1=0, base2=0;

int main()
{
    menu();

    printf("\n\n");
    printf("El promedio del mejor alumno es: %1.1f\n", mejorPromedio(Palumnos));
    printf("Los datos del alumno son: \n");
    mostrarAlumnoMejor(Palumnos);

    printf("\n\n");
    printf("El promedio del peor alumno es: %1.1f\n", menorPromedio(Palumnos));
    printf("Los datos del alumno son: \n");
    mostrarAlumnoMenor(Palumnos);

    system("pause");
    return 0;
}

void menu(){
    //Menu principal
    int opcion;
    do{
        printf("Menu Principal\n");
        printf("1. Ingresar Alumno\n");
        printf("2. Mostrar Alumnos\n");
        printf("0. Salir del Menu y mostrar Mejor y Menor Promedio\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: pedirDatos();
            system("pause");
            system("cls");
            break;
            case 2: mostrarAlumnos(Palumnos);
            break;
            case 0: break;
            default: printf("Opcion invalida\n");
        }
    }while(opcion!=0);
}

void pedirDatos(){
    //Ingresando Datos Alumno
    printf("Ingresando Datos Alumno\n");
    printf("\n\n");
    printf("Alumno No. %d\n", cantAlumnos+1);
    printf("Ingrese nombre Alumno: ");
    fflush(stdin);
    fgets((Palumnos+cantAlumnos)->nombre,30,stdin);
    printf("Ingrese sexo Alumno: ");
    fgets((Palumnos+cantAlumnos)->sexo,30,stdin);
    printf("Ingrese edad Alumno: ");
    scanf("%d",&(Palumnos+cantAlumnos)->edad);

    //Notas Alumno
    printf("Ingrese Nota No. 1: ");
    scanf("%f",&(Palumnos+cantAlumnos)->procentaje.nota1);
    printf("Ingrese Nota No. 2: ");
    scanf("%f",&(Palumnos+cantAlumnos)->procentaje.nota2);
    printf("Ingrese Nota No. 3: ");
    scanf("%f",&(Palumnos+cantAlumnos)->procentaje.nota3);

    promedio_Total[cantAlumnos] = ((Palumnos+cantAlumnos)->procentaje.nota1 + (Palumnos+cantAlumnos)->procentaje.nota2 + (Palumnos+cantAlumnos)->procentaje.nota3)/3;

    printf("\n\n");

    cantAlumnos++;
}

void mostrarAlumnos(struct alumno* alumnos){
    //Mostrando alumnos
    for(int i=0; i<cantAlumnos; i++){
    printf("\n\n");
    printf("Mostrando Alumno\n");
    printf("Alumno No. %d\n", i+1);
    printf("Nombre Alumno: %s\n", (Palumnos+i)->nombre);
    printf("Sexo Alumno: %s\n", (Palumnos+i)->sexo);
    printf("Edad Alumno: %d\n", (Palumnos+i)->edad);
    printf("Promedio Alumno: %1.1f\n", promedio_Total[i]);
    }
}

float mejorPromedio(struct alumno* alumnos){
    //Mejor Promedio
    float mayor=0;
    for(int i=0; i<cantAlumnos; i++){
        if(promedio_Total[i]>mayor){
            mayor = promedio_Total[i];
            base1 = i;
        }
    }
    return mayor;
}

float menorPromedio(struct alumno* alumnos){
    //Menor Promedio
    float menor=999999;
    for(int i=0; i<cantAlumnos; i++){
        if(promedio_Total[i]<menor){
            menor = promedio_Total[i];
            base2 = i;
        }
    }
    return menor;
}

void mostrarAlumnoMejor(struct alumno* alumnos){
    //Mostrando mejor alumno
    for(int i=base1; i<=base1; i++){
        printf("Mostrando Alumno\n");
    printf("Alumno No. %d\n", base1+1);
    printf("Nombre Alumno: %s\n", (Palumnos+base1)->nombre);
    printf("Sexo Alumno: %s\n", (Palumnos+base1)->sexo);
    printf("Edad Alumno: %d\n", (Palumnos+base1)->edad);
    printf("Promedio Alumno: %1.1f\n", promedio_Total[base1]);
    }
}

void mostrarAlumnoMenor(struct alumno* alumnos){
    //Mostrando menor alumno
    for(int i=base2; i<=base2; i++){
        printf("Mostrando Alumno\n");
    printf("Alumno No. %d\n", base2+1);
    printf("Nombre Alumno: %s\n", (Palumnos+base2)->nombre);
    printf("Sexo Alumno: %s\n", (Palumnos+base2)->sexo);
    printf("Edad Alumno: %d\n", (Palumnos+base2)->edad);
    printf("Promedio Alumno: %1.1f\n", promedio_Total[base2]);
    }
}
