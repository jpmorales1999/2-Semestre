#include <stdlib.h>
#include <stdio.h>

int main(){
    //Ingresar el radio de una circunferencia y determinar su area, diametro y longitud
    float radio, longitud=0, diametro=0, area=0;
    printf("Ingrese el valor del radio:\n");
    scanf("%f",&radio);

    area= 3.14*(radio*radio);
    diametro = 2*radio;
    longitud = (2*3.14)*radio;

    printf("El valor del area es: %1.1f\n ",area);
    printf("El valor del diametro es: %1.1f\n ",diametro);
    printf("El valor de la longitud es: %1.1f\n ",longitud);


    system("pause");
    return 0;
}
