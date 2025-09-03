// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 18

#include <iostream>
using namespace std;

bool esPrimo(int num) {
    bool resultado = true;
    if (num <= 1) {
        resultado = false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            resultado = false;
        }
    }
    return resultado;
}

int main() {
    int contador = 0;
    for (int numero = 2; contador < 100; ++numero) {
        if (esPrimo(numero)) {
            cout << numero <<endl;
            contador++;
        }
    }
    cout <<endl;
    return 0;
}