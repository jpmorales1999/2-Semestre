#include <stdio.h>
#include <stdlib.h>

//prototipo funcion
void suma(int ma1[3][3], int ma2[3][3]);

//Variables matriz
int matriz[3][3]={1,2,3,4,5,6,7,8,9};
int matriz2[3][3]={3,4,78,12,3,4,5,24,12};
int matriz3[3][3];

int main()
{
    suma(matriz, matriz2);

    system("pause");
    return 0;
}

void suma(int ma1[3][3], int ma2[3][3]){
    //suma de los dos vectores
    int suma=0;
    //sumamos una tercer matriz vacia, con el primer vector
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                matriz3[i][j] = ma1[i][j] + ma2[i][j];
        }
    }
    //suma total de los elementos del vector
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
                suma = suma + matriz3[i][j];
        }
     }
     printf("La suma total del vector es: %d\n", suma);
}
