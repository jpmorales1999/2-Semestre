#include <stdio.h>
#include <stdlib.h>

//Estructura competidor
struct competidor{
    char nombre[30];
    int edad;
    char sexo[20];
    char club[30];
}competidor1;

int main()
{
    //Pidiendo datos al competidor en el main
    printf("  Datos del competidor \n");
    printf("\n Ingrese su nombre: ");
    fgets(competidor1.nombre, 30, stdin);
    printf("\n Ingrese su edad: ");
    scanf("%d",&competidor1.edad);
    printf("\n Ingrese su sexo: ");
    fflush(stdin);
    fgets(competidor1.sexo, 20, stdin);
    printf("\n Ingrese su club: ");
    fgets(competidor1.club, 30, stdin);

    //Imprimiendo datos del competidor en main
    printf("\n \n");
    printf("Nombre: %s\n", competidor1.nombre);
    printf("Edad: %d\n\n", competidor1.edad);
    printf("Sexo: %s\n", competidor1.sexo);
    printf("club: %s\n", competidor1.club);
    //Determinando categoria segun la edad
    if(competidor1.edad <= 15){
        printf("Categoria: Infantil - Edad: %d\n", competidor1.edad);
    }else if(competidor1.edad <= 30){
        printf("Categoria: Joven - Edad %d\n", competidor1.edad);
    }else if(competidor1.edad > 30){
        printf("Categoria Mayor - Edad: %d\n", competidor1.edad);
    }

    system("pause");
    return 0;
}
