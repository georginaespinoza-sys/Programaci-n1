/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 03/11/2025
Número de ejercicio: 7
Problema planteado: Inventario de productos en una tienda 
Descripción: Define una estructura llamada Producto con los siguientes campos: 
• nombre (cadena de caracteres) 
• codigo (cadena de caracteres) 
• precio (decimal) 
• cantidad_en_inventario (entero) 
• observaciones (cadena de caracteres) 
Luego, escribe un programa que permita: 
• Registrar N productos en el inventario. 
• Mostrar el producto más caro en el inventario. 
• Mostrar la cantidad total de productos en inventario. 
• Si un producto se encuentra con cantidad_en_inventario menor a 5, en el 
campo observaciones debe tener un mensaje de advertencia “PRUDUCTO 
CON BAJA CANTIDAD DE INVENTARIO”. 
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Producto {
    char nombre[30];
    char codigo[30];
    double precio;
    int cantidad_en_inventario;
    char observaciones[30];
};

void llenarProductos(Producto prod[], int &n) {
    cout << "Digite la cantidad de productos: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Digite nombre del producto: ";
        cin.getline(prod[i].nombre, 30);
        cout << "Digite el codigo: ";
        cin.getline(prod[i].codigo, 30);
        cout << "Digite el precio: ";
        cin >> prod[i].precio;
        cout << "Digite en inventario: ";
        cin >> prod[i].cantidad_en_inventario;
        cin.ignore();
        
        if (prod[i].cantidad_en_inventario < 5) {
            //Intercambio de cadenas
            strcpy(prod[i].observaciones, "Producto con baja cantidad de inventario");
        } else {
            strcpy(prod[i].observaciones, "");
        }
    }
}

void mostrarMasCaro(Producto prod[], int n) {
    int pos = 0;
    double mayor = prod[0].precio;
    for (int i = 1; i < n; i++) {
        if (prod[i].precio > mayor) {
            mayor = prod[i].precio;
            pos = i;
        }
    }
    cout << "\nProducto mas caro:\n";
    cout << "Nombre: " << prod[pos].nombre << endl;
    cout << "Codigo: " << prod[pos].codigo << endl;
    cout << "Precio: " << prod[pos].precio << endl;
    cout << "Cantidad en inventario: " << prod[pos].cantidad_en_inventario << endl;
    cout << "Observaciones: " << prod[pos].observaciones << endl;
}

//Calcula la cantidad total
int cantidadTotal(Producto prod[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += prod[i].cantidad_en_inventario;
    }
    return suma;
}

void mostrarTodos(Producto prod[], int n) {
    cout << "\nInventario:\n";
    for (int i = 0; i < n; i++) {
        cout << "---------------------------\n";
        cout << "Nombre: " << prod[i].nombre << endl;
        cout << "Codigo: " << prod[i].codigo << endl;
        cout << "Precio: " << prod[i].precio << endl;
        cout << "Cantidad en inventario: " << prod[i].cantidad_en_inventario << endl;
        cout << "Observaciones: " << prod[i].observaciones << endl;
    }
}

int main() {
    int n;
    Producto prod[100];
    llenarProductos(prod, n);
    mostrarTodos(prod, n);
    mostrarMasCaro(prod, n);
    int total = cantidadTotal(prod, n);
    cout << "\nCantidad total de unidades en inventario: " << total << endl;

    getch();
    return 0;
}
