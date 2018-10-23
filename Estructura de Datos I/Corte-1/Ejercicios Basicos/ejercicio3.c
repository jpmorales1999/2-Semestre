#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Calcular el salario de un empleado segun las horas trabajadas//
    int totalSalario, finalNocturna, finalDominical, finalFestivo, horas_diurnas, horas_nocturnas, horas_dominicales, horas_festivos, valorHora=2500, valorDiurna, valorNocturna, valorDominical, valorFestivo;
    printf("Ingrese el numero de horas diurnas laboradas:\n"); scanf("%d",&horas_diurnas);
    printf("Ingrese el numero de horas nocturnas laboradas:\n"); scanf("%d",&horas_nocturnas);
    printf("Ingrese el numero de horas dominicales laboradas:\n"); scanf("%d",&horas_dominicales);
    printf("Ingrese el numero de horas festivas laboradas:\n"); scanf("%d",&horas_festivos);

    valorDiurna = (valorHora*horas_diurnas);
    valorNocturna = (valorHora*horas_nocturnas)*0.35;
    finalNocturna = (valorNocturna + (valorHora*horas_nocturnas));
    valorDominical = (valorHora*horas_dominicales)*0.50;
    finalDominical = (valorDominical + (valorHora*horas_dominicales));
    valorFestivo = (valorHora*horas_festivos)*0.75;
    finalFestivo = (valorFestivo+(valorHora*horas_festivos));
    totalSalario = (valorDiurna+finalNocturna+finalDominical+finalFestivo);

    printf("La cantidad ganada en las horas diurnas es: %d\n", valorDiurna);
    printf("La cantidad ganada en las horas nocturnas es: %d\n", finalNocturna);
    printf("La cantidad ganada en las horas dominicales es: %d\n", finalDominical);
    printf("La cantidad ganada en las horas festivas es: %d\n", finalFestivo);
    printf("El valor total del salario es: %d\n", totalSalario);

    system("pause");
    return 0;
}
