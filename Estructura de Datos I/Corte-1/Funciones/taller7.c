#include <stdio.h>
#include <stdlib.h>

//Prototipo de la funcion
void cambio(int num, int*cien, int*cincuenta, int*veinte, int*diez, int*cinco, int*uno);

int main()
{
    int num, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
    printf("Ingrese la cantidad de dolares:\n");
    scanf("%d",&num);

    cambio(num,&cien,&cincuenta,&veinte,&diez,&cinco,&uno);

    system("pause");
    return 0;
}

void cambio(int num, int*cien, int*cincuenta, int*veinte, int*diez, int*cinco, int*uno){
    //Separar por valor de billete la cantidad de dolares ingresada por el usuario
    if(num >= 100){
  *cien = num / 100;
  num = num % 100;
 }
 if(num >= 50){
  *cincuenta = num / 50;
  num = num % 50;
 }
 if(num >= 20){
  *veinte = num / 20;
  num = num % 20;
 }
 if(num >= 10){
  *diez = num / 10;
  num = num % 10;
 }
 if(num >= 5){
  *cinco = num / 5;
  num = num % 5;
 }
 if(num >= 1){
  *uno = num;
 }
 printf("%d Billetes de 100 dolares\n", *cien);
 printf("%d Billetes de 50 dolares\n", *cincuenta);
 printf("%d Billetes de 20 dolares\n", *veinte);
 printf("%d Billetes de 10 dolares\n", *diez);
 printf("%d Billetes de 5 dolares\n", *cinco);
 printf("%d Billetes de 1 dolar\n", *uno);
}




