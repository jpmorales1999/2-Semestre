#include <stdio.h>
#include <stdlib.h>

//Estructura
struct tiempo{
    int hora;
    int minutos;
    int segundos;
}ciclista[3], *Pciclista = ciclista;

//Prototipo de funciones
void calcularTiempo();

//Variables globales
int etapas[3];

int main()
{
    printf("Ingrese la cantidad total en Segundos de cada etapa realizada por el Ciclista\n");
    for(int i=0; i<3; i++){
    printf("Ingrese el tiempo para la etapa %d: ", i+1);
    scanf("%d",&etapas[i]);
    }

    calcularTiempo();

    system("pause");
    return 0;
}

void calcularTiempo(){
    int sumaHora=0, sumaMinuto=0, sumaSegundo=0;
    for(int i=0; i<3; i++){
        (Pciclista+i)->hora = etapas[i] / 3600;
        etapas[i] = etapas[i] % 3600;
        sumaHora += (Pciclista+i)->hora;
        (Pciclista+i)->minutos = etapas[i] / 60;
        etapas[i] = etapas[i] % 60;
        sumaMinuto += (Pciclista+i)->minutos;
        (Pciclista+i)->segundos = etapas[i];
        sumaSegundo += (Pciclista+i)->segundos;
    }
    //Mostramos en pantalla el total en tiempo de las tres etapas
    printf("El tiempo total empleado por el ciclista en las tres etapas es de\n");
    printf("Cantidad de Horas: %d\n", sumaHora);
    printf("Cantidad de Minutos: %d\n", sumaMinuto);
    printf("Cantidad de Segundos: %d\n", sumaSegundo);
}
