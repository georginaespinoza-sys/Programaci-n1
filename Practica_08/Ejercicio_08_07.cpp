/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 19/10/2025
Número de ejercicio: 7
Problema planteado: Realizar un algoritmo recursivo para la siguiente función: 
Q(n) = 1^2 + 2^2 + 3^2 +.....+ n^2 
*/

#include <iostream>
using namespace std;

int sumaCuadrados(int n);

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "La suma de los cuadrados es: " << sumaCuadrados(n) << endl;
    return 0;
}

int sumaCuadrados(int n) {
    if (n == 1){
        return 1; // Caso base
    }
    // Caso general
    return n * n + sumaCuadrados(n - 1); 
}