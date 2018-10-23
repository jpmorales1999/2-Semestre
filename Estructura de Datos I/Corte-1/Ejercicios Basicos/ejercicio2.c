#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Pedir al usuario que ingrese la base y la altura de un triangulo para calcular su area
    float base, altura, area=0;
    printf("Ingrese el valor de la base:\n");
    scanf("%f",&base);
    printf("Ingrese el valor de la altura:\n");
    scanf("%f",&altura);

    area = (base*altura/2);

    printf("El area del triangulo es:%1.1f\n",area);



    system("pause");
    return 0;
}
