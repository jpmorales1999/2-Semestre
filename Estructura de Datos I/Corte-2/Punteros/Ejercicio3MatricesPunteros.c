#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Matriz que se llena por medio del sistema pero con numero primos
    int i, j=0, contador=0, numero;
    int vector1[3], vector2[3], vector3[3], *Pvector1 = vector1, *Pvector2 = vector2, *Pvector3 = vector3;
    srand(time(0));
    while(j!=3){
        numero = rand () % 100;
        for(i=1; i<=numero; i++){
            if(numero%i==0){
                contador++;
            }
        }
        if(contador==2){
                *(Pvector1+j) = numero;
                *(Pvector2+j) = numero;
                *(Pvector3+j) = numero;
                j++;
            }
            contador=0;
        }

        //Mostramos vector
        printf("Mostrando matriz: \n");
        for(i=0; i<3; i++){
            printf("%d \t", *(Pvector1+i));
            printf("%d \t", *(Pvector2+i));
            printf("%d \t", *(Pvector3+i));
            printf("\n");
        }

    system("pause");
    return 0;
}
