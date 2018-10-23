#include <stdio.h>
#include <stdlib.h>

//Prototipo de la funcion
void tiempo(int totalSeg, int*horas, int*minutos, int*segundos);

int main()
{
    int totalSeg, horas=0, minutos=0, segundos=0;
    printf("Ingrese el valor total de segundos:\n");
    scanf("%d",&totalSeg);

    tiempo(totalSeg,&horas,&minutos,&segundos);

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    system("pause");
    return 0;
}

void tiempo(int totalSeg, int*horas, int*minutos, int*segundos){
    //Determinar la cantidad de horas minutos y segundos dependiendo de la cantidad de segundos ingresador por el usuario
    *horas = totalSeg / 3600;
    totalSeg = totalSeg % 3600;
    *minutos = totalSeg / 60;
    totalSeg = totalSeg % 60;
    *segundos = totalSeg;
}
