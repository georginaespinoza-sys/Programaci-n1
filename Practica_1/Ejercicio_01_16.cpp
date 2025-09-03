// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 16

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    bool esPrimo = true;
    for(int i = 2; i * i <= numero; i++) {
        if(numero % i == 0){
            esPrimo = false;
        }
    }
    
    if(esPrimo){
        cout << "Es un numero primo" << endl;
    }else {
        cout << "No es un numero primo" << endl;
    }
    return 0;
}