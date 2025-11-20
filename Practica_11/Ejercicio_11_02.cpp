/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 14/11/2025
Número de ejercicio: 2
Problema planteado: Farmacias CHAVEZ necesita registrar sus productos y las ventas de estos productos.
Para ello los datos deben ser almacenados en un archivo binario llamado “PRODUCTOS.BIN” de
los productos que necesita registrar son:

• CODIGO PRODUCTO Ejemplo: 1
• NOMBRE PRODUCTO Ejemplo: ASPIRINAS
• CANTIDAD INICIAL: Ejemplo: 500
• PRECIO UNITARIO Ejemplo: 1.5

Este programa debe tener un menú con las siguientes opciones:

MENU NOTAS UCB
1. Adicionar Producto (10 Puntos)
2. Listado de Productos (20 Puntos)
3. Buscar un producto por codigo (0 Puntos)
4. Modificar un producto (10 Puntos)
5. Adicionar ventas del producto(15 Puntos)

Para adicionar las ventas se debe realizar un archivo de texto llamado “VENTAS.txt” el cual
contiene la siguiente información: (CI cliente, Nombre Cliente, Codigo producto comprado,
Cantidad).

Ejemplo:
12345; WILLY TENORIO; 1; 25
25458; JUAN VALDEZ; 1; 30
75489; MICAELA CHAVEZ; 1; 10
Una vez ingresados los productos y las ventas, la opción de listado debe dar el siguiente
resultado:

CODIGO    NOMBRE PRODUCTO CANTIDAD INICIAL PRECIO  CANTIDAD VENDIDA  TOTAL
1            ASPIRINAS          500         1.5            65         97.5
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

struct Producto {
    int codigo;
    char nombre[50];
    int cantidadInicial;
    double precio;
    int cantidadVendida;
    double total;
};

const char* archivoProductos = "PRODUCTOS.BIN";
const char* archivoVentas = "VENTAS.txt";

Producto ingresarProducto() {
    Producto p;
    cout << "Ingrese codigo del producto: ";
    cin >> p.codigo;
    cout << "Ingrese nombre del producto: ";
    cin.ignore();
    cin.getline(p.nombre, 50);
    cout << "Ingrese cantidad inicial: ";
    cin >> p.cantidadInicial;
    cout << "Ingrese precio unitario: ";
    cin >> p.precio;
    p.cantidadVendida = 0;
    p.total = 0.0;
    return p;
}

void AdicionarProducto() {
    Producto p = ingresarProducto();
    ofstream archivo(archivoProductos, ios::binary | ios::app);
    if(!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    archivo.write((char*)&p, sizeof(Producto));
    archivo.close();
    cout << "Producto agregado exitosamente" << endl;
}

void ListadoProductos() {
    ifstream archivo(archivoProductos, ios::binary);
    if(!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    vector<Producto> productos;
    Producto p;
    
    while(archivo.read((char*)&p, sizeof(Producto))) {
        productos.push_back(p);
    }
    archivo.close();
    
    ifstream ventas(archivoVentas);
    if(ventas.is_open()) {
        int ci, codigoProducto, cantidad;
        char nombreCliente[100], separador;
        
        while(ventas >> ci) {
            ventas >> separador;
            ventas.getline(nombreCliente, 100, ';');
            ventas >> codigoProducto;
            ventas >> separador;
            ventas >> cantidad;
            
            for(int i = 0; i < productos.size(); i++) {
                if(productos[i].codigo == codigoProducto) {
                    productos[i].cantidadVendida = productos[i].cantidadVendida + cantidad;
                    productos[i].total = productos[i].cantidadVendida * productos[i].precio;
                }
            }
        }
        ventas.close();
    }
    
    cout << "\nCODIGO    NOMBRE PRODUCTO    CANTIDAD INICIAL    PRECIO    CANTIDAD VENDIDA    TOTAL" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    
    for(int i = 0; i < productos.size(); i++) {
        cout << productos[i].codigo;
        cout << "        ";
        cout << productos[i].nombre;
        cout << "           ";
        cout << productos[i].cantidadInicial;
        cout << "               ";
        cout << productos[i].precio;
        cout << "        ";
        cout << productos[i].cantidadVendida;
        cout << "               ";
        cout << productos[i].total;
        cout << endl;
    }
}

void BuscarProducto() {
    int codigoBuscado;
    cout << "Ingrese codigo del producto a buscar: ";
    cin >> codigoBuscado;
    
    ifstream archivo(archivoProductos, ios::binary);
    if(!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    Producto p;
    bool encontrado = false;
    
    while(archivo.read((char*)&p, sizeof(Producto))) {
        if(p.codigo == codigoBuscado) {
            cout << "\nProducto encontrado:" << endl;
            cout << "Codigo: ";
            cout << p.codigo << endl;
            cout << "Nombre: ";
            cout << p.nombre << endl;
            cout << "Cantidad inicial: ";
            cout << p.cantidadInicial << endl;
            cout << "Precio: ";
            cout << p.precio << endl;
            encontrado = true;
        }
    }
    
    if(!encontrado) {
        cout << "Producto no encontrado" << endl;
    }
    
    archivo.close();
}

void ModificarProducto() {
    int codigoModificar;
    cout << "Ingrese codigo del producto a modificar: ";
    cin >> codigoModificar;
    
    ifstream archivo(archivoProductos, ios::binary);
    if(!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    vector<Producto> productos;
    Producto p;
    bool encontrado = false;
    
    while(archivo.read((char*)&p, sizeof(Producto))) {
        if(p.codigo == codigoModificar) {
            encontrado = true;
            cout << "Producto actual:" << endl;
            cout << "Nombre: ";
            cout << p.nombre;
            cout << " -> Nuevo nombre: ";
            cin.ignore();
            cin.getline(p.nombre, 50);
            cout << "Cantidad inicial: ";
            cout << p.cantidadInicial;
            cout << " -> Nueva cantidad: ";
            cin >> p.cantidadInicial;
            cout << "Precio: ";
            cout << p.precio;
            cout << " -> Nuevo precio: ";
            cin >> p.precio;
        }
        productos.push_back(p);
    }
    archivo.close();
    
    if(!encontrado) {
        cout << "Producto no encontrado" << endl;
        return;
    }
    
    ofstream archivoEscritura(archivoProductos, ios::binary);
    if(!archivoEscritura.is_open()) {
        cout << "Error al abrir el archivo para escritura" << endl;
        return;
    }
    
    for(int i = 0; i < productos.size(); i++) {
        archivoEscritura.write((char*)&productos[i], sizeof(Producto));
    }
    archivoEscritura.close();
    
    cout << "Producto modificado exitosamente" << endl;
}

void AdicionarVentas() {
    ofstream ventas(archivoVentas, ios::app);
    if(!ventas.is_open()) {
        cout << "Error al abrir el archivo de ventas" << endl;
        return;
    }
    
    int ci, codigoProducto, cantidad;
    char nombreCliente[100];
    
    cout << "Ingrese CI del cliente: ";
    cin >> ci;
    cout << "Ingrese nombre del cliente: ";
    cin.ignore();
    cin.getline(nombreCliente, 100);
    cout << "Ingrese codigo del producto: ";
    cin >> codigoProducto;
    cout << "Ingrese cantidad vendida: ";
    cin >> cantidad;
    
    ventas << ci << "; " << nombreCliente << "; " << codigoProducto << "; " << cantidad << endl;
    ventas.close();
    
    cout << "Venta registrada exitosamente" << endl;
}

void menu() {
    int opcion = 0;
    bool bandera = true;
    
    while(bandera) {
        cout << "\n=== MENU FARMACIAS CHAVEZ ===" << endl;
        cout << "1. Adicionar Producto" << endl;
        cout << "2. Listado de Productos" << endl;
        cout << "3. Buscar un producto por codigo" << endl;
        cout << "4. Modificar un producto" << endl;
        cout << "5. Adicionar ventas del producto" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                AdicionarProducto();
                break;
            case 2:
                ListadoProductos();
                break;
            case 3:
                BuscarProducto();
                break;
            case 4:
                ModificarProducto();
                break;
            case 5:
                AdicionarVentas();
                break;
            case 6:
                bandera = false;
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    }
}

int main() {
    menu();
    return 0;
}