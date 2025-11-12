/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/11/2025
Número de ejercicio: 2
Problema planteado: Contador de palabras en un archivo 
Descripción: Escribe un programa que lea un archivo de texto llamado 
texto.txt y cuente cuántas palabras contiene. Una "palabra" se define como 
cualquier secuencia de caracteres separada por espacios o saltos de línea. 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void LeerArchivo() {
    ifstream archivo("texto.txt");
    string palabra;
    int contadorPalabras = 0;

    if (!archivo) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }

    while (archivo >> palabra) {
        contadorPalabras++;
    }

    cout << "Numero de palabras: " << contadorPalabras << endl;
}
// El archivo se cierra automáticamente al salir de la función

int main() {
    LeerArchivo();
    return 0;
}