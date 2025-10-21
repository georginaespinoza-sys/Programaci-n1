/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 19/10/2025
Número de ejercicio: 3 
Problema planteado: Implementa una función recursiva que devuelva el enésimo número en la 
secuencia de Fibonacci. La secuencia de Fibonacci es una serie de 
números donde cada número es la suma de los dos anteriores, 
comenzando con 0 y 1. 
*/

#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int n;
    cout << "Ingrese el termino n: ";
    cin >> n;
    cout << "El termino de Fibonacci es: " << fibonacci(n) << endl;
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    //va sumando los 2 anteriores
    return fibonacci(n - 1) + fibonacci(n - 2);
}