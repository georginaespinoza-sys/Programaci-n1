// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 25/08/2025
// Número de ejercicio: 5


#include <iostream> 

using namespace std;

float grados_kelvin;
float grados_centigrados;// a grados kelvin

int main()
{
   cout<<"Dato de grados centigrados: ";
   cin>>grados_centigrados;
   grados_kelvin=grados_centigrados+273.15;//por formula
   cout<<"La conversion es: " <<grados_kelvin;
    return 0;
}