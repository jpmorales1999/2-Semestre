#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que tome la temperatura cada 4 horas en un periodo de 24, calcular la temperatura mas alta, baja y media
    float temperatura, suma_temperatura=0, temperatura_media=0, temperatura_alta=0, temperatura_baja=9999;
    printf("Registro de las temperaturas presentadas un dia determinado\n");

    for (int i=0; i<24; i+=4){
        printf("Digite las temperaturas: %d: ", i); scanf("%f",&temperatura);
        suma_temperatura = suma_temperatura + temperatura;
        if (temperatura>temperatura_alta){
            temperatura_alta= temperatura;
        }
        if (temperatura<temperatura_baja){
            temperatura_baja=temperatura;
        }
    }
        temperatura_media=suma_temperatura/6;
        printf("La temperatura media es: %1.1f\n", temperatura_media);
        printf("La temperatura baja es: %1.1f\n", temperatura_baja);
        printf("La temperatura alta es: %1.1f\n", temperatura_alta);


    system("pause");
    return 0;
}
