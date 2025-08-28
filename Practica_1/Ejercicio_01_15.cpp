// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 28/08/2025
// Número de ejercicio: 15

#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4;
    float suma;
    float resultado;

    cout << "Ingrese la primera nota: "<<endl;
    cin >> nota1;
    cout << "Ingrese la segunda nota: "<<endl;
    cin >> nota2;
    cout << "Ingrese la tercera nota: "<<endl;
    cin >> nota3;
    cout << "Ingrese la cuarta nota: "<<endl;
    cin >> nota4;
    suma = nota1 + nota2 + nota3 + nota4;
    resultado = suma / 4;
    cout << "El promedio de las notas es: " << resultado <<endl;

    return 0;
}