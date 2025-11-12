/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 10/11/2025
Número de ejercicio: 4
Problema planteado: Búsqueda de texto en un archivo 
Descripción: Escribe un programa que lea un archivo de texto llamado 
datos.txt y permita al usuario buscar una palabra o frase específica. El 
programa debe contar y mostrar cuántas veces aparece esa palabra o frase 
en el archivo. 
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

void EscribirDatos() {
    ofstream archivo;
    string texto;
    int nLineas;

    archivo.open("datos.txt", ios::out);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para escribir.";
        exit(1);
    }

    cout << "Ingresa el numero de lineas: ";
    cin >> nLineas;
    cin.ignore();
    
    for (int i = 0; i < nLineas; i++) {
        cout << "Ingrese la linea " << i+1 << " : ";
        getline(cin, texto);
        archivo << texto << endl;
    }
    archivo.close();
}

void BuscarTexto() {
    ifstream archivo("datos.txt");
    string linea, palabra;
    int contador = 0;

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para buscar";
        exit(1);
    }

    cout << "\nIngrese la palabra o frase a buscar: ";
    getline(cin, palabra);

    while (getline(archivo, linea)) {
        // Buscar desde el inicio cada vez
        size_t pos = linea.find(palabra);
        while (pos != string::npos) {
            contador++;
            pos = linea.find(palabra, pos + 1);  // Buscar desde la siguiente posicion
        }
    }

    cout << "La palabra/frase '" << palabra << "' aparece " << contador << " veces\n";
    archivo.close();
}

void MostrarContenido() {
    ifstream archivo("datos.txt");
    string linea;

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo para leer";
        exit(1);
    }
    
    cout << "\nContenido del archivo:" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();
}

int main() {
    EscribirDatos();
    MostrarContenido();
    BuscarTexto();
    return 0;
}