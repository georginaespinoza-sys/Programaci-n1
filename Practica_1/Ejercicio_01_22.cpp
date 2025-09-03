// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 22

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: "<<endl;
    cin >> num1;

    cout << "Ingresa el segundo numero: "<<endl;
    cin >> num2;

    if (num1 == 0 || num2 == 0)// cualquiera de los dos es valido
    {
        cout << "No puede ser multiplo de cero." << endl;
    } else 
        {
            if (num1 % num2 == 0) //el residuo debe dar 0
            {
            cout << num1 << " es multiplo de " << num2 << endl;
            } 
            else if (num2 % num1 == 0) 
            {
            cout << num2 << " es multiplo de " << num1 << endl;
            } else
            {
            cout << "Ninguno es multiplo del otro" << endl;
            }
        }

    return 0;
}