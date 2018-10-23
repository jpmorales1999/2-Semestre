#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Estructuras
struct Cliente{
	int id;
	char nombre[30];
	int cedula;
	char direccion[30];
	int telefono;
	int compras;
}clientes[100];

struct Producto{
    int CHamburMini;
    int CHamburGrande;
    int CPerroMini;
    int CPerroGrande;
    int CGaseosaMini;
    int CGaseosaGrande;
    int CCrispetasMini;
    int CCrispetasGrande;
    int CChocolatina;
    int CCombo1;
    int CCombo2;
    int CCombo3;
    int CCombo4;
    int CComboInfan;
}product = {100,100,100,100,100,100,100,100,100,100,100,100,100,100};


struct Empleado{
    int id;
	char nombre[30];
	int cedula;
	char direccion[30];
	int telefono;
}empleados[100];


struct Proveedor{
    int id;
	char nombre[30];
	int cedula;
	char direccion[30];
	int telefono;
	int ganancias;
}proveedores[100];


struct Tienda{
    char nombre[30];
    int identificacion;
    char direccion[30];
    int telefono;
}cinema;


struct Compra{
    int canthamburguesaMini;
    int canthamburguesaGrande;
    int cantperroMini;
    int cantperroGrande;
    int cantgaseosaMini;
    int cantgaseosaGrande;
    int cantcrispetasGrandes;
    int cantcrispetasPequenas;
    int cantchocolatina;
    int cantcombo1;
    int cantcombo2;
    int cantcombo3;
    int cantcombo4;
    int cantcomboInfan;
    int hamburguesaMini;
    int hamburguesaGrande;
    int perroMini;
    int perroGrande;
    int gaseosaMini;
    int gaseosaGrande;
    int crispetasGrandes;
    int crispetasPequenas;
    int chocolatina;
    int combo1;
    int combo2;
    int combo3;
    int combo4;
    int comboInfan;
    int pelicula1;
    int pelicula2;
    int pelicula3;
    int pelicula4;
    int cantpelicula1;
    int cantpelicula2;
    int cantpelicula3;
    int cantpelicula4;
}compras[100];


//Variables globales
int cantClientes=0;
int cantEmpleados=0;
int cantProovedores=0;


//Prototipos de funciones
void menu();
void gotoxy(int, int);
void dibujarAsteriscos(int );
void hacerMargen();
void menuCliente();
void crearCliente();
void mostrarClientes();
int buscarCliente();
void editarCliente();
void mostrarCliente(int );
void clienteCambioNombre(int);
void clienteCambioDireccion(int);
void clienteCambioTelefono(int);
void menuProductos();
void productos();
void hacerMargenProductos();
void cartelera();
void hacerMargenCartelera();
void copy(char cadena1[], char cadena2[]);
void eliminarCliente();
void menuEmpleado();
void crearEmpleado();
void mostrarEmpleados();
int buscarEmpleado();
void editarEmpleado();
void mostrarEmpleado(int );
void eliminarEmpleado();
void empleadoCambioNombre();
void empleadoCambioDireccion();
void empleadoCambioTelefono();
void menuProveedores();
void crearProveedor();
void mostrarProveedores();
int buscarProveedor();
void editarProveedor();
void mostrarProveedor(int );
void eliminarProveedor();
void proveedorCambioNombre();
void proveedorCambioDireccion();
void proveedorCambioTelefono();
void crearDatosTienda();
void menuCompras();
void hacerMargenCompras();
void hamburguesaMini(int );
void hamburguesaGrande(int );
void perroMini(int );
void perroGrande(int );
void gaseosaMini(int );
void gaseosaGrande(int );
void crispetasGrandes(int );
void crispetasPequenas(int );
void chocolatina(int );
void combo1(int );
void combo2(int );
void combo3(int );
void combo4(int );
void comboInfan(int );
void menuCompraBoletas();
void menuCompraProductos();
void pelicula1(int );
void pelicula2(int );
void pelicula3(int );
void pelicula4(int );
void Sumaventas();
void menuVentas();
int totalPrecioVenta();
int totalPrecioBoletas();
void hacerCuadroVenta();
void crearFacturaCliente(int );
void hacerMargenFactura();
int valorTotalFactura(int );
void mostrarProductosActuales();
void menuEstadoEmpresa();
void comprarAProveedor();
void comprarHamburGrande(int);
void comprarHamburMini(int);
int totalIngresos();
void totalFinal();
void comprarPerroMini(int);
void comprarPerroGrande(int);
void comprarGaseosaGrande(int);
void comprarGaseosaMini(int);
void comprarCrisGrande(int);
void comprarCrisMini(int);
void comprarChocolatina(int);
void comprarCombo1(int);
void comprarCombo2(int);
void comprarCombo3(int);
void comprarCombo4(int);
void comprarComboInfan(int);

int main()
{
    //Menu principal
    menu();

    system("pause");
    return 0;
}

void gotoxy(int x,int y){
    //Gotoxy para x y y (hacer cuadro)
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y= y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void menu(){
    //Menu principal
    system("color 70");
    int opcion;
    do{
        hacerMargen();
        gotoxy(72,10);
        printf("MENU CINEMA Juan's\n");
        gotoxy(51,14);
        printf("1. Clientes\n");
        gotoxy(51,16);
        printf("2. Productos\n");
        gotoxy(51,18);
        printf("3. Proveedores\n");
        gotoxy(51,20);
        printf("4. Empleados\n");
        gotoxy(90,14);
        printf("5. Compras\n");
        gotoxy(90,16);
        printf("6. Ventas\n");
        gotoxy(90,18);
        printf("7. Datos Tienda\n");
        gotoxy(90,20);
        printf("8. Estado Empresa\n");
        gotoxy(90,22);
        printf("0. Salir\n");
        gotoxy(51,22);
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: system("cls");
            menuCliente();
            system("cls");
            break;
            case 2: system("cls");
            productos();
            system("cls");
            break;
            case 3: system("cls");
            menuProveedores();
            system("cls");
            break;
            case 4: system("cls");
            menuEmpleado();
            system("pause");
            system("cls");
            break;
            case 5: system("cls");
            menuCompras();
            system("pause");
            system("cls");
            break;
            case 6: system("cls");
            menuVentas();
            system("pause");
            system("cls");
            break;
            case 7: system("cls");
            crearDatosTienda();
            gotoxy(60,15);
            system("pause");
            system("cls");
            break;
            case 8: system("cls");
            menuEstadoEmpresa();
            system("cls");
            break;
            case 0: gotoxy(0,27);
            exit(0);
            break;
            default: gotoxy(46,27);
            printf("Opcion no valida\n");
        }
    }while(opcion!=0);
}

void dibujarAsteriscos(int n){
    //Funcion que genera arteriscos para llenar el cuadro
	int i;
	for(i = 0; i < n; i++){
		printf("*");
	}
}

void hacerMargen(){
    //MENU PRINCIPAL
    //Margen superior
    gotoxy(45,7);
	dibujarAsteriscos(71);
	//Margen costado izquierdo
    for(int i=8; i<=25; i++){
        gotoxy(45,i);
        dibujarAsteriscos(1);
    }
    //Margen costado derecho
    for(int j=8; j<=25; j++){
        gotoxy(115,j);
        dibujarAsteriscos(1);
    }
    //Margen inferior
    gotoxy(46,25);
    dibujarAsteriscos(69);
    //Margenes adicionales
    gotoxy(46,12);
    dibujarAsteriscos(69);
    for(int c=13; c<=24; c++){
    gotoxy(80,c);
    dibujarAsteriscos(1);
    }
}


void menuCliente(){
    //Menu cliente
    system("color 17");
    int opcion;
    do{
        hacerMargen();
        gotoxy(75,10);
        printf("MENU CLIENTES\n");
        gotoxy(50,14);
        printf("1. Crear Cliente\n");
        gotoxy(50,16);
        printf("2. Editar Cliente\n");
        gotoxy(50,18);
		printf("3. Eliminar Cliente\n");
		gotoxy(88,14);
		printf("4. Mostrar Clientes\n");
		gotoxy(88,16);
		printf("5. Buscar Cliente\n");
		gotoxy(88,18);
		printf("0. Salir\n");
		gotoxy(50,20);
		printf("Ingrese una opcion: ");
		scanf("%d",&opcion);
		switch(opcion){
		    case 1: system("cls");
            crearCliente();
            system("cls");
		    break;
		    case 2: system("cls");
            editarCliente();
		    break;
		    case 3: system("cls");
		    eliminarCliente();
		    break;
		    case 4: system("cls");
            mostrarClientes();
            system("pause");
            system("cls");
            break;
            case 5: system("cls");
            buscarCliente();
            break;
		    case 0: system("cls");
		    menu();
            break;
            default: gotoxy(46,27);
            printf("Opcion no valida\n");
		}
    }while(opcion!=0);
}

void crearCliente(){
    //Creamos cliente
	printf("Crear Cliente\n");
	fflush(stdin);
	printf("Cliente No. %d\n", cantClientes + 1);
	clientes[cantClientes].id = cantClientes;
	printf("Nombre del Cliente: ");
	fgets(clientes[cantClientes].nombre, 30, stdin);
	printf("\n");
	printf("Cedula del Cliente: ");
	scanf("%d", &clientes[cantClientes].cedula);
	printf("\n");
	fflush(stdin);
	printf("Direccion del Cliente: ");
	fgets(clientes[cantClientes].direccion, 30, stdin);
	printf("\n");
	printf("Telefono del Cliente: ");
	scanf("%d",&clientes[cantClientes].telefono);
	printf("\n");
	cantClientes += 1;
}

void mostrarClientes(){
    //Mostramos todos los clientes registrados
    for(int i=0; i<cantClientes; i++){
    printf("Mostrar Clientes\n");
	printf("Cliente No. %d\n", clientes[i].id + 1);
	printf("Nombre del Cliente: %s\n", clientes[i].nombre);
	printf("Cedula del Cliente: %d\n", clientes[i].cedula);
	printf("Direccion del Cliente: %s\n", clientes[i].direccion);
	printf("Telefono del Cliente: %d\n", clientes[i].telefono);
	printf("\n\n");
    }
}

int buscarCliente(){
    //Buscar un cliente por su numero de cedula
    int cedulaBuscar;
    printf("Buscar cliente\n");
    printf("Ingrese la cedula del cliente\n");
    scanf("%d",&cedulaBuscar);
    for(int i=0; i<cantClientes; i++){
        if(cedulaBuscar == clientes[i].cedula){
            mostrarCliente(clientes[i].id);
            return clientes[i].id;
        }
    }
    printf("El cliente no existe\n");
    return -1;
}


void editarCliente(){
    //Podemos realizar cambios en la informacion del cliente
    printf("Editar cliente\n");
    int idCliente, opcion;
    idCliente = buscarCliente();
    if(idCliente!=-1){
        do{
            hacerMargen();
            gotoxy(73,10);
            printf("Cambios Cliente\n");
            gotoxy(50,14);
            printf("1. Cambiar nombre\n");
            gotoxy(50,16);
            printf("2. Cambiar direccion\n");
            gotoxy(88,14);
            printf("3. Cambiar telefono\n");
            gotoxy(88,16);
            printf("0. Salir\n");
            gotoxy(50,18);
            printf("Ingrese una opcion: \n");
            gotoxy(70,18);
            scanf("%d",&opcion);
            switch(opcion){
            case 1: system("cls");
            clienteCambioNombre(idCliente);
            system("cls");
            break;
            case 2: system("cls");
            clienteCambioDireccion(idCliente);
            system("cls");
            break;
            case 3: system("cls");
            clienteCambioTelefono(idCliente);
            system("cls");
            break;
            case 0: system("cls");
            break;
            default: gotoxy(46,27);
            printf("Opcion no valida\n");
            }
        }while(opcion!=0);
	}
}

void mostrarCliente(int idCliente){
    //Muestra el cliente que se quizo buscar
    printf("\n");
    printf("Mostrar Cliente\n");
	printf("Cliente No. %d\n", clientes[idCliente].id + 1);
	printf("Nombre del Cliente: %s\n", clientes[idCliente].nombre);
	printf("Cedula del Cliente: %d\n", clientes[idCliente].cedula);
	printf("Direccion del Cliente: %s\n", clientes[idCliente].direccion);
	printf("Telefono del Cliente: %d\n", clientes[idCliente].telefono);
	printf("\n\n");
	system("pause");
	system("cls");
}

void eliminarCliente(){
    //Elimina el cliente por medio de la cedula ingresada por teclado
	int i;
	printf("Eliminar Cliente\n");
	int idCliente = buscarCliente();
	if(idCliente != -1 && clientes[idCliente].compras == 0){
		if(idCliente < cantClientes){
			//Validar si el cliente tiene registros en el sistema
			for(i = idCliente; i < cantClientes; i++){
				clientes[i+1].id = i;
				copy(clientes[i].nombre,clientes[i+1].nombre);
				clientes[i].cedula=clientes[i+1].cedula;
				copy(clientes[i].direccion,clientes[i+1].direccion);
				clientes[i].telefono=clientes[i+1].telefono;
			}
		}
		cantClientes -= 1;
	}else{
	    printf("No se puede eliminar el cliente (Posee Compras)\n");
	}
}

void clienteCambioNombre(int idCliente){
    //Cambio nombre cliente
    printf("Ingrese su nombre: ");
    fflush(stdin);
    fgets(clientes[idCliente].nombre, 30, stdin);
}

void clienteCambioDireccion(int idCliente){
    //Cambio direccion cliente
    printf("Ingrese su direccion: ");
    fflush(stdin);
    fgets(clientes[idCliente].direccion, 30, stdin);
}

void clienteCambioTelefono(int idCliente){
    //Cambio telefono cliente
    printf("Ingrese su telefono: ");
    scanf("%d",&clientes[idCliente].telefono);
}

void hacerMargenProductos(){
    //Margen para mostrar productos en pantalla
    int i;
    gotoxy(18,6);
    dibujarAsteriscos(140);
    gotoxy(18,8);
    dibujarAsteriscos(140);
    gotoxy(18,7);
    dibujarAsteriscos(1);
    gotoxy(157,7);
    dibujarAsteriscos(1);
    for(i=9; i<=40; i++){
        gotoxy(18,i);
        dibujarAsteriscos(1);
    }
    for(i=9; i<=40; i++){
        gotoxy(157,i);
        dibujarAsteriscos(1);
    }
    gotoxy(19,40);
    dibujarAsteriscos(138);
    for(i=9; i<=40; i++){
        gotoxy(90,i);
        dibujarAsteriscos(1);
    }
}

void productos(){
    //Menu opcion productos
    system("color 70");
    int opcion;
    do{
        system("color 70");
        hacerMargen();
        gotoxy(74,10);
        printf("Menu Productos\n");
        gotoxy(50,18);
        printf("1. Mostrar Cartelera\n");
        gotoxy(88,18);
        printf("2. Mostrar Productos\n");
        gotoxy(50,20);
        printf("0. Salir\n");
        gotoxy(88,20);
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: system("cls");
            system("color 47");
            cartelera();
            gotoxy(51,25);
            system("pause");
            system("cls");
            break;
            case 2: system("cls");
            system("color 47");
            menuProductos();
            gotoxy(24,42);
            system("pause");
            system("cls");
            break;
            case 0: system("cls");
            menu();
            break;
            default: gotoxy(46,27);
            printf("Opcion no valida\n");
        }
    }while(opcion!=0);
}

void menuProductos(){
        hacerMargenProductos();
        gotoxy(70,7);
        printf("MENU PRODUCTOS CINEMA Juan's\n");
        gotoxy(22,10);
        printf("Producto\n");
        gotoxy(120,10);
        printf("Precio\n");
        gotoxy(22,12);
        printf("Hamburguesa Mini\n");
        gotoxy(120,12);
        printf("$ 5.000\n");
        gotoxy(22,14);
        printf("Hamburguesa Grande\n");
        gotoxy(120,14);
        printf("$ 8.000\n");
        gotoxy(22,16);
        printf("Perro Mini\n");
        gotoxy(120,16);
        printf("$ 4.000\n");
        gotoxy(22,18);
        printf("Perro Grande\n");
        gotoxy(120,18);
        printf("$ 6.000\n");
        gotoxy(22,20);
        printf("Gaseosa Mini\n");
        gotoxy(120,20);
        printf("$ 3.000\n");
        gotoxy(22,22);
        printf("Gaseosa Grande\n");
        gotoxy(120,22);
        printf("$ 5.000\n");
        gotoxy(22,24);
        printf("Crispetas Pequeñas\n");
        gotoxy(120,24);
        printf("$ 4.000\n");
        gotoxy(22,26);
        printf("Crispetas Grandes\n");
        gotoxy(120,26);
        printf("$ 8.000\n");
        gotoxy(22,28);
        printf("Chocolatina\n");
        gotoxy(120,28);
        printf("$ 2.000\n");
        gotoxy(22,30);
        printf("Combo 1: Hamburguesa Grande, Gaseosa Grande, Chocolatina\n");
        gotoxy(120,30);
        printf("$ 15.000\n");
        gotoxy(22,32);
        printf("Combo 2: Perro Grande, Gaseosa Grande, Chocolatina\n");
        gotoxy(120,32);
        printf("$ 13.000\n");
        gotoxy(22,34);
        printf("Combo 3: Crispetas Grandes, Gaseosa Grande, Perro Mini\n");
        gotoxy(120,34);
        printf("$ 17.000\n");
        gotoxy(22,36);
        printf("Combo 4: Crispetas Grandes, Gaseosa Grande, Hamburguesa Mini\n");
        gotoxy(120,36);
        printf("$ 18.000\n");
        gotoxy(22,38);
        printf("Combo (Infantil): Crispetas Pequeñas, Gaseosa Mini, Chocolatina\n");
        gotoxy(120,38);
        printf("$ 9.000\n");
}

void hacerMargenCartelera(){
    //Margen cartelera cinema Juan's
    int i;
    gotoxy(45,6);
    dibujarAsteriscos(70);
    gotoxy(45,7);
    dibujarAsteriscos(1);
    gotoxy(114,7);
    dibujarAsteriscos(1);
    gotoxy(45,8);
    dibujarAsteriscos(70);
    for(i=9; i<=14; i++){
        gotoxy(45,i);
        dibujarAsteriscos(1);
        gotoxy(114,i);
        dibujarAsteriscos(1);
    }
    gotoxy(46,14);
    dibujarAsteriscos(68);
    for(i=15; i<=22; i++){
        gotoxy(45,i);
        dibujarAsteriscos(1);
        gotoxy(114,i);
        dibujarAsteriscos(1);
    }
    gotoxy(46,22);
    dibujarAsteriscos(68);
    gotoxy(46,16);
    dibujarAsteriscos(68);
    for(i=17; i<=21; i++){
        gotoxy(79,i);
        dibujarAsteriscos(1);
    }
}

void cartelera(){
    //Menu de las peliculas
    hacerMargenCartelera();
    gotoxy(68,7);
    printf("CARTELERA CINEMA Juan's\n");
    gotoxy(54,10);
    printf("12 Valientes\n");
    gotoxy(54,12);
    printf("Verdad O Reto\n");
    gotoxy(88,10);
    printf("Deadpool 2\n");
    gotoxy(88,12);
    printf("Operacion: Huracan\n");
    gotoxy(70,15);
    printf("HORARIOS Y PRECIOS\n");
    gotoxy(56,18);
    printf("DESDE LAS\n");
    gotoxy(51,19);
    printf("10 Horas - 17 Horas\n");
    gotoxy(57,20);
    printf("$ 7.000\n");
    gotoxy(92,18);
    printf("DESDE LAS\n");
    gotoxy(87,19);
    printf("17 Horas - 24 Horas\n");
    gotoxy(92,20);
    printf("$ 10.000\n");
}

void copy(char cadena1[], char cadena2[]){
    //Funcion para copiar una cadena a otra
    int i, contador=0;
    for(i=0; i<30; i++){
        if(cadena1[i]=='\n'){
            break;
        }
        contador++;
    }
    for(i=0; i<contador; i++){
        cadena1[i]=cadena2[i];
    }
}

void menuEmpleado(){
    //Menu empleado
    system("color 17");
    int opcion;
    do{
        hacerMargen();
        gotoxy(75,10);
        printf("MENU EMPLEADOS\n");
        gotoxy(50,14);
        printf("1. Crear Empleado\n");
        gotoxy(50,16);
        printf("2. Editar Empleado\n");
        gotoxy(50,18);
		printf("3. Eliminar Empleado\n");
		gotoxy(88,14);
		printf("4. Mostrar Empleados\n");
		gotoxy(88,16);
		printf("5. Buscar Empleado\n");
		gotoxy(88,18);
		printf("0. Salir\n");
		gotoxy(50,20);
		printf("Ingrese una opcion: ");
		scanf("%d",&opcion);
		switch(opcion){
		    case 1: system("cls");
            crearEmpleado();
            system("cls");
		    break;
		    case 2: system("cls");
            editarEmpleado();
		    break;
		    case 3: system("cls");
		    eliminarEmpleado();
		    break;
		    case 4: system("cls");
            mostrarEmpleados();
            system("pause");
            system("cls");
            break;
            case 5: system("cls");
            buscarEmpleado();
            break;
		    case 0: system("cls");
		    menu();
            break;
            default: gotoxy(46,27);
            printf("Opcion no valida\n");
		}
    }while(opcion!=0);
}

void crearEmpleado(){
    //Creamos empleado
    if(cantEmpleados==0){
        char nombre1[]="Carlos Alberto", direccion1[]="Puerto Tejada";
    empleados[cantEmpleados].id=cantEmpleados;
    copy(empleados[cantEmpleados].nombre,nombre1);
    empleados[cantEmpleados].cedula = 1112793162;
    copy(empleados[cantEmpleados].direccion,direccion1);
    empleados[cantEmpleados].telefono = 2112031;
    cantEmpleados++;
    }
    if(cantEmpleados==1){
    char nombre2[]="Pedro Mario", direccion2[]="El prado";
    empleados[cantEmpleados].id=cantEmpleados;
    copy(empleados[cantEmpleados].nombre,nombre2);
    empleados[cantEmpleados].cedula = 1112793132;
    copy(empleados[cantEmpleados].direccion,direccion2);
    empleados[cantEmpleados].telefono = 2112089;
    cantEmpleados++;
    }
    if(cantEmpleados==2){
    char nombre3[]="Maria Magdalena", direccion3[]="Santa Maria";
    empleados[cantEmpleados].id=cantEmpleados;
    copy(empleados[cantEmpleados].nombre,nombre3);
    empleados[cantEmpleados].cedula = 31414775;
    copy(empleados[cantEmpleados].direccion,direccion3);
    empleados[cantEmpleados].telefono = 2112231;
    cantEmpleados++;
    }
	printf("Crear Empleado\n");
	fflush(stdin);
	printf("Empleado No. %d\n", cantEmpleados + 1);
	empleados[cantEmpleados].id = cantEmpleados;
	printf("Nombre del Empleado: ");
	fgets(empleados[cantEmpleados].nombre, 30, stdin);
	printf("\n");
	printf("Cedula del Empleado: ");
	scanf("%d", &empleados[cantEmpleados].cedula);
	printf("\n");
	fflush(stdin);
	printf("Direccion del Empleado: ");
	fgets(empleados[cantEmpleados].direccion, 30, stdin);
	printf("\n");
	printf("Telefono del Empleado: ");
	scanf("%d",&empleados[cantEmpleados].telefono);
	printf("\n");
	cantEmpleados += 1;
}

void mostrarEmpleados(){
    //Mostramos todos los empleados registrados
    for(int i=0; i<cantEmpleados; i++){
    printf("Mostrar Empleados\n");
	printf("Empleado No. %d\n", empleados[i].id + 1);
	printf("Nombre del Empleado: %s\n", empleados[i].nombre);
	printf("Cedula del Empleado: %d\n", empleados[i].cedula);
	printf("Direccion del Empleado: %s\n", empleados[i].direccion);
	printf("Telefono del Empleado: %d\n", empleados[i].telefono);
	printf("\n\n");
    }
}

void editarEmpleado(){
    //Podemos realizar cambios en la informacion del empleado
    printf("Editar Empleado\n");
    int idEmpleado, opcion;
    idEmpleado = buscarEmpleado();
    if(idEmpleado!=-1){
        do{
            hacerMargen();
            gotoxy(73,10);
            printf("Cambios Empleado\n");
            gotoxy(50,14);
            printf("1. Cambiar nombre\n");
            gotoxy(50,16);
            printf("2. Cambiar direccion\n");
            gotoxy(88,14);
            printf("3. Cambiar telefono\n");
            gotoxy(88,16);
            printf("0. Salir\n");
            gotoxy(50,18);
            printf("Ingrese una opcion: \n");
            gotoxy(70,18);
            scanf("%d",&opcion);
            switch(opcion){
            case 1: system("cls");
            empleadoCambioNombre(idEmpleado);
            system("cls");
            break;
            case 2: system("cls");
            empleadoCambioDireccion(idEmpleado);
            system("cls");
            break;
            case 3: system("cls");
            empleadoCambioTelefono(idEmpleado);
            system("cls");
            break;
            case 0: system("cls");
            break;
            default: gotoxy(46,27);
            printf("Opcion no valida\n");
            }
        }while(opcion!=0);
	}
}

void empleadoCambioNombre(int idEmpleado){
    //Cambio nombre empleado
    printf("Ingrese su nombre: ");
    fflush(stdin);
    fgets(empleados[idEmpleado].nombre, 30, stdin);
}

void empleadoCambioDireccion(int idEmpleado){
    //Cambio direccion empleado
    printf("Ingrese su direccion: ");
    fflush(stdin);
    fgets(empleados[idEmpleado].direccion, 30, stdin);
}

void empleadoCambioTelefono(int idEmpleado){
    //Cambio telefono empleado
    printf("Ingrese su telefono: ");
    scanf("%d",&empleados[idEmpleado].telefono);
}

int buscarEmpleado(){
    //Buscar un empleado por su numero de cedula
    int cedulaBuscar;
    printf("Buscar Empleado\n");
    printf("Ingrese la cedula del empleado\n");
    scanf("%d",&cedulaBuscar);
    for(int i=0; i<cantEmpleados; i++){
        if(cedulaBuscar == empleados[i].cedula){
            mostrarEmpleado(empleados[i].id);
            return empleados[i].id;
        }
    }
    printf("El empleado no existe\n");
    return -1;
}

void mostrarEmpleado(int idEmpleado){
    //Muestra el empleado que se quizo buscar
    printf("\n");
    printf("Mostrar Empleado\n");
	printf("Empleado No. %d\n", empleados[idEmpleado].id + 1);
	printf("Nombre del Empleado: %s\n", empleados[idEmpleado].nombre);
	printf("Cedula del Empleado: %d\n", empleados[idEmpleado].cedula);
	printf("Direccion del Empleado: %s\n", empleados[idEmpleado].direccion);
	printf("Telefono del Empleado: %d\n", empleados[idEmpleado].telefono);
	printf("\n\n");
	system("pause");
	system("cls");
}

void eliminarEmpleado(){
    //Elimina el empleado por medio de la cedula ingresada por teclado
	int i;
	printf("Eliminar Empleado\n");
	int idEmpleado = buscarEmpleado();
	if(idEmpleado != -1){
		if(idEmpleado < cantEmpleados){
			//Validar si el cliente tiene registros en el sistema
			for(i = idEmpleado; i < cantEmpleados; i++){
				empleados[i+1].id = i;
				copy(empleados[i].nombre,empleados[i+1].nombre);
				empleados[i].cedula=empleados[i+1].cedula;
				copy(empleados[i].direccion,empleados[i+1].direccion);
				empleados[i].telefono=empleados[i+1].telefono;
			}
		}
		cantEmpleados -= 1;
	}
}

void menuProveedores(){
    //Menu proveedor
    system("color 17");
    int opcion;
    do{
        hacerMargen();
        gotoxy(73,10);
        printf("MENU PROVEEDORES\n");
        gotoxy(50,14);
        printf("1. Crear Proveedor\n");
        gotoxy(50,16);
        printf("2. Editar Proveedor\n");
        gotoxy(50,18);
		printf("3. Eliminar Proveedor\n");
		gotoxy(88,14);
		printf("4. Mostrar Proveedores\n");
		gotoxy(88,16);
		printf("5. Buscar Proveedor\n");
		gotoxy(88,18);
		printf("0. Salir\n");
		gotoxy(50,20);
		printf("Ingrese una opcion: ");
		scanf("%d",&opcion);
		switch(opcion){
		    case 1: system("cls");
            crearProveedor();
            system("cls");
		    break;
		    case 2: system("cls");
            editarProveedor();
		    break;
		    case 3: system("cls");
		    eliminarProveedor();
		    break;
		    case 4: system("cls");
            mostrarProveedores();
            system("pause");
            system("cls");
            break;
            case 5: system("cls");
            buscarProveedor();
            break;
		    case 0: system("cls");
		    menu();
            break;
            default: gotoxy(46,27);
            printf("Opcion no valida\n");
		}
    }while(opcion!=0);
}

void crearProveedor(){
    //Creamos proveedor
    if(cantProovedores==0){
        char nombre1[]="Coca Cola Colombia", direccion1[]="Cali Valle";
    proveedores[cantProovedores].id=cantProovedores;
    copy(proveedores[cantProovedores].nombre,nombre1);
    proveedores[cantProovedores].cedula = 42362313;
    copy(proveedores[cantProovedores].direccion,direccion1);
    proveedores[cantProovedores].telefono = 3105044832;
    cantProovedores++;
    }
    if(cantProovedores==1){
    char nombre2[]="Maiz Doña Mazorca", direccion2[]="Pereira Risaralda";
    proveedores[cantProovedores].id=cantProovedores;
    copy(proveedores[cantProovedores].nombre,nombre2);
    proveedores[cantProovedores].cedula = 16205600;
    copy(proveedores[cantProovedores].direccion,direccion2);
    proveedores[cantProovedores].telefono = 2094190;
    cantProovedores++;
    }
    if(cantProovedores==2){
    char nombre3[]="Comidas Rapidas CO's", direccion3[]="Cartago Valle";
    proveedores[cantProovedores].id=cantProovedores;
    copy(proveedores[cantProovedores].nombre,nombre3);
    proveedores[cantProovedores].cedula = 16507800;
    copy(proveedores[cantProovedores].direccion,direccion3);
    proveedores[cantProovedores].telefono = 2112254;
    cantProovedores++;
    }
	printf("Crear Proveedor\n");
	fflush(stdin);
	printf("Proveedor No. %d\n", cantProovedores + 1);
	proveedores[cantProovedores].id = cantProovedores;
	printf("Nombre del Proveedor: ");
	fgets(proveedores[cantProovedores].nombre, 30, stdin);
	printf("\n");
	printf("Cedula del Proveedor: ");
	scanf("%d", &proveedores[cantProovedores].cedula);
	printf("\n");
	fflush(stdin);
	printf("Direccion del Proveedor: ");
	fgets(proveedores[cantProovedores].direccion, 30, stdin);
	printf("\n");
	printf("Telefono del Proveedor: ");
	scanf("%d",&proveedores[cantProovedores].telefono);
	printf("\n");
	cantProovedores += 1;
}

void editarProveedor(){
    //Podemos realizar cambios en la informacion del proveedor
    printf("Editar Proveedor\n");
    int idProveedor, opcion;
    idProveedor = buscarProveedor();
    if(idProveedor!=-1){
        do{
            hacerMargen();
            gotoxy(73,10);
            printf("Cambios Proveedor\n");
            gotoxy(50,14);
            printf("1. Cambiar nombre\n");
            gotoxy(50,16);
            printf("2. Cambiar direccion\n");
            gotoxy(88,14);
            printf("3. Cambiar telefono\n");
            gotoxy(88,16);
            printf("0. Salir\n");
            gotoxy(50,18);
            printf("Ingrese una opcion: \n");
            gotoxy(70,18);
            scanf("%d",&opcion);
            switch(opcion){
            case 1: system("cls");
            proveedorCambioNombre(idProveedor);
            system("cls");
            break;
            case 2: system("cls");
            proveedorCambioDireccion(idProveedor);
            system("cls");
            break;
            case 3: system("cls");
            proveedorCambioTelefono(idProveedor);
            system("cls");
            break;
            case 0: system("cls");
            break;
            default: gotoxy(46,27);
            printf("Opcion no valida\n");
            }
        }while(opcion!=0);
	}
}

void proveedorCambioNombre(int idProveedor){
    //Cambio nombre proveedor
    printf("Ingrese su nombre: ");
    fflush(stdin);
    fgets(proveedores[idProveedor].nombre, 30, stdin);
}

void proveedorCambioDireccion(int idProveedor){
    //Cambio direccion proveedor
    printf("Ingrese su direccion: ");
    fflush(stdin);
    fgets(proveedores[idProveedor].direccion, 30, stdin);
}

void proveedorCambioTelefono(int idProveedor){
    //Cambio telefono proveedor
    printf("Ingrese su telefono: ");
    scanf("%d",&proveedores[idProveedor].telefono);
}

int buscarProveedor(){
    //Buscar un proveedor por su numero de cedula
    int cedulaBuscar;
    printf("Buscar Proveedor\n");
    printf("Ingrese la cedula del Proveedor\n");
    scanf("%d",&cedulaBuscar);
    for(int i=0; i<cantProovedores; i++){
        if(cedulaBuscar == proveedores[i].cedula){
            mostrarProveedor(proveedores[i].id);
            return proveedores[i].id;
        }
    }
    printf("El proveedor no existe\n");
    return -1;
}

void mostrarProveedor(int idProveedor){
    //Muestra el proveedor que se quizo buscar
    printf("\n");
    printf("Mostrar Proveedor\n");
	printf("Proveedor No. %d\n", proveedores[idProveedor].id + 1);
	printf("Nombre del Proveedor: %s\n", proveedores[idProveedor].nombre);
	printf("Cedula del Proveedor: %d\n", proveedores[idProveedor].cedula);
	printf("Direccion del Proveedor: %s\n", proveedores[idProveedor].direccion);
	printf("Telefono del Proveedor: %d\n", proveedores[idProveedor].telefono);
	printf("\n\n");
	system("pause");
	system("cls");
}

void mostrarProveedores(){
    //Mostramos todos los proveedores registrados
    for(int i=0; i<cantProovedores; i++){
    printf("Mostrar Proveedores\n");
	printf("Proveedor No. %d\n", proveedores[i].id + 1);
	printf("Nombre del Proveedor: %s\n", proveedores[i].nombre);
	printf("Cedula del Proveedor: %d\n", proveedores[i].cedula);
	printf("Direccion del Proveedor: %s\n", proveedores[i].direccion);
	printf("Telefono del Proveedor: %d\n", proveedores[i].telefono);
	printf("\n\n");
    }
}

void eliminarProveedor(){
    //Elimina el proveedor por medio de la cedula ingresada por teclado
	int i;
	printf("Eliminar Proveedor\n");
	int idProveedor = buscarProveedor();
	if(idProveedor != -1){
		if(idProveedor < cantProovedores){
			//Validar si el cliente tiene registros en el sistema
			for(i = idProveedor; i < cantProovedores; i++){
				proveedores[i+1].id = i;
				copy(proveedores[i].nombre,proveedores[i+1].nombre);
				proveedores[i].cedula=proveedores[i+1].cedula;
				copy(proveedores[i].direccion,proveedores[i+1].direccion);
				proveedores[i].telefono=proveedores[i+1].telefono;
			}
		}
		cantProovedores -= 1;
	}
}

void crearDatosTienda(){
    //Creamos los datos de nuestro cinema
    char nombre1[]="Cinema Juan's", direccion1[]="Calle 4 #15-54 (Cartago)";
    copy(cinema.nombre,nombre1);
    gotoxy(60,10);
    printf("Nombre de la Tienda: %s\n", cinema.nombre);
    cinema.identificacion = 112794212;
    gotoxy(58,11);
    printf("Identificacion de la Tienda: %d\n", cinema.identificacion);
    copy(cinema.direccion,direccion1);
    gotoxy(53,12);
    printf("Direccion de la Tienda: %s\n", cinema.direccion);
    cinema.telefono = 3147962;
    gotoxy(62,13);
    printf("Telefono de la Tienda: %d\n", cinema.telefono);
}

void hacerMargenCompras(){
    //Hacer margen para el cajero de compras
    gotoxy(45,5);
    dibujarAsteriscos(80);
    for(int i=6; i<=27; i++){
        gotoxy(45,i);
        dibujarAsteriscos(1);
        gotoxy(124,i);
        dibujarAsteriscos(1);
    }
    gotoxy(46,8);
    dibujarAsteriscos(78);
    for(int i=9; i<=27; i++){
        gotoxy(86,i);
        dibujarAsteriscos(1);
    }
    gotoxy(46,27);
    dibujarAsteriscos(78);
}

void menuCompras(){
    //Menu para las compras
    system("color 17");
    int opcion;
    do{
        hacerMargen();
        gotoxy(75,10);
        printf("MENU COMPRAS\n");
        gotoxy(48,16);
        printf("1. Comprar Boletos Pelicula\n");
        gotoxy(48,18);
        printf("2. Comprar Productos cinema\n");
        gotoxy(84,16);
        printf("3. Mostrar Factura Cliente\n");
        gotoxy(84,18);
        printf("0. Salir\n");
        gotoxy(48,20);
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: system("cls");
            menuCompraBoletas();
            break;
            case 2: system("cls");
            menuCompraProductos();
            break;
            case 3: system("cls");
            int idCliente = buscarCliente();
            valorTotalFactura(idCliente);
            crearFacturaCliente(idCliente);
            gotoxy(35,40);
            system("pause");
            system("cls");
            break;
            case 0: system("cls");
            menu();
            break;
            default: gotoxy(48,27);
            printf("Opcion invalida\n");
        }
    }while(opcion!=0);
}

void menuCompraBoletas(){
    //Menu para comprar boletas cine
    int opcion;
    int idCliente = buscarCliente();
    do{
    hacerMargen();
    gotoxy(70,10);
    printf("CARTELERA CINEMA Juan's\n");
    gotoxy(54,16);
    printf("1. 12 Valientes\n");
    gotoxy(54,18);
    printf("2. Verdad O Reto\n");
    gotoxy(88,16);
    printf("3. Deadpool 2\n");
    gotoxy(88,18);
    printf("4. Operacion: Huracan\n");
    gotoxy(88,20);
    printf("0. Salir\n");
    gotoxy(54,20);
    printf("Ingrese Pelicula: ");
    scanf("%d",&opcion);
    switch(opcion){
        case 1: system("cls");
        pelicula1(idCliente);
        system("pause");
        system("cls");
        break;
        case 2: system("cls");
        pelicula2(idCliente);
        system("pause");
        system("cls");
        break;
        case 3: system("cls");
        pelicula3(idCliente);
        system("pause");
        system("cls");
        break;
        case 4: system("cls");
        pelicula4(idCliente);
        system("pause");
        system("cls");
        break;
        case 0: system("cls");
        break;
        default: gotoxy(54,26);
        printf("Opcion no valida\n");
    }
    }while(opcion!=0);
}

void pelicula1(int idCliente){
    //Determinanos valor pelicula 1
    int cant;
    int hora=0;
    int peliculaMa = 7000, peliculaNo = 10000;
    printf("Recordatorio (Horarios) desdes las 10 hasta las 24 horas\n");
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantpelicula1);
    printf("Ingrese la hora que desea ver la pelicula: ");
    scanf("%d",&hora);
    if(hora>=10 && hora<=17){
        compras[idCliente].pelicula1 = peliculaMa*compras[idCliente].cantpelicula1;
        clientes[idCliente].compras++;
    }else if(hora<10){
        printf("No atendemos a esta hora\n");
    }else{
        compras[idCliente].pelicula1 = peliculaNo*compras[idCliente].cantpelicula1;
        clientes[idCliente].compras++;
    }
}

void pelicula2(int idCliente){
    //Determinanos valor pelicula 2
    int hora=0;
    int peliculaMa = 7000, peliculaNo = 10000;
    printf("Recordatorio (Horarios) desdes las 10 hasta las 24 horas\n");
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantpelicula2);
    printf("Ingrese la hora que desea ver la pelicula: ");
    scanf("%d",&hora);
    if(hora>=10 && hora<=17){
        compras[idCliente].pelicula2 = peliculaMa*compras[idCliente].cantpelicula2;
        clientes[idCliente].compras++;
    }else if(hora<10){
        printf("No atendemos a esta hora\n");
    }else{
        compras[idCliente].pelicula2 = peliculaNo*compras[idCliente].cantpelicula2;
        clientes[idCliente].compras++;
    }
}

void pelicula3(int idCliente){
    //Determinanos valor pelicula 3
    int hora=0;
    int peliculaMa = 7000, peliculaNo = 10000;
    printf("Recordatorio (Horarios) desdes las 10 hasta las 24 horas\n");
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantpelicula3);
    printf("Ingrese la hora que desea ver la pelicula: ");
    scanf("%d",&hora);
    if(hora>=10 && hora<=17){
        compras[idCliente].pelicula3 = peliculaMa*compras[idCliente].cantpelicula3;
        clientes[idCliente].compras++;
    }else if(hora<10){
        printf("No atendemos a esta hora\n");
    }else{
        compras[idCliente].pelicula3 = peliculaNo*compras[idCliente].cantpelicula3;
        clientes[idCliente].compras++;
    }
}

void pelicula4(int idCliente){
    //Determinanos valor pelicula 4
    int hora=0;
    int peliculaMa = 7000, peliculaNo = 10000;
    printf("Recordatorio (Horarios) desdes las 10 hasta las 24 horas\n");
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantpelicula4);
    printf("Ingrese la hora que desea ver la pelicula: ");
    scanf("%d",&hora);
    if(hora>=10 && hora<=17){
        compras[idCliente].pelicula4 = peliculaMa*compras[idCliente].cantpelicula4;
        clientes[idCliente].compras++;
    }else if(hora<10){
        printf("No atendemos a esta hora\n");
    }else{
        compras[idCliente].pelicula4 = peliculaNo*compras[idCliente].cantpelicula4;
        clientes[idCliente].compras++;
    }
}

void menuCompraProductos(){
    //Menu compras productos
    int opcion;
    int idCliente = buscarCliente();
    do{
        hacerMargenCompras();
        gotoxy(68,6);
        printf("Bienvenido Al Cajero Compras (Juan's)\n");
        gotoxy(50,10);
        printf("1. Hamburguesa Mini\n");
        gotoxy(50,12);
        printf("2. Hamburguesa Grande\n");
        gotoxy(50,14);
        printf("3. Perro Mini\n");
        gotoxy(50,16);
        printf("4. Perro Grande\n");
        gotoxy(50,18);
        printf("5. Gaseosa Mini\n");
        gotoxy(50,20);
        printf("6. Gaseosa Grande\n");
        gotoxy(50,22);
        printf("7. Crispetas Pequeñas\n");
        gotoxy(98,10);
        printf("8. Crispetas Grandes\n");
        gotoxy(98,12);
        printf("9. Chocolatina\n");
        gotoxy(98,14);
        printf("10. Combo 1\n");
        gotoxy(98,16);
        printf("11. Combo 2\n");
        gotoxy(98,18);
        printf("12. Combo 3\n");
        gotoxy(98,20);
        printf("13. Combo 4\n");
        gotoxy(98,22);
        printf("14. Combo Infantil\n");
        gotoxy(82,25);
        printf("0. Salir\n");
        gotoxy(50,30);
        printf("Ingrese el numero correspondiente a su compra: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: system("cls");
            hamburguesaMini(idCliente);
            system("pause");
            system("cls");
            break;
            case 2: system("cls");
            hamburguesaGrande(idCliente);
            system("pause");
            system("cls");
            break;
            case 3: system("cls");
            perroMini(idCliente);
            system("pause");
            system("cls");
            break;
            case 4: system("cls");
            perroGrande(idCliente);
            system("pause");
            system("cls");
            break;
            case 5: system("cls");
            gaseosaMini(idCliente);
            system("pause");
            system("cls");
            break;
            case 6: system("cls");
            gaseosaGrande(idCliente);
            system("pause");
            system("cls");
            break;
            case 7: system("cls");
            crispetasPequenas(idCliente);
            system("pause");
            system("cls");
            break;
            case 8: system("cls");
            crispetasGrandes(idCliente);
            system("pause");
            system("cls");
            break;
            case 9: system("cls");
            chocolatina(idCliente);
            system("pause");
            system("cls");
            break;
            case 10: system("cls");
            combo1(idCliente);
            system("pause");
            system("cls");
            break;
            case 11: system("cls");
            combo2(idCliente);
            system("pause");
            system("cls");
            break;
            case 12: system("cls");
            combo3(idCliente);
            system("pause");
            system("cls");
            break;
            case 13: system("cls");
            combo4(idCliente);
            system("pause");
            system("cls");
            break;
            case 14: system("cls");
            comboInfan(idCliente);
            system("pause");
            system("cls");
            break;
            case 0: system("cls");
            break;
            default: gotoxy(50,32);
            printf("opcion no valida");
        }
    }while(opcion!=0);
}

void hamburguesaMini(int idCliente){
    //Determinamos valor hamburguesa mini
    int producto = 5000;
    if(product.CHamburMini>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].canthamburguesaMini);
    compras[idCliente].hamburguesaMini = producto*compras[idCliente].canthamburguesaMini;
    product.CHamburMini -= compras[idCliente].canthamburguesaMini;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron las Hamburguesas Mini\n");
    }
}

void hamburguesaGrande(int idCliente){
    //Determinamos valor hamburguesa grande
    int producto = 8000;
    if(product.CHamburGrande>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].canthamburguesaGrande);
    compras[idCliente].hamburguesaGrande = producto*compras[idCliente].canthamburguesaGrande;
    product.CHamburGrande -= compras[idCliente].canthamburguesaGrande;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron las Hamburguesas Grandes\n");
    }
}

void perroMini(int idCliente){
    //Determinamos valor perro mini
    int producto = 4000;
    if(product.CPerroMini>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantperroMini);
    compras[idCliente].perroMini = producto*compras[idCliente].cantperroMini;
    product.CPerroMini -= compras[idCliente].cantperroMini;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron los Perros Mini\n");
    }
}

void perroGrande(int idCliente){
    //Determinamos valor perro grande
    int producto = 6000;
    if(product.CPerroGrande>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantperroGrande);
    compras[idCliente].perroGrande = producto*compras[idCliente].cantperroGrande;
    product.CPerroGrande -= compras[idCliente].cantperroGrande;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron los Perros Grandes\n");
    }
}

void gaseosaMini(int idCliente){
    //Determinamos valor gaseosa mini
    int producto = 3000;
    if(product.CGaseosaMini>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantgaseosaMini);
    compras[idCliente].gaseosaMini = producto*compras[idCliente].cantgaseosaMini;
    product.CGaseosaMini -= compras[idCliente].cantgaseosaMini;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron las Gaseosas Minis\n");
    }
}

void gaseosaGrande(int idCliente){
    //Determinamos valor gaseosa grande
    int producto = 5000;
    if(product.CGaseosaGrande>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantgaseosaGrande);
    compras[idCliente].gaseosaGrande = producto*compras[idCliente].cantgaseosaGrande;
    product.CGaseosaGrande -= compras[idCliente].cantgaseosaGrande;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron las Gaseosas Grandes\n");
    }
}

void crispetasPequenas(int idCliente){
    //Determinamos valor crispetas pequenas
    int producto = 4000;
    if(product.CCrispetasMini>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantcrispetasPequenas);
    compras[idCliente].crispetasPequenas = producto*compras[idCliente].cantcrispetasPequenas;
    product.CCrispetasMini -= compras[idCliente].cantcrispetasPequenas;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron las Crispetas Pequenas\n");
    }
}

void crispetasGrandes(int idCliente){
    //Determinamos valor crispetas grandes
    int producto = 8000;
    if(product.CCrispetasGrande>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantcrispetasGrandes);
    compras[idCliente].crispetasGrandes = producto*compras[idCliente].cantcrispetasGrandes;
    product.CCrispetasGrande -= compras[idCliente].cantcrispetasGrandes;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron las Crispetas Grandes\n");
    }
}

void chocolatina(int idCliente){
    //Determinamos valor chocolatina
    int producto = 2000;
    if(product.CChocolatina>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantchocolatina);
    compras[idCliente].chocolatina = producto*compras[idCliente].cantchocolatina;
    product.CChocolatina -= compras[idCliente].cantchocolatina;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron las Chocolatinas\n");
    }
}

void combo1(int idCliente){
    //Determinamos valor combo1
    int producto = 15000;
    if(product.CCombo1>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantcombo1);
    compras[idCliente].combo1 = producto*compras[idCliente].cantcombo1;
    product.CCombo1 -= compras[idCliente].cantcombo1;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron los Combos 1\n");
    }
}

void combo2(int idCliente){
    //Determinamos valor combo2
    int producto = 13000;
    if(product.CCombo2>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantcombo2);
    compras[idCliente].combo2 = producto*compras[idCliente].cantcombo2;
    product.CCombo2 -= compras[idCliente].cantcombo2;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron los Combos 2\n");
    }
}

void combo3(int idCliente){
    //Determinamos valor combo3
    int producto = 17000;
    if(product.CCombo3>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantcombo3);
    compras[idCliente].combo3 = producto*compras[idCliente].cantcombo3;
    product.CCombo3 -= compras[idCliente].cantcombo3;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron los Combos 3\n");
    }
}

void combo4(int idCliente){
    //Determinamos valor combo4
    int producto = 18000;
    if(product.CCombo4>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantcombo4);
    compras[idCliente].combo4 = producto*compras[idCliente].cantcombo4;
    product.CCombo4 -= compras[idCliente].cantcombo4;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron los Combos 4\n");
    }
}

void comboInfan(int idCliente){
    //Determinamos valor combo infantil
    int producto = 15000;
    if(product.CComboInfan>=1){
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&compras[idCliente].cantcomboInfan);
    compras[idCliente].comboInfan = producto*compras[idCliente].cantcomboInfan;
    product.CComboInfan -= compras[idCliente].cantcomboInfan;
    clientes[idCliente].compras++;
    }else{
        printf("Se acabaron los Combos Infantiles\n");
    }
}

void menuVentas(){
    //Menu Ventas
    system("color 17");
    int opcion;
    do{
            hacerMargen();
        gotoxy(75,10);
        printf("Menu Ventas\n");
        gotoxy(48,16);
        printf("1. Cantidad Productos/Boletas\n");
        gotoxy(48,18);
        printf("2. Valor total Productos\n");
        gotoxy(84,16);
        printf("3. Valor total Boletas\n");
        gotoxy(82,18);
        printf("4. Valor total Productos/Boletas\n");
        gotoxy(84,20);
        printf("0. Salir\n");
        gotoxy(48,20);
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: system("cls");
            Sumaventas();
            gotoxy(30,26);
            system("pause");
            system("cls");
            break;
            case 2: system("cls");
            gotoxy(60,15);
            printf("El valor total Vendido de los Productos es: %d\n", totalPrecioVenta());
            system("pause");
            system("cls");
            break;
            case 3: system("cls");
            gotoxy(62,15);
            printf("El valor total Vendido de las Boletas es: %d\n", totalPrecioBoletas());
            system("pause");
            system("cls");
            break;
            case 4: system("cls");
            gotoxy(60,15);
            printf("El valor Total vendido Productos/Boletas es: %d\n", totalPrecioBoletas()+totalPrecioVenta());
            system("pause");
            system("cls");
            break;
            case 0: system("cls");
            menu();
            break;
            default: gotoxy(48,26);
            printf("Opcion Invalida\n");
        }
    }while(opcion!=0);
}

void Sumaventas(){
    //Cantidades de los productos y mostrar en pantalla
    int j=0;
    int shamburguesaMini=0, shamburguesaGrande=0, sperroMini=0, sperroGrande=0, sgaseosaMini=0, sgaseosaGrande=0;
    int scrispetasGrandes=0, scrispetasPequenas=0, schocolatina=0, scombo1=0, scombo2=0, scombo3=0, scombo4=0, scomboInfan=0;
    int sPelicula1=0, sPelicula2=0, sPelicula3=0, sPelicula4=0;
    while(j!=cantClientes){
        shamburguesaMini += compras[j].canthamburguesaMini;
        shamburguesaGrande += compras[j].canthamburguesaGrande;
        sperroMini += compras[j].cantperroMini;
        sperroGrande += compras[j].cantperroGrande;
        sgaseosaMini += compras[j].cantgaseosaMini;
        sgaseosaGrande += compras[j].cantgaseosaGrande;
        scrispetasPequenas += compras[j].cantcrispetasPequenas;
        scrispetasGrandes += compras[j].cantcrispetasGrandes;
        schocolatina += compras[j].cantchocolatina;
        scombo1 += compras[j].cantcombo1;
        scombo2 += compras[j].cantcombo2;
        scombo3 += compras[j].cantcombo3;
        scombo4 += compras[j].cantcombo4;
        scomboInfan += compras[j].cantcomboInfan;
        sPelicula1 += compras[j].cantpelicula1;
        sPelicula2 += compras[j].cantpelicula2;
        sPelicula3 += compras[j].cantpelicula3;
        sPelicula4 += compras[j].cantpelicula4;
        j++;
    }
    //Mostrando en pantalla ventas totales ingresadas
    hacerCuadroVenta();
    gotoxy(80,6);
    printf("VENTAS\n");
    gotoxy(30,8);
    printf("Cantidad de Hamburguesas Mini vendidas: %d\n", shamburguesaMini);
    gotoxy(30,9);
    printf("Cantidad de Hamburguesas Grandes vendidas: %d\n", shamburguesaGrande);
    gotoxy(30,10);
    printf("Cantidad de Perros Mini vendidos: %d\n", sperroMini);
    gotoxy(30,11);
    printf("Cantidad de Perros Grandes vendidos: %d\n", sperroGrande);
    gotoxy(30,12);
    printf("Cantidad de Gaseosas Mini vendidas: %d\n", sgaseosaMini);
    gotoxy(30,13);
    printf("Cantidad de Gaseosas Grandes vendidas: %d\n", sgaseosaGrande);
    gotoxy(30,14);
    printf("Cantidad de Crispetas Mini vendidas: %d\n", scrispetasPequenas);
    gotoxy(30,15);
    printf("Cantidad de Crispetas Grandes vendidas: %d\n", scrispetasGrandes);
    gotoxy(30,16);
    printf("Cantidad de Chocolatinas vendidas: %d\n", schocolatina);
    gotoxy(30,17);
    printf("Cantidad de Combos 1 vendidos: %d\n", scombo1);
    gotoxy(30,18);
    printf("Cantidad de Combos 2 vendidos: %d\n", scombo2);
    gotoxy(30,19);
    printf("Cantidad de Combos 3 vendidos: %d\n", scombo3);
    gotoxy(30,20);
    printf("Cantidad de Combos 4 vendidos: %d\n", scombo4);
    gotoxy(30,21);
    printf("Cantidad de Combos Infantiles vendidos: %d\n", scomboInfan);
    gotoxy(30,22);
    printf("Cantidad boletas (12 Valientes) vendidas: %d\n", sPelicula1);
    gotoxy(30,23);
    printf("Cantidad boletas (Verdad o Reto) vendidas: %d\n", sPelicula2);
    gotoxy(30,24);
    printf("Cantidad boletas (DeadPool 2) vendidas: %d\n", sPelicula3);
    gotoxy(30,25);
    printf("Cantidad boletas (Operacion: Huracan) vendidas: %d\n", sPelicula4);
}

void hacerCuadroVenta(){
    gotoxy(28,5);
    dibujarAsteriscos(110);
    for(int i=6; i<=29; i++){
        gotoxy(28,i);
        dibujarAsteriscos(1);
        gotoxy(137,i);
        dibujarAsteriscos(1);
    }
    gotoxy(29,29);
    dibujarAsteriscos(108);
}

int totalPrecioVenta(){
    //Retornaremos el total de las ventas registradas
    int sumaTotal=0;
    int j=0;
    int shamburguesaMini=0, shamburguesaGrande=0, sperroMini=0, sperroGrande=0, sgaseosaMini=0, sgaseosaGrande=0;
    int scrispetasGrandes=0, scrispetasPequenas=0, schocolatina=0, scombo1=0, scombo2=0, scombo3=0, scombo4=0, scomboInfan=0;
    while(j!=cantClientes){
        shamburguesaMini += compras[j].hamburguesaMini;
        shamburguesaGrande += compras[j].hamburguesaGrande;
        sperroMini += compras[j].perroMini;
        sperroGrande += compras[j].perroGrande;
        sgaseosaMini += compras[j].gaseosaMini;
        sgaseosaGrande += compras[j].gaseosaGrande;
        scrispetasPequenas += compras[j].crispetasPequenas;
        scrispetasGrandes += compras[j].crispetasGrandes;
        schocolatina += compras[j].chocolatina;
        scombo1 += compras[j].combo1;
        scombo2 += compras[j].combo2;
        scombo3 += compras[j].combo3;
        scombo4 += compras[j].combo4;
        scomboInfan += compras[j].comboInfan;
        j++;
    }
    sumaTotal=shamburguesaMini+shamburguesaGrande+sperroMini+sperroGrande+sgaseosaMini+sgaseosaGrande+scrispetasPequenas+scrispetasGrandes+schocolatina+scombo1+scombo2+scombo3+scombo4+scomboInfan;
    return sumaTotal;
}

int totalPrecioBoletas(){
    //Calculamos la totalidad de boletas
    int j=0, sumaTotal=0;
    int sPelicula1=0, sPelicula2=0, sPelicula3=0, sPelicula4=0;
    while(j!=cantClientes){
        sPelicula1 += compras[j].pelicula1;
        sPelicula2 += compras[j].pelicula2;
        sPelicula3 += compras[j].pelicula3;
        sPelicula4 += compras[j].pelicula4;
        j++;
    }
    sumaTotal = sPelicula1 + sPelicula2 + sPelicula3 + sPelicula4;
    return sumaTotal;
}

void crearFacturaCliente(int idCliente){
    //Creamos factura compra del cliente
    int numeroFactura;
    numeroFactura = rand() % 1000;
    hacerMargenFactura();
    gotoxy(70,10);
    printf("Factura de Compra\n");
    gotoxy(32,12);
    printf("Entidad: Cinema Juan's\n");
    gotoxy(32,13);
    printf("Nombre Cliente: %s\n", clientes[idCliente].nombre);
    gotoxy(32,14);
    printf("Cedula Cliente: %d\n", clientes[idCliente].cedula);
    gotoxy(32,15);
    printf("Telefono Cliente: %d\n", clientes[idCliente].telefono);
    gotoxy(108,13);
    printf("No. Factura: %d\n", numeroFactura);
    gotoxy(45,17);
    printf("Descripcion\n");
    gotoxy(75,17);
    printf("Cantidad\n");
    if(compras[idCliente].canthamburguesaMini>=1){
        gotoxy(35,19);
        printf("Hamburguesa Mini\n");
        gotoxy(79,19);
        printf("%d\n", compras[idCliente].canthamburguesaMini);
    }else{
        gotoxy(35,19);
        printf("---------------------------\n");
        gotoxy(79,19);
        printf("-\n");
    }
    if(compras[idCliente].canthamburguesaGrande>=1){
        gotoxy(35,20);
        printf("Hamburguesa Grande\n");
        gotoxy(79,20);
        printf("%d\n", compras[idCliente].canthamburguesaGrande);
    }else{
        gotoxy(35,20);
        printf("---------------------------\n");
        gotoxy(79,20);
        printf("-\n");
    }
    if(compras[idCliente].cantperroMini>=1){
        gotoxy(35,21);
        printf("Perro Mini\n");
        gotoxy(79,21);
        printf("%d\n", compras[idCliente].cantperroMini);
    }else{
        gotoxy(35,21);
        printf("---------------------------\n");
        gotoxy(79,21);
        printf("-\n");
    }
    if(compras[idCliente].cantperroGrande>=1){
        gotoxy(35,22);
        printf("Perro Grande\n");
        gotoxy(79,22);
        printf("%d\n", compras[idCliente].cantperroGrande);
    }else{
        gotoxy(35,22);
        printf("---------------------------\n");
        gotoxy(79,22);
        printf("-\n");
    }
    if(compras[idCliente].cantgaseosaMini>=1){
        gotoxy(35,23);
        printf("Gaseosa Mini\n");
        gotoxy(79,23);
        printf("%d\n", compras[idCliente].cantgaseosaMini);
    }else{
        gotoxy(35,23);
        printf("---------------------------\n");
        gotoxy(79,23);
        printf("-\n");
    }
    if(compras[idCliente].cantgaseosaGrande>=1){
        gotoxy(35,24);
        printf("Gaseosa Grande\n");
        gotoxy(79,24);
        printf("%d\n", compras[idCliente].cantgaseosaGrande);
    }else{
        gotoxy(35,24);
        printf("---------------------------\n");
        gotoxy(79,24);
        printf("-\n");
    }
    if(compras[idCliente].cantcrispetasPequenas>=1){
        gotoxy(35,25);
        printf("Crispetas Pequenas\n");
        gotoxy(79,25);
        printf("%d\n", compras[idCliente].cantcrispetasPequenas);
    }else{
        gotoxy(35,25);
        printf("---------------------------\n");
        gotoxy(79,25);
        printf("-\n");
    }
    if(compras[idCliente].cantcrispetasGrandes>=1){
        gotoxy(35,26);
        printf("Crispetas Grandes\n");
        gotoxy(79,26);
        printf("%d\n", compras[idCliente].cantcrispetasGrandes);
    }else{
        gotoxy(35,26);
        printf("---------------------------\n");
        gotoxy(79,26);
        printf("-\n");
    }
    if(compras[idCliente].cantchocolatina>=1){
        gotoxy(35,27);
        printf("Chocolatina\n");
        gotoxy(79,27);
        printf("%d\n", compras[idCliente].cantchocolatina);
    }else{
        gotoxy(35,27);
        printf("---------------------------\n");
        gotoxy(79,27);
        printf("-\n");
    }
    if(compras[idCliente].cantcombo1>=1){
        gotoxy(35,28);
        printf("Combo 1\n");
        gotoxy(79,28);
        printf("%d\n", compras[idCliente].cantcombo1);
    }else{
        gotoxy(35,28);
        printf("---------------------------\n");
        gotoxy(79,28);
        printf("-\n");
    }
    if(compras[idCliente].cantcombo2>=1){
        gotoxy(35,29);
        printf("Combo 2\n");
        gotoxy(79,29);
        printf("%d\n", compras[idCliente].cantcombo2);
    }else{
        gotoxy(35,29);
        printf("---------------------------\n");
        gotoxy(79,29);
        printf("-\n");
    }
    if(compras[idCliente].cantcombo3>=1){
        gotoxy(35,30);
        printf("Combo 3\n");
        gotoxy(79,30);
        printf("%d\n", compras[idCliente].cantcombo3);
    }else{
        gotoxy(35,30);
        printf("---------------------------\n");
        gotoxy(79,30);
        printf("-\n");
    }
    if(compras[idCliente].cantcombo4>=1){
        gotoxy(35,31);
        printf("Combo 4\n");
        gotoxy(79,31);
        printf("%d\n", compras[idCliente].cantcombo4);
    }else{
        gotoxy(35,31);
        printf("---------------------------\n");
        gotoxy(79,31);
        printf("-\n");
    }
    if(compras[idCliente].cantcomboInfan>=1){
        gotoxy(35,32);
        printf("Combo Infantil\n");
        gotoxy(79,32);
        printf("%d\n", compras[idCliente].cantcomboInfan);
    }else{
        gotoxy(35,32);
        printf("---------------------------\n");
        gotoxy(79,32);
        printf("-\n");
    }
    if(compras[idCliente].cantpelicula1>=1){
        gotoxy(35,33);
        printf("Pelicula 1 (12 Valientes)\n");
        gotoxy(79,33);
        printf("%d\n", compras[idCliente].cantpelicula1);
    }else{
        gotoxy(35,33);
        printf("---------------------------\n");
        gotoxy(79,33);
        printf("-\n");
    }
    if(compras[idCliente].cantpelicula2>=1){
        gotoxy(35,34);
        printf("Pelicula 2 (Verdad o Reto)\n");
        gotoxy(79,34);
        printf("%d\n", compras[idCliente].cantpelicula2);
    }else{
        gotoxy(35,34);
        printf("---------------------------\n");
        gotoxy(79,34);
        printf("-\n");
    }
    if(compras[idCliente].cantpelicula3>=1){
        gotoxy(35,35);
        printf("Pelicula 3 (DeadPool 2)\n");
        gotoxy(79,35);
        printf("%d\n", compras[idCliente].cantpelicula3);
    }else{
        gotoxy(35,35);
        printf("---------------------------\n");
        gotoxy(79,35);
        printf("-\n");
    }
    if(compras[idCliente].cantpelicula4>=1){
        gotoxy(35,36);
        printf("Pelicula 4 (Operacion: Huracan)\n");
        gotoxy(79,36);
        printf("%d\n", compras[idCliente].cantpelicula4);
    }else{
        gotoxy(35,36);
        printf("---------------------------\n");
        gotoxy(79,36);
        printf("-\n");
    }
    gotoxy(102,25);
    printf("Valor Total\n");
    gotoxy(105,26);
    printf("%d\n", valorTotalFactura(idCliente));
}

void hacerMargenFactura(){
    //Margen factura
    int i;
    gotoxy(29,9);
    dibujarAsteriscos(97);
    gotoxy(29,10);
    dibujarAsteriscos(1);
    gotoxy(125,10);
    dibujarAsteriscos(1);
    gotoxy(29,11);
    dibujarAsteriscos(1);
    gotoxy(125,11);
    dibujarAsteriscos(1);
    gotoxy(30,11);
    dibujarAsteriscos(96);
    for(i=12; i<=37; i++){
        gotoxy(29,i);
        dibujarAsteriscos(1);
        gotoxy(125,i);
        dibujarAsteriscos(1);
    }
    gotoxy(30,16);
    dibujarAsteriscos(96);
    for(i=12; i<=15; i++){
        gotoxy(105,i);
        dibujarAsteriscos(1);
    }
    for(i=17; i<=37; i++){
        gotoxy(69,i);
        dibujarAsteriscos(1);
        gotoxy(89,i);
        dibujarAsteriscos(1);
    }
    gotoxy(30,37);
    dibujarAsteriscos(96);
}

int valorTotalFactura(int idCliente){
    //Sacamos el total de compra del cliente
    int sumaP=0, sumaB=0, sumaTotal=0;
    sumaP = compras[idCliente].hamburguesaMini+compras[idCliente].hamburguesaGrande+compras[idCliente].perroMini+compras[idCliente].perroGrande+compras[idCliente].gaseosaMini+compras[idCliente].gaseosaGrande+compras[idCliente].crispetasPequenas+compras[idCliente].crispetasGrandes+compras[idCliente].chocolatina+compras[idCliente].combo1+compras[idCliente].combo2+compras[idCliente].combo3+compras[idCliente].combo4+compras[idCliente].comboInfan;
    sumaB = compras[idCliente].pelicula1+compras[idCliente].pelicula2+compras[idCliente].pelicula3+compras[idCliente].pelicula4;
    sumaTotal=sumaP+sumaB;
}

void mostrarProductosActuales(){
    //Mostramos la cantidad de productos actuales para tener en cuenta cuando comprar nueva mercancia
    hacerCuadroVenta();
    gotoxy(80,6);
    printf("CANTIDAD\n");
    gotoxy(30,8);
    printf("Cantidad Actual Hamburguesa Mini: %d\n", product.CHamburMini);
    gotoxy(30,9);
    printf("Cantidad Actual Hamburguesa Grande: %d\n", product.CHamburGrande);
    gotoxy(30,10);
    printf("Cantidad Actual Perro Mini: %d\n", product.CPerroMini);
    gotoxy(30,11);
    printf("Cantidad Actual Perro Grande: %d\n", product.CPerroGrande);
    gotoxy(30,12);
    printf("Cantidad Actual Gaseosa Mini: %d\n", product.CGaseosaMini);
    gotoxy(30,13);
    printf("Cantidad Actual Gaseosa Grande: %d\n", product.CGaseosaGrande);
    gotoxy(30,14);
    printf("Cantidad Actual Crispetas Pequeñas: %d\n", product.CCrispetasMini);
    gotoxy(30,15);
    printf("Cantidad Actual Crispetas Grandes: %d\n", product.CCrispetasGrande);
    gotoxy(30,16);
    printf("Cantidad Actual Chocolatina: %d\n", product.CChocolatina);
    gotoxy(30,17);
    printf("Cantidad Actual Combo1: %d\n", product.CCombo1);
    gotoxy(30,18);
    printf("Cantidad Actual Combo2: %d\n", product.CCombo2);
    gotoxy(30,19);
    printf("Cantidad Actual Combo3: %d\n", product.CCombo3);
    gotoxy(30,20);
    printf("Cantidad Actual Combo4: %d\n", product.CCombo4);
    gotoxy(30,21);
    printf("Cantidad Actual Combo Infantil: %d\n", product.CComboInfan);
}

void menuEstadoEmpresa(){
    //Menu para saber el estado actual de la empresa
    system("color 17");
    int opcion;
    do{
            hacerMargen();
            gotoxy(71,10);
        printf("MENU ESTADO EMPRESA\n");
        gotoxy(48,16);
        printf("1. Cantidad Actual Productos\n");
        gotoxy(48,18);
        printf("2. Comprar a Proveedores\n");
        gotoxy(88,16);
        printf("3. Valor Total Final\n");
        gotoxy(88,18);
        printf("0. Salir\n");
        gotoxy(48,20);
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: system("cls");
            mostrarProductosActuales();
            gotoxy(30,25);
            system("pause");
            system("cls");
            break;
            case 2: system("cls");
            comprarAProveedor();
            system("pause");
            system("cls");
            break;
            case 3: system("cls");
            totalFinal();
            system("pause");
            system("cls");
            break;
            case 0: system("cls");
            menu();
            break;
            default: gotoxy(48,24);
            printf("Opcion Invalida\n");
        }
    }while(opcion!=0);
}

void comprarAProveedor(){
    //Compras proveedores
    int idProveedor=buscarProveedor();
    int opcion;
    do{
            hacerCuadroVenta();
            gotoxy(78,6);
    printf("Compra Proveedor\n");
    gotoxy(30,8);
    printf("1. Hamburguesa Mini\n");
    gotoxy(30,9);
    printf("2. Hamburguesa Grande\n");
    gotoxy(30,10);
    printf("3. Perro Mini\n");
    gotoxy(30,11);
    printf("4. Perro Grande\n");
    gotoxy(30,12);
    printf("5. Gaseosa Mini\n");
    gotoxy(30,13);
    printf("6. Gaseosa Grande\n");
    gotoxy(30,14);
    printf("7. Crispetas Pequeñas\n");
    gotoxy(30,15);
    printf("8. Crispetas Grandes\n");
    gotoxy(30,16);
    printf("9. Chocolatina\n");
    gotoxy(30,17);
    printf("10. Combo1\n");
    gotoxy(30,18);
    printf("11. Combo2\n");
    gotoxy(30,19);
    printf("12. Combo3\n");
    gotoxy(30,20);
    printf("13. Combo4\n");
    gotoxy(30,21);
    printf("14. Combo Infantil\n");
    gotoxy(30,22);
    printf("0. Salir\n");
    gotoxy(30,23);
    printf("Ingrese que desea comprar: ");
    scanf("%d",&opcion);
    switch(opcion){
    case 1: system("cls");
    comprarHamburMini(idProveedor);
    system("pause");
    system("cls");
    break;
    case 2: system("cls");
    comprarHamburGrande(idProveedor);
    system("pause");
    system("cls");
    break;
    case 3: system("cls");
    comprarPerroMini(idProveedor);
    system("pause");
    system("cls");
    break;
    case 4: system("cls");
    comprarPerroGrande(idProveedor);
    system("pause");
    system("cls");
    break;
    case 5: system("cls");
    comprarGaseosaMini(idProveedor);
    system("pause");
    system("cls");
    break;
    case 6: system("cls");
    comprarGaseosaGrande(idProveedor);
    system("pause");
    system("cls");
    break;
    case 7: system("cls");
    comprarCrisMini(idProveedor);
    system("pause");
    system("cls");
    break;
    case 8: system("cls");
    comprarCrisGrande(idProveedor);
    system("pause");
    system("cls");
    break;
    case 9: system("cls");
    comprarChocolatina(idProveedor);
    system("pause");
    system("cls");
    break;
    case 10: system("cls");
    comprarCombo1(idProveedor);
    system("pause");
    system("cls");
    break;
    case 11: system("cls");
    comprarCombo2(idProveedor);
    system("pause");
    system("cls");
    break;
    case 12: system("cls");
    comprarCombo3(idProveedor);
    system("pause");
    system("cls");
    break;
    case 13: system("cls");
    comprarCombo4(idProveedor);
    system("pause");
    system("cls");
    break;
    case 14: system("cls");
    comprarComboInfan(idProveedor);
    system("pause");
    system("cls");
    break;
    case 0: system("cls");
    break;
    }
  }while(opcion!=0);
}

void comprarHamburMini(int idProveedor){
    int total = totalIngresos();
    int cant, valor=3000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CHamburMini += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarHamburGrande(int idProveedor){
    int total = totalIngresos();
    int cant, valor=6000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CHamburGrande += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarPerroMini(int idProveedor){
    int total = totalIngresos();
    int cant, valor=2000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CPerroMini += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarPerroGrande(int idProveedor){
    int total = totalIngresos();
    int cant, valor=4000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CPerroGrande += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarGaseosaMini(int idProveedor){
    int total = totalIngresos();
    int cant, valor=1000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CGaseosaMini += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarGaseosaGrande(int idProveedor){
    int total = totalIngresos();
    int cant, valor=3000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CGaseosaGrande += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarCrisMini(int idProveedor){
    int total = totalIngresos();
    int cant, valor=2000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CCrispetasMini += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarCrisGrande(int idProveedor){
    int total = totalIngresos();
    int cant, valor=6000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CCrispetasGrande += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarChocolatina(int idProveedor){
    int total = totalIngresos();
    int cant, valor=1000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CChocolatina += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarCombo1(int idProveedor){
    int total = totalIngresos();
    int cant, valor=13000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CCombo1 += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarCombo2(int idProveedor){
    int total = totalIngresos();
    int cant, valor=10000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CCombo2 += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarCombo3(int idProveedor){
    int total = totalIngresos();
    int cant, valor=15000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CCombo3 += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarCombo4(int idProveedor){
    int total = totalIngresos();
    int cant, valor=16000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CCombo4 += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

void comprarComboInfan(int idProveedor){
    int total = totalIngresos();
    int cant, valor=7000;
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d",&cant);
    valor = valor * cant;
    if(total>=valor){
        product.CComboInfan += cant;
        total -= valor;
        proveedores[idProveedor].ganancias += valor;
    }
}

int totalIngresos(){
    //Sumamos total ingresos productos y boletas
    int total = totalPrecioBoletas()+totalPrecioVenta();
    return total;
}

void totalFinal(){
    int total=totalIngresos();
    for(int i=0; i<cantProovedores;i++){
            total -= proveedores[i].ganancias;
    }
    gotoxy(58,15);
    printf("El total actual despues de la compra de mercancia es: %d\n", total);
}


