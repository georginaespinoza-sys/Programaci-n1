// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 8


#include <iostream> 

using namespace std;

int main()
{
    int numero;
    cout<<"Ingresa un numero: "<<endl;
    cin>>numero;
    if(numero%2==0)//% analiza el residuo de una division 
    {
        cout<<"Es par";
        cin>>numero;
    }
    else
    {
        cout<<"Es impar";
    }
    return 0;
}