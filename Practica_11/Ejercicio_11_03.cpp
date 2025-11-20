/*
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 16/11/2025
Número de ejercicio: 3
Problema planteado: La Pizzería Eli’s esta solicitando un programa que le permita controlar las pizzas 
vendidas de su catálogo de ventas. 
Los datos de su catálogo de pizzas deben ser almacenados en un archivo binario llamado 
“PRODUCTO.BIN”, los cuales son: 

• Codigo 
• Nombre 
• Tipo 
• Tamaño 
• Precio 
Ejemplo:  
• Codigo = 1 
• Nombre = RICOTTA 
• Tipo = ESPECIAL 
• Tamaño = MEDIANA 
• Precio = 80 Bs. 

Existen dos tipos de Pizza (TRADICIONAL y ESPECIAL), la diferencia es que la especial es 10% 
adicional del precio de la tradicional, eso quiere decir que si la mediana tradicional vale 80 Bs, la 
mediana especial vale 88 Bs. 
Existen 5 tamaños de pizza: Pizza XS, Mediana, Grande, Familiar e Interminable. 
El programa debe tener un menú de opciones con los siguientes datos: 
MENU PIZZERIA ELIS 
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

struct Pizza {
    int codigo;
    char nombre[50];
    char tipo[20];
    char tamanio[20];
    double precio;
};

const char* archivoPizzas = "PRODUCTO.BIN";

Pizza ingresarPizza() {
    Pizza p;
    cout << "Ingrese codigo de la pizza: ";
    cin >> p.codigo;
    cout << "Ingrese nombre de la pizza: ";
    cin.ignore();
    cin.getline(p.nombre, 50);
    
    int opcionTipo;
    cout << "Seleccione tipo (1. TRADICIONAL, 2. ESPECIAL): ";
    cin >> opcionTipo;
    if(opcionTipo == 1) {
        strcpy(p.tipo, "TRADICIONAL");
    } else {
        strcpy(p.tipo, "ESPECIAL");
    }
    
    int opcionTamanio;
    cout << "Seleccione tamanio (1. XS, 2. MEDIANA, 3. GRANDE, 4. FAMILIAR, 5. INTERMINABLE): ";
    cin >> opcionTamanio;
    switch(opcionTamanio) {
        case 1: strcpy(p.tamanio, "XS"); 
            break;
        case 2: strcpy(p.tamanio, "MEDIANA"); 
            break;
        case 3: strcpy(p.tamanio, "GRANDE"); 
            break;
        case 4: strcpy(p.tamanio, "FAMILIAR"); 
            break;
        case 5: strcpy(p.tamanio, "INTERMINABLE"); 
            break;
        default: strcpy(p.tamanio, "MEDIANA"); 
            break;
    }
    
    cout << "Ingrese precio base: ";
    cin >> p.precio;
    
    // Aplicar 10% adicional si es ESPECIAL
    if(strcmp(p.tipo, "ESPECIAL") == 0) {
        p.precio = p.precio * 1.10;
    }
    
    return p;
}

void AdicionarPizza() {
    Pizza p = ingresarPizza();
    ofstream archivo(archivoPizzas, ios::binary | ios::app);
    if(!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    archivo.write((char*)&p, sizeof(Pizza));
    archivo.close();
    cout << "Pizza agregada exitosamente" << endl;
}

void ListadoPizzas() {
    ifstream archivo(archivoPizzas, ios::binary);
    if(!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    cout << "\nCODIGO    NOMBRE    TIPO         TAMANIO       PRECIO" << endl;
    cout << "-----------------------------------------------------" << endl;
    
    Pizza p;
    while(archivo.read((char*)&p, sizeof(Pizza))) {
        cout << p.codigo;
        cout << "      ";
        cout << p.nombre;
        cout << "    ";
        cout << p.tipo;
        cout << "    ";
        cout << p.tamanio;
        cout << "    ";
        cout << p.precio;
        cout << " Bs.";
        cout << endl;
    }
    archivo.close();
}

void BuscarPizza() {
    int codigoBuscado;
    cout << "Ingrese codigo de la pizza a buscar: ";
    cin >> codigoBuscado;
    
    ifstream archivo(archivoPizzas, ios::binary);
    if(!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    Pizza p;
    bool encontrado = false;
    
    while(archivo.read((char*)&p, sizeof(Pizza))) {
        if(p.codigo == codigoBuscado) {
            cout << "\nPizza encontrada:" << endl;
            cout << "Codigo: ";
            cout << p.codigo << endl;
            cout << "Nombre: ";
            cout << p.nombre << endl;
            cout << "Tipo: ";
            cout << p.tipo << endl;
            cout << "Tamanio: ";
            cout << p.tamanio << endl;
            cout << "Precio: ";
            cout << p.precio << endl;
            cout << "Bs." << endl;
            encontrado = true;
        }
    }
    
    if(!encontrado) {
        cout << "Pizza no encontrada" << endl;
    }
    
    archivo.close();
}

void ModificarPizza() {
    int codigoModificar;
    cout << "Ingrese codigo de la pizza a modificar: ";
    cin >> codigoModificar;
    
    ifstream archivo(archivoPizzas, ios::binary);
    if(!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    vector<Pizza> pizzas;
    Pizza p;
    bool encontrado = false;
    
    while(archivo.read((char*)&p, sizeof(Pizza))) {
        if(p.codigo == codigoModificar) {
            encontrado = true;
            cout << "Pizza actual:" << endl;
            cout << "Nombre: ";
            cout << p.nombre;
            cout << "Nuevo nombre: ";
            cin.ignore();
            cin.getline(p.nombre, 50);
            
            int opcionTipo;
            cout << "Tipo: ";
            cout << p.tipo;
            cout << "Nuevo tipo (1. TRADICIONAL, 2. ESPECIAL): ";
            cin >> opcionTipo;
            if(opcionTipo == 1) {
                strcpy(p.tipo, "TRADICIONAL");
            } else {
                strcpy(p.tipo, "ESPECIAL");
            }
            
            int opcionTamanio;
            cout << "Tamanio: ";
            cout << p.tamanio;
            cout << "Nuevo tamanio (1. XS, 2. MEDIANA, 3. GRANDE, 4. FAMILIAR, 5. INTERMINABLE): ";
            cin >> opcionTamanio;
            switch(opcionTamanio) {
                case 1: strcpy(p.tamanio, "XS"); 
                    break;
                case 2: strcpy(p.tamanio, "MEDIANA"); 
                    break;
                case 3: strcpy(p.tamanio, "GRANDE"); 
                    break;
                case 4: strcpy(p.tamanio, "FAMILIAR"); 
                    break;
                case 5: strcpy(p.tamanio, "INTERMINABLE"); 
                    break;
                default: strcpy(p.tamanio, "MEDIANA"); 
                    break;
            }
            
            cout << "Precio base: ";
            cout << p.precio;
            cout << " -> Nuevo precio base: ";
            cin >> p.precio;
            
            // Recalcular precio con 10% adicional si es ESPECIAL
            if(strcmp(p.tipo, "ESPECIAL") == 0) {
                p.precio = p.precio * 1.10;
            }
        }
        pizzas.push_back(p);
    }
    archivo.close();
    
    if(!encontrado) {
        cout << "Pizza no encontrada" << endl;
        return;
    }
    
    ofstream archivoEscritura(archivoPizzas, ios::binary);
    if(!archivoEscritura.is_open()) {
        cout << "Error al abrir el archivo para escritura" << endl;
        return;
    }
    
    for(int i = 0; i < pizzas.size(); i++) {
        archivoEscritura.write((char*)&pizzas[i], sizeof(Pizza));
    }
    archivoEscritura.close();
    
    cout << "Pizza modificada exitosamente" << endl;
}

void menu() {
    int opcion = 0;
    bool bandera = true;
    
    while(bandera) {
        cout << "\n=== MENU PIZZERIA ELIS ===" << endl;
        cout << "1. Adicionar Pizza" << endl;
        cout << "2. Listado de Pizzas" << endl;
        cout << "3. Buscar una pizza por codigo" << endl;
        cout << "4. Modificar una pizza" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                AdicionarPizza();
                break;
            case 2:
                ListadoPizzas();
                break;
            case 3:
                BuscarPizza();
                break;
            case 4:
                ModificarPizza();
                break;
            case 5:
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