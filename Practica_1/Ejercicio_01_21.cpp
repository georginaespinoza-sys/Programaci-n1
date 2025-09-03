// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 21

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Ingrese los 2 numeros a multiplicar:"<<endl;
    cin >> a >> b;
    int res = 0;//acumulador
    for(int i = 0; i < b; i++){
        res += a;
    }
    cout << "El resultado es " << res << endl; 
    return 0;
}