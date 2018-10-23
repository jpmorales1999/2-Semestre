#include <stdio.h>
#include <stdlib.h>
#define PASSWORD 1234

FILE *Archivo;

//Estructuras
struct calendario{
    char dia[2];
    char mes[2];
    char anio[4];
};

struct contactos{
    char nombre[30];
    char apellidos[30];
    char telefono[20];
    char direccion[30];
    struct calendario fecha;
}usuario[100], *pusuario = usuario;

//Variables globales
char direccion[]="D:\\Juan\\ContactosJuan.txt";

//Prototipo de funciones
void menuAgenda();
void agregar();
void ver();

int main()
{
    //Accedemos a la cuenta del usuario
    int contra, contador=0, aprob=0;
    do{
    printf("BIENVENIDO A NUESTRO SISTEMA DE AGENDA\n");
    printf("LOGIN DE CUENTA JUAN\n");
    printf("Ingrese su Password: ");
    scanf("%d",&contra);
    if(contra==PASSWORD){
        aprob++;
        printf("Password Correcta\n");
        printf("Bienvenido al Sistema\n");
        menuAgenda();
    }else{
        printf("Password Incorrecta\n");
        contador++;
    }
    if(contador==3){
        printf("Se Terminaron los Intentos\n");
    }
    system("pause");
    system("cls");
    }while(contador!=3&&aprob==0);

    system("pause");
    return 0;
}

void menuAgenda(){
    //Menu Principal
    system("pause");
    system("cls");
    int opcion;
    do{
        printf("MENU DE OPCIONES AGENDA\n");
        printf("1. Agregar Contacto\n");
        printf("2. Ver Contactos\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
        case 1: agregar();
        system("pause");
        system("cls");
        break;
        case 2: ver();
        system("pause");
        system("cls");
        break;
        case 0: exit(0);
        default: printf("Opcion Invalida\n");
        }
    }while(opcion!=0);
}

void agregar(){
    //Agregamos Contactos a la Agenda
    int i=0;
    int opcion;
    Archivo = fopen(direccion, "a+"); //a+ Añade o crea un archivo - Escritura
    if(Archivo==NULL){
        printf("Error al Abrir el Archivo\n");
        exit(1);
    }else{
        printf("Se Abrio Correctamente el Archivo\n");
    }
    do{
            Archivo = fopen(direccion, "a+");
            fflush(stdin);
        printf("Ingrese Nombre Contacto: "); gets((pusuario+i)->nombre);
        printf("Ingrese Apellidos Contacto: "); gets((pusuario+i)->apellidos);
        printf("Ingrese Telefono Contacto: "); gets((pusuario+i)->telefono);
        printf("Ingrese Direccion Contacto: "); gets((pusuario+i)->direccion);
        printf("Ingrese dia Creacion Contacto: "); gets((pusuario+i)->fecha.dia);
        printf("Ingrese mes Creacion Contacto: "); gets((pusuario+i)->fecha.mes);
        printf("Ingrese anio Creacion Contacto: "); gets((pusuario+i)->fecha.anio);

        fprintf(Archivo,"\n\t\tLISTA DE CONTACTOS\n");
        fprintf(Archivo,"\nNombre: ");
        fprintf(Archivo,"%s\n",(pusuario+i)->nombre);
        fprintf(Archivo,"\nApellidos: ");
        fprintf(Archivo,"%s\n",(pusuario+i)->apellidos);
        fprintf(Archivo,"\nTelefono: ");
        fprintf(Archivo,"%s\n",(pusuario+i)->telefono);
        fprintf(Archivo,"\nDireccion: ");
        fprintf(Archivo,"%s\n",(pusuario+i)->direccion);
        fprintf(Archivo,"\n\nFecha Creacion\n");
        fprintf(Archivo,"\nDia: ");
        fprintf(Archivo,"%s\n",(pusuario+i)->fecha.dia);
        fprintf(Archivo,"\nMes: ");
        fprintf(Archivo,"%s\n",(pusuario+i)->fecha.mes);
        fprintf(Archivo,"\nAnio: ");
        fprintf(Archivo,"%s\n",(pusuario+i)->fecha.anio);

        printf("Desea Ingresar un nuevo Contacto Si(1) - No(0): ");
        scanf("%d",&opcion);

        i++;
        fclose(Archivo);
    }while(opcion==1);
}

void ver(){
    //Visualizar Contactos del Archivo
    int c;

    Archivo = fopen(direccion,"r");

	if(Archivo == NULL){
		printf("Error al tratar de leer el Archivo");
		exit (1);
	}

	while((c=fgetc(Archivo))!=EOF){
		if(c=='\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
}
