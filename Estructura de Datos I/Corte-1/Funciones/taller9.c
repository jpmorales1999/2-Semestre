#include <stdio.h>
#include <stdlib.h>

//Prototipo de la funcion
void calc_anos(int dias, int*ano, int*mes, int*dia);

int main()
{
    int dias, ano=0, mes=0, dia=0;

    printf("Ingrese la cantidad de dias:\n");
    scanf("%d",&dias);

    printf("Fecha inicio:\n Año: 2000 Mes: 1 Dia: 1\n");

    calc_anos(dias,&ano,&mes,&dia);

    system("pause");
    return 0;
}

void calc_anos(int dias, int*ano, int*mes, int*dia){
    //Dependiendo de la cantidad de dias digitados por el usuario determinar el año mes y dia
    *ano = dias / 365;
    *ano = *ano + 2000;
    dias = dias % 365;
    *mes = dias / 30;
    *mes = *mes + 1;
    dias = dias % 30;
    *dia = dias;
    *dia = *dia + 1;

    printf("Fecha actual:\n");

    printf("Año: %d\n", *ano);
    printf("Mes: %d\n", *mes);
    printf("Dia: %d\n", *dia);
}
