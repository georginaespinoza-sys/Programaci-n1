/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 10/11/2025
Número de ejercicio: 5
Problema planteado: Actualizar datos en un archivo 
Descripción: Escribe un programa que permita actualizar un archivo de 
texto llamado productos.txt, el cual contiene una lista de productos y sus 
precios. Cada línea del archivo tiene el formato Producto Precio (por 
ejemplo, Manzana 1.50). El programa debe permitir al usuario ingresar el 
nombre de un producto y el nuevo precio, y actualizar ese precio en el 
archivo. Si el producto no se encuentra, debe indicar que no existe. 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

void ActualizarProducto() {
    // Leer todo a arrays
    string productos[50];
    double precios[50];
    int count = 0;
    string p;
    double pr;
    // Buscar producto
    string buscar;
    double nuevo;
    
    ifstream archivo;
    archivo.open("productos.txt", ios::in);
    
    if (!archivo) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    
    while (archivo >> p >> pr && count < 50) {
        productos[count] = p;
        precios[count] = pr;
        count++;
    }
    archivo.close();
    
    cout << "Producto: ";
    cin >> buscar;
    cout << "Nuevo precio: ";
    cin >> nuevo;
    
    bool existe = false;
    for (int i = 0; i < count; i++) {
        if (productos[i] == buscar) {
            precios[i] = nuevo;
            existe = true;
            break;
        }
    }
    
    if (!existe) {
        cout << "Producto no existe" << endl;
        return;
    }
    
    // Guardar cambios
    ofstream salida;
    salida.open("productos.txt", ios::out);
    
    for (int i = 0; i < count; i++) {
        salida << productos[i] << " " << precios[i] << endl;
    }
    
    salida.close();
    cout << "Precio actualizado" << endl;
}

int main() {
    ActualizarProducto();
    system("pause");
    return 0;
}