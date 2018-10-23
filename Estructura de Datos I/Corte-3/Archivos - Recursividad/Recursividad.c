#include <stdio.h>
#include <stdlib.h>

//Recursividad Fibonacci

int fibonacci(int);

int main()
{
    int numero;
    printf("Ingrese la cantidad de elementos para calcular fibonacci: ");
    scanf("%d",&numero);

    for(int i=1; i<=numero; i++){
        printf("%d, ", fibonacci(i));
    }

    system("pause");
    return 0;
}

/*
Fibonacci (n) = fibonacci(n-1) + fibonacci(n-2) //La suma de los dos elementos anteriores
*/

int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }else{
        return (fibonacci(n-1)+ fibonacci(n-2));
    }
}
