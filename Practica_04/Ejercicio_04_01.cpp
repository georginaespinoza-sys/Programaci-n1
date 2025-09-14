// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 14/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void intercambiarValores(int& num1, int& num2);

int main() {
    int num1 = 20, num2 = 11;

    cout << "El valor de num1 es: " << num1 <<endl;
    cout << "El valor de num2 es: " << num2 <<endl;
    
    intercambiarValores(num1, num2);//para intercambiar los valores
    
    cout << "El nuevo valor de num1 es: " << num1 <<endl;
    cout << "El nuevo valor de num2 es: " << num2 <<endl;

    return 0;
}

void intercambiarValores(int& num1, int& num2) {//intercambiar valores por referencia
    int aux; //para el intercambio
    
    // Proceso de intercambio
    aux = num1;
    num1 = num2;
    num2 = aux;
}