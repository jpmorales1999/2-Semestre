#include <stdio.h>
#include <stdlib.h>

struct Persona{
	char nombre[30];
	int discapacidad;
};

void registrarPersonas(struct Persona*);
void mostrarPersonasConDiscapacidad(struct Persona *);
void mostrarPeronsasSinDiscapacidad(struct Persona *);
int cantPersonas = 0;

int main(){
	struct Persona personas[100], *pPersonas = personas;
	registrarPersonas(pPersonas);
	mostrarPersonasConDiscapacidad(pPersonas);
	mostrarPeronsasSinDiscapacidad(pPersonas);
	return 0;
}

void registrarPersonas(struct Persona* pPersonas){
	//int discapacidad;
	char opcion = 'n';
	while(opcion != 's'){
		printf("Ingrese nombre: ");
		fgets((pPersonas + cantPersonas)->nombre, 30, stdin);
		printf("%s\n", (pPersonas + cantPersonas)->nombre);
		printf("Tienen discapacidad\n Ingrese 1: Si, 0: No => ");
		scanf("%d", &(pPersonas + cantPersonas)->discapacidad);
		//printf("%d\n", discapacidad);
		/*if(discapacidad == 0){
			(pPersonas + cantPersonas)->discapacidad = 0;
			printf("%d\n", (pPersonas + cantPersonas)->discapacidad);
		}else{
			printf("%d\n", (pPersonas + cantPersonas)->discapacidad);
			(pPersonas + cantPersonas)->discapacidad = 1;
		}*/
		cantPersonas += 1;
		printf("Presione s, si desea salir");
		fflush(stdin);
		scanf("%c", &opcion);
	}
}

void mostrarPersonasConDiscapacidad(struct Persona *pPersonas){
	int i, j = 1;
	printf("Personas con Discapacidad\n");
	for(i = 0; i < cantPersonas; i++){
		if((pPersonas + i)->discapacidad == 1){
			printf("%d. %s", j, (pPersonas + i)->nombre);
			j += 1;
		}
	}
}
void mostrarPeronsasSinDiscapacidad(struct Persona *pPersonas){
	int i, j = 1;
	printf("\nPersonas sin Discapacidad\n");
	for(i = 0; i < cantPersonas; i++){
		if((pPersonas + i)->discapacidad == 0){
			printf("%d. %s", j, (pPersonas + i)->nombre);
			j += 1;
		}
	}
}
