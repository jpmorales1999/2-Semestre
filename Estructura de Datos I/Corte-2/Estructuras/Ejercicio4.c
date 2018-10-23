#include <stdio.h>
#include <stdlib.h>

//Estructura promedio
struct promedio{
    float nota1, nota2, nota3;
};

//Estructura alumno la cual se le va a anidar la estructura promedio
struct alumno{
    char nombre[30];
    char sexo[20];
    int edad;
    struct promedio porcen;
}alumno1;


int main()
{
    //Variable para el promedio
    float promedio_al;

    //Ingresando datos del alumno con sus respectivas notas
    printf("Datos del alumno:\n");
    printf("Ingrese su nombre: ");
    fgets(alumno1.nombre, 30, stdin);
    printf("Ingrese su sexo: ");
    fgets(alumno1.sexo, 20 ,stdin);
    printf("Digite su edad: ");
    scanf("%d",&alumno1.edad);

    //Aninadando estructura alumno con estructura promedio para ingresar las notas
    printf("\n NOTAS DEL ALUMNO \n");
    printf("Ingrese Nota No.1: "); scanf("%f",&alumno1.porcen.nota1);
    printf("Ingrese Nota No.2: "); scanf("%f",&alumno1.porcen.nota2);
    printf("Ingrese Nota No.3: "); scanf("%f",&alumno1.porcen.nota3);

    //Calculando el promedio
    promedio_al = (alumno1.porcen.nota1 + alumno1.porcen.nota2 + alumno1.porcen.nota3)/3;

    //Imprimir datos estudiante con su promedio
    printf("\n");
    printf("Datos finales del ALUMNO\n");
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Sexo: %s\n", alumno1.sexo);
    printf("Edad: %d\n\n", alumno1.edad);
    printf("Promedio %1.1f\n", promedio_al);
    printf("\n");

    system("pause");
    return 0;
}
