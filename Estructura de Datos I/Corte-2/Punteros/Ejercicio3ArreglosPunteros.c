#include <stdio.h>
#include <stdlib.h>

int potencia(int, int);

int main(){
	int vector_1[4], vector_2[4], vector_3[4], vector_4[4];
	int *pVector_1 = vector_1, *pVector_2 = vector_2, *pVector_3 = vector_3, *pVector_4 = vector_4;
	int i;

	//Llenar vector usuario
	for(i = 0; i < 4; i++){
		printf("Ingrese un valor: ");
		scanf("%d", &(*(pVector_1 + i)));
		printf("\n");
	}

	//Llenar vector cuadrado
	for(i = 0; i < 4; i++){
		*(pVector_2 + i) = potencia(*(pVector_1 + i), 2);
	}

	//Llenar vector cubo
	for(i = 0; i < 4; i++){
		*(pVector_3 + i) = potencia(*(pVector_1 + i), 3);
	}

	//Llenar vector cuarta
	for(i = 0; i < 4; i++){
		*(pVector_4 + i) = potencia(*(pVector_1 + i), 4);
	}

	//Mostrar Vector
	for(i = 0; i < 4; i++){
		printf("%d \t", *(pVector_1 + i));
		printf("%d \t", *(pVector_2 + i));
		printf("%d \t", *(pVector_3 + i));
		printf("%d \t", *(pVector_4 + i));
		printf("\n");
	}

	return 0;
}

int potencia(int base, int exponente){
	int i, potencia = 1;
	for(i = 0; i < exponente; i++){
		potencia *= base;
	}
	return potencia;
}
