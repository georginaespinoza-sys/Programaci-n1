// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 16/09/2025
// Número de ejercicio: 3

#include <iostream>
using namespace std;

void ModificarValores(int valor, int &referencia) {
    valor = valor * 2;
    cout << "El valor pasado por valor es: " << valor <<endl;

    referencia = referencia + 10;//modificacion por referencia
    cout << "El valor pasado por referencia es: " << referencia <<endl;
}

int main() {
    
    int num1, num2;

    cout <<"Ingrese un valor para el primer numero: ";
    cin >> num1;
    cout <<"Ingrese un valor para el segundo numero: ";
    cin >> num2;

    ModificarValores(num1, num2);//llamamos a la funcion
    
    return 0;
}