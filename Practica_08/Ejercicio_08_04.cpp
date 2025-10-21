/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 20/10/2025
Número de ejercicio: 4
Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de 
dos números enteros aplicando el algoritmo de Euclides. 
*/

#include <iostream>
using namespace std;

int euclides(int x, int y);

int main() {
    int x, y;
    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;
    int mcd = euclides(x, y);
    cout << "El MCD es: " << mcd;
    return 0;
}

int euclides(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return euclides(y, x % y);
    }
}