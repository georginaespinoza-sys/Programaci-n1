/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/11/2025
Número de ejercicio: 8
Problema planteado: Contador de líneas, palabras y caracteres 
Descripción: Escribe un programa que lea un archivo de texto llamado 
documento.txt y cuente el número total de líneas, palabras y caracteres. Al 
final, el programa debe mostrar estos totales en la consola. 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

void ContarElementos() {
    int lineas = 0;
    int palabras = 0;
    int caracteres = 0;
    string linea;

    ifstream archivo;
    archivo.open("documento.txt", ios::in);
    
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo documento.txt" << endl;
        exit(1);
    }
    
    // Leer archivo linea por linea
    while (getline(archivo, linea)) {
        lineas++; 
        
        // Contar caracteres (longitud de la linea)
        caracteres += linea.length();
        
        // Contar palabras en esta linea
        bool enPalabra = false;
        for (int i = 0; i < linea.length(); i++) {
            char c = linea[i];
            
            // Si es espacio fin de palabra
            if (c == ' ' || c == '\t') {
                if (enPalabra) {
                    palabras++;
                    enPalabra = false;
                }
            } else {
                // Si no es espacio estamos en una palabra
                enPalabra = true;
            }
        }
        
        // Contar ultima palabra si la linea no termina con espacio
        if (enPalabra) {
            palabras++;
        }
    }
    
    archivo.close();
    
    // Mostrar resultados
    cout << "Numero de lineas: " << lineas << endl;
    cout << "Numero de palabras: " << palabras << endl;
    cout << "Numero de caracteres: " << caracteres << endl;
}

int main() {
    ContarElementos();
    system("pause");
    return 0;
}