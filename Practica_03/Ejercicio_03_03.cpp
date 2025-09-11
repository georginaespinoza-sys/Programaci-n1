//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 11/09/2025
//Numero de ejercicio: 3

// capitua es un numero que al  revez es el mismo que el original
#include <iostream>
using namespace std;

bool capicua(int n) {
    if (n < 0) {
        return false;
    }
    int original = n;
    int invertido = 0;
    while (original > 0) {
        invertido = invertido * 10 + original % 10;
        original /= 10;
    }
    return n == invertido;
}

int main() {
    int numero;

    cout << "Ingresa un numero para verificar si es capicua: "<<endl;
    cin >> numero;

    if (capicua(numero)) {
        cout << numero << " es un numero capicua" <<endl;
    } else {
        cout << numero << " no es un numero capicua" <<endl;
    }

    return 0;
}