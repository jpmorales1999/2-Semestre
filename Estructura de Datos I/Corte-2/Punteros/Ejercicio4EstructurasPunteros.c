#include <stdio.h>
#include <stdlib.h>

//Estructuras
struct promedio{
    float nota1, nota2, nota3;
};

struct alumno{
    char nombre[30];
    char sexo[30];
    int edad;
    struct promedio procentaje;
}alumno1, *Palumno1 = &alumno1;

int main()
{
    float Total_Porcen=0;
    //Ingresando Datos Alumno
    printf("Ingresando Datos Alumno\n");
    printf("Ingrese nombre Alumno: ");
    fgets(Palumno1->nombre,30,stdin);
    printf("Ingrese sexo Alumno: ");
    fgets(Palumno1->sexo,30,stdin);
    printf("Ingrese edad Alumno: ");
    scanf("%d",&Palumno1->edad);

    //Notas Alumno
    printf("Ingrese Nota No. 1: ");
    scanf("%f",&Palumno1->procentaje.nota1);
    printf("Ingrese Nota No. 2: ");
    scanf("%f",&Palumno1->procentaje.nota2);
    printf("Ingrese Nota No. 1: ");
    scanf("%f",&Palumno1->procentaje.nota3);

    Total_Porcen = (Palumno1->procentaje.nota1 + Palumno1->procentaje.nota2 + Palumno1->procentaje.nota3)/3;

    //Mostrando Datos Alumno
    printf("\n\n");
    printf("Mostrando Alumno\n");
    printf("Nombre Alumno: %s\n", Palumno1->nombre);
    printf("Sexo Alumno: %s\n", Palumno1->sexo);
    printf("Edad Alumno: %d\n", Palumno1->edad);
    printf("Promedio Alumno: %1.1f\n", Total_Porcen);

    system("pause");
    return 0;
}
