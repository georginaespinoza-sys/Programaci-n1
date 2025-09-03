// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 23

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    int inv = 0;
    while(n > 0){
        int r = n % 10;//Obtiene el último dígito del número usando el módulo 
        inv += r;//Suma el último dígito r a la variable inv
        inv *= 10;
        n /= 10;
    }
    
    cout << "El numero invertido es " << inv / 10 << endl;
    return 0;
}