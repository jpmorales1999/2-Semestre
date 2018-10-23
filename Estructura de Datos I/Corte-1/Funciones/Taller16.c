#include <stdio.h>
#include <stdlib.h>

//Prototipos de las funciones
void ingresarDatos();
void mayor(int ano, int ano1, int mes, int mes1, int dia, int dia1);

//Variables
int ano, ano1, mes, mes1, dia, dia1;

int main()
{
    ingresarDatos();
    mayor(ano, ano1, mes, mes1, dia, dia1);

    system("pause");
    return 0;
}

void ingresarDatos(){
    //Pidiendo los datos al usuario
    printf("Ingrese el año, mes y dia\n");
    scanf("%d %d %d",&ano,&mes,&dia);
    printf("Ingrese otra fecha de la misma estructura\n");
    scanf("%d %d %d",&ano1,&mes1,&dia1);
}

void mayor(int ano, int ano1, int mes, int mes1, int dia, int dia1){
    //Determinar la fecha mayor sea por su año mes o dia
    if(ano>ano1 || mes>mes1 || dia>dia1){
        printf("La fecha %d %d %d es mayor\n", ano, mes, dia);
    }else{
        printf("La fecha %d %d %d es mayor\n", ano1, mes1, dia1);
    }
}
