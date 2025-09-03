// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 17

#include <iostream>

using namespace std;

int main() {
    int numero;
    int NumeroAmigo = 0;

    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Ingresa un numero entero positivo." << endl;
    } else {
        // Calcular la suma de los divisores propios
        for (int i = 1; i <= numero / 2; i++) {
            if (numero % i == 0) {
                NumeroAmigo += i;
            }
        }

        // Verificar si la suma de los divisores es igual al numero
        if (NumeroAmigo == numero) {
            cout << numero << " es un numero amigo." << endl;
        } else {
            cout << numero << " no es un numero amigo." << endl;
        }
    }

    return 0;
}