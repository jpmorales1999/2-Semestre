#include <stdio.h>
#include <stdlib.h>

//Estructura
struct informacion{
    char nombre[30];
    char discapacidad[1];
    char si[1];
    char no[1];
}personas[100];

//Variables
int cantidad;

//Prototipos de las funciones
void pedirDatos();
void llenandoVectores(int cantidad);

int main()
{
    pedirDatos();
    llenandoVectores(cantidad);

    system("pause");
    return 0;
}

void pedirDatos(){
    //Pedimos la cantidad de personas para realizar el problema
    printf("Ingrese la cantidad de personas: ");
    scanf("%d",&cantidad);

    //Llenamos el primer vector con la informacion brindada
    for(int i=0; i<cantidad; i++){
            fflush(stdin);
        printf("\nIngrese su nombre: ");
        fgets(personas[i].nombre, 30, stdin);
        printf("Ingrese v para discapacidad, f para no discapacidad: ");
        scanf("%s",&personas[i].discapacidad);
    }
}


void llenandoVectores(int cantidad){
    //Llenamiento del vector segun su clasificacion de discapacidad
    int base1=0, base2=0, c=0;
    for(int i=0; i<cantidad; i++){
        if(personas[i].discapacidad[c]=='v'){
                personas[i].si[base1]=personas[i].discapacidad[c];
                base1++;
        }else{
            if(personas[i].discapacidad[c]=='f'){
                personas[i].no[base2]=personas[i].discapacidad[c];
                base2++;
            }
        }
    }
    //Mostrando en pantalla los resultados
    for(int j=0; j<cantidad; j++){
            printf("\n");
            fflush(stdin);
           if(personas[j].discapacidad[c]=='v'){
            printf("Nombre: %s\n", personas[j].nombre);
            printf("Discapacidad\n");
            }else if(personas[j].discapacidad[c]=='f'){
            printf("Nombre: %s\n", personas[j].nombre);
            printf("No Discapacidad\n");
        }
    }
}
