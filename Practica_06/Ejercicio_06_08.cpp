/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/10/2025
Número de ejercicio: 8
Problema planteado: Escribe un programa que valide si una cadena ingresada cumple con el formato básico 
de una dirección de correo electrónico (por ejemplo, contiene exactamente un '@' y al 
menos un punto '.' después del '@'). 
• // Entrada: "usuario@example.com"  
• // Salida: "Correo electrónico válido"  
• // Entrada: "usuarioexample.com"  
• // Salida: "Correo electrónico inválido"  */

#include <iostream>
#include <string>

using namespace std;

bool validarCorreo(string correo) {
    int arroba = -1;
    int cantidadArroba = 0;
    // buscar '@' y contar cuantos hay
    for (int i = 0; i < correo.length(); i++) {
        if (correo[i] == '@') {
            cantidadArroba++;
            arroba = i;
        }
    }
    // debe haber exactamente un '@'
    if (cantidadArroba != 1) {
        return false;
    }
    // buscar '.' después del '@'
    for (int j = arroba + 1; j < correo.length(); j++) {
        if (correo[j] == '.') {
            return true;
        }
    }
    return false;
}

int main() {
    string correo;

    cout << "Ingrese su cadena de correo electronico: ";
    cin >> correo;

    if (validarCorreo(correo)) {
        cout << "Correo electronico valido" << endl;
    } else {
        cout << "Correo electronico invalido" << endl;
    }
    return 0;
}
