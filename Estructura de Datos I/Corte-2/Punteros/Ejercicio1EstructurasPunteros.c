#include <stdio.h>
#include <stdlib.h>

//Estructura
struct competidor{
    char nombre[30];
    int edad;
    char sexo[30];
    char club[30];
}competidor1, *Pcompetidor1 = &competidor1;

int main()
{
    //Ingresando Datos competidor
    printf("Ingrese nombre del competidor: ");
    fgets(Pcompetidor1->nombre,30,stdin);
    printf("Ingrese edad del competidor: ");
    scanf("%d",&Pcompetidor1->edad);
    printf("Ingrese sexo del competidor: ");
    fflush(stdin);
    fgets(Pcompetidor1->sexo,30,stdin);
    printf("Ingrese club del competidor: ");
    fgets(Pcompetidor1->club,30,stdin);
    system("pause");
    system("cls");

    //Mostrando Datos competidor
    printf("Nombre del competidor: %s\n", Pcompetidor1->nombre);
    printf("Edad del competidor: %d\n", Pcompetidor1->edad);
    printf("Sexo del competidor: %s\n", Pcompetidor1->sexo);
    printf("Club del competidor: %s\n", Pcompetidor1->club);

    //Comprobando categoria competidor
    if(Pcompetidor1->edad <= 15){
        printf("Su categoria es Infantil\n");
    }else if(Pcompetidor1->edad <= 30){
        printf("Su categoria es Joven\n");
    }else if(Pcompetidor1->edad >30){
        printf("Su categoria es Mayor\n");
    }


    system("pause");
    return 0;
}
