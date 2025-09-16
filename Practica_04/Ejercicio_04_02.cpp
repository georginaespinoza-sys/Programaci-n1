// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 15/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

float CalcularVolumen(double radio, double altura = 10.0) {
    float PI = 3.1416;
    float resultado;
    resultado= PI * (radio*radio) * altura;
    return resultado;
}

int main() {
    float radio;
    cout << "Ingresa el radio: " <<endl;
    cin >> radio;
    
    float volumen_calculado = CalcularVolumen(radio);// Llamamos a la función 
    cout << "El volumen del cilindro es: " << volumen_calculado <<endl;
    
    return 0;
}