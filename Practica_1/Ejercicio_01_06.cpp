// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 6


#include <iostream> 

using namespace std;

int main()
{
    int dato;
    cout<<"Dato: ";
    cin>>dato;

    if(dato>0)
    {
        cout<<"Dato positivo"<<endl;}
    else if (dato<0)// condicion de si if no es verdadero salta a else if, y si no es ninguno es else
    {
        cout<<"Dato negativo"<<endl;
    }
    else
    {
        cout<<"El dato es 0";
    }

    return 0;
}