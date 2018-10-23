#include <stdio.h>
#include <stdlib.h>

//Estructuras
struct proveedores{
    char nombre[30];
    int cantidadVendida;
    int precioUnitario;
    int total;
}compras[100];

//Variables
int prov;

void ingresarProveedor();
void mostrarDatos();
void proveedorCaro();
void proveedorBarato();

int main()
{
    printf("Ingrese la cantidad de proveedores: ");
    scanf("%d",&prov);

    ingresarProveedor();
    system("pause");
    system("cls");

    mostrarDatos();

    proveedorCaro();

    proveedorBarato();

    system("pause");
    return 0;
}

void ingresarProveedor(){
    //Ingresar datos del proveedor
    for(int i=0; i<prov; i++){
            fflush(stdin);
    printf("Proveedor No. %d\n", i+1);
    printf("Ingrese nombre proveedor: ");
    fgets(compras[i].nombre, 30, stdin);
    printf("Cantidad productos vendidos: ");
    scanf("%d",&compras[i].cantidadVendida);
    printf("Ingrese el valor unitario: ");
    scanf("%d",&compras[i].precioUnitario);
    compras[i].total = (compras[i].cantidadVendida * compras[i].precioUnitario);
    }
}

void mostrarDatos(){
    //Mostrando proveedores
    printf("Mostrando datos\n");
     for(int i=0; i<prov; i++){
            fflush(stdin);
    printf("Proveedor No. %d\n", i+1);
    printf("Nombre proveedor: %s\n", compras[i].nombre);
    printf("Productos vendidos: %d\n", compras[i].cantidadVendida);
    printf("Valor unitario: %d\n", compras[i].precioUnitario);
    printf("Importe total compra: %d\n", compras[i].total);
    }
}

void proveedorCaro(){
    printf("\n");
    printf("Mostrando proveedor mas caro\n");
    int caro=0, base;
    //Determinar el proveedor mas caro
    for(int i=0; i<prov; i++){
            if(compras[i].total>caro){
                caro=compras[i].total;
                base=i;
            }
    }
    printf("Proveedor No. %d\n", base+1);
    printf("Nombre proveedor: %s\n", compras[base].nombre);
    printf("Total importe proveedor: %d\n", compras[base].total);
}

void proveedorBarato(){
    printf("\n");
    printf("Mostrando proveedor mas barato\n");
    int barato=9999999, indice;
    //Determinar el proveedor mas caro
    for(int i=0; i<prov; i++){
            if(compras[i].total<indice){
                barato=compras[i].total;
                indice=i;
            }
    }
    printf("Proveedor No. %d\n", indice+1);
    printf("Nombre proveedor: %s\n", compras[indice].nombre);
    printf("Total importe proveedor: %d\n", compras[indice].total);
}


