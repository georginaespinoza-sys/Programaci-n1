/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/11/2025
Número de ejercicio: 6
Problema planteado: Filtrado de registros de temperatura 
Descripción: Escribe un programa que lea un archivo de texto llamado 
temperaturas.txt, donde cada línea contiene el nombre de una ciudad 
seguido de su temperatura promedio del día. El programa debe generar un 
archivo altas_temperaturas.txt que solo incluya las ciudades con 
temperaturas superiores a N°C. 
Formato del archivo de entrada (temperaturas.txt): 
            Madrid 32.5
            Barcelona 28.3
            Sevilla 34.2
            Valencia 31.0
*/

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

void FiltrarTemperaturas() {
    // Archivo de entrada
    ifstream archivoEntrada;
    archivoEntrada.open("temperaturas.txt", ios::in);
    
    if (archivoEntrada.fail()) {
        cout << "No se pudo abrir el archivo temperaturas.txt" << endl;
        exit(1);
    }
    
    // Archivo de salida
    ofstream archivoSalida;
    archivoSalida.open("altas_temperaturas.txt", ios::out);
    
    if (archivoSalida.fail()) {
        cout << "No se pudo crear el archivo altas_temperaturas.txt" << endl;
        archivoEntrada.close();
        exit(1);
    }
    
    // Pedir temperatura minima
    double temperaturaMinima;
    cout << "Ingrese la temperatura minima: ";
    cin >> temperaturaMinima;
    
    string ciudad;
    double temperatura;
    
    // Leer y filtrar temperaturas de dos valores
    while (archivoEntrada >> ciudad >> temperatura) {
        if (temperatura > temperaturaMinima) {
            archivoSalida << ciudad << " " << temperatura << endl;
        }
    }
    
    // Cerrar archivos
    archivoEntrada.close();
    archivoSalida.close();
    
    cout << "Archivo altas_temperaturas.txt generado exitosamente." << endl;
}

int main() {
    FiltrarTemperaturas();
    system("pause");
    return 0;
}