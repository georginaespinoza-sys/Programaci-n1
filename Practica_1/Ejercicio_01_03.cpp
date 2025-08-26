// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 1


#include <iostream> 

using namespace std;

int primer_dato;
int segundo_dato;
int resultado; //area

int main()
{
    cout<< "Agrega el dato de la base: ";
    cin>>primer_dato;
    cout<< "Agrega el dato de altura: ";
    cin>>segundo_dato;
    resultado=(primer_dato*segundo_dato)/2;
    cout<< "El resultado del area es: " <<resultado<<endl;
    return 0;
}