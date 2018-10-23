#include <stdio.h>
#include <stdlib.h>

//Prototipo de las funciones
void mostrarDatos(float *);

int main()
{
    float valores[] = {32.583, 11.239, 45.781, 22.237}, *Pvalores;

    Pvalores = valores;

    mostrarDatos(Pvalores);

    system("pause");
    return 0;
}

void mostrarDatos(float *Pvalores){
    //Mostramos datos en pantalla
    for(int i=0; i<4; i++){
        printf("%1.3f ", *(Pvalores+i));
    }
    printf("\n");
}
