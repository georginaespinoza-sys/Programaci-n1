// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 19

#include <iostream>
using namespace std;

int main() {
     int numero;
     cout << "Ingresa un numero para una tabla de multiplicar: "<<endl;
     cin >> numero;

     cout << "Tabla de multiplicar del " << numero <<endl;
     for (int i = 1; i <= 10; ++i) //mientras i sea menor a 10 seguira iterando
     {
     cout << numero << " x " << i << " = " << numero * i <<endl;
     }


 return 0;
}