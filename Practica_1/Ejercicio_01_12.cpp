// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 12

#include <iostream>
using namespace std;

int main()
{
    int valor;
    while(valor<1||valor>5)
    {
        cout<<"Valor entre 1 y 5: "<<endl;
        cin>>valor;
    }
    cout<<"El valor es: "<<valor<<endl;
    return 0;
}