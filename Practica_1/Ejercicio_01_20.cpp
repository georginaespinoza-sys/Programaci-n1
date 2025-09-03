// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 20

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero:" << endl;
    cin >> n;
    int digitos = 0;
    while (n > 0){
        digitos = digitos + 1;
        n /= 10;
    }
    
    cout << "La cantidad de digitos del numero es: " << digitos << endl;
    return 0;
}