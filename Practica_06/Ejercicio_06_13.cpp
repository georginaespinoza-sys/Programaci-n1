/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/10/2025
Número de ejercicio: 13
Problema planteado: Crea una función que reciba un String de cualquier tipo y se encargue de poner en 
mayúscula la primera letra de cada palabra. 
- No se pueden utilizar operaciones del lenguaje que lo resuelvan directamente.  */

#include <iostream>
#include <string>

using namespace std;

string MayusculaPrimeraLetra() {
    string texto;
    string resultado = "";

    cout << "Ingrese un texto: ";
    getline(cin, texto);
    
    bool nuevaPalabra = true;
    for (int i = 0; i < texto.size(); i++) {
        char caracter = texto[i];
        if (nuevaPalabra && caracter >= 'a' && caracter <= 'z') {
            // convierte a mayuscula
            caracter -= ('a' - 'A');
        }
        resultado += caracter;
        if (caracter == ' ') {
            nuevaPalabra = true;
        } else {
            nuevaPalabra = false;
        }
    }
    return resultado;
}

int main() {
    string resultado = MayusculaPrimeraLetra();
    cout << "Texto con mayuscula inicial: " << resultado << endl;
    return 0;
}
