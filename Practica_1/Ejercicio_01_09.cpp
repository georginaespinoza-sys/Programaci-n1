// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 9


#include <iostream> 

using namespace std;

int main()
{
    int edad;
    cout<<"Su edad: "<<endl;
    cin>>edad;
    if(edad<=10)
    {
        cout<<"Es un ninio"<<endl;
    }
    else if(edad<=17)
    {
        cout<<"Es un adolecente";
    }
    else if(edad<=30)
    {
        cout<<"Es un joven";
    }
    else if(edad<50)
    {
        cout<<"Es un adulto";
    }
    else
    {
        cout<<"Es mayor de edad";
    }
    return 0;
}