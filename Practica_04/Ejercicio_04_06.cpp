// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 18/09/2025
// Número de ejercicio: 6

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero, suma = 0;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int temp =abs(numero);
    while (temp > 0) {
        int digito = temp % 10;
        if (digito != 0) {
            suma += digito;
        }
        temp /= 10;
    }

    bool es_primo = true;
    if (suma <= 1) {
        es_primo = false;
    } else {
        for (int i = 2; i <= sqrt(suma); ++i) {
            if (suma % i == 0) {
                es_primo = false;
            }
        }
    }

    if (es_primo) {
        cout << "La suma de los digitos no nulos es un numero primo." <<endl;
    } else {
        cout << "La suma de los digitos no nulos no es un numero primo." <<endl;
    }

    return 0;
}