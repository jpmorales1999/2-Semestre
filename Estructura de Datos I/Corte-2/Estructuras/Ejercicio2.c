#include <stdio.h>
#include <stdlib.h>

//Estructura
struct estudiante{
    char nombre[30];
    int edad;
    int grado;
    float notas[4];
    float promedio;
}estu[3];

//Variable global
int cantEstu = 0;

//Prototipos de las funciones
void menu();
void crearEstudiante();
void mostrarEstudiante();
void mejorPromedio();

int main()
{
    menu();

    system("pause");
    return 0;
}
void menu(){
    //Menu de opciones
    int opcion;
do{
		printf("MENU\n");
		printf("1. Crear Estudiante\n");
		printf("2. Mostrar Estudiante\n");
		printf("3. Mejor Promedio\n");
		printf("0. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: crearEstudiante();
			system("pause");
			system("cls");
				break;
            case 2: mostrarEstudiante();
            system("pause");
                break;
            case 3: mejorPromedio();
            system("pause");
                break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalidad\n");
		}
	}while(opcion != 0);
}

void crearEstudiante(){
    //Ingresar datos estudiante
    int suma = 0;
    printf("Ingrese su nombre: ");
    fflush(stdin);
    fgets(estu[cantEstu].nombre, 30, stdin);
    printf("Ingrese su edad: ");
    scanf("%d",&estu[cantEstu].edad);
    printf("Ingrese su grado: ");
    scanf("%d",&estu[cantEstu].grado);
    for(int i=0; i<4; i++){
            printf("Ingrese Nota %d: ", i+1);
            scanf("%f",&estu[cantEstu].notas[i]);
            suma = suma + estu[cantEstu].notas[i];
    }
    estu[cantEstu].promedio = suma / 4;
    printf("Ingresado correctamente\n");
    cantEstu += 1;
}

void mostrarEstudiante(){
    //Mostrar datos de los estudiantes ingresador
    for(int i=0; i<cantEstu; i++){
        printf("Estudiante No. %d\n\n", i+1);
        printf("Nombre: %s\n", estu[i].nombre);
        printf("Edad: %d\n", estu[i].edad);
        printf("Grado: %d\n", estu[i].grado);
        for(int j=0; j<4; j++){
            printf("Nota %d = %.f\n", j+1, estu[i].notas[j]);
        }
        printf("Promedio: %.f\n", estu[i].promedio);
    }
}

void mejorPromedio(){
    //Imprimir los datos del estudiante con el mayor promedio de notas
    int mayor=0, base;
    for(int i=0; i<cantEstu; i++){
        if(estu[i].promedio > mayor){
            mayor = estu[i].promedio;
            base = i;
        }
    }
    printf("El mejor promedio \n");
    printf("Estudiante No. %d\n", base+1);
    printf("Nombre: %s\n", estu[base].nombre);
	printf("Edad: %d\n", estu[base].edad);
	printf("Grado: %d\n", estu[base].grado);
    for(int j = 0; j < 4; j++){
		printf("Nota %d = %.f\n", j + 1, estu[base].notas[j]);
	}
	printf("Promedio: %.f\n", estu[base].promedio);
}
