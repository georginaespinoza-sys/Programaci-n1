// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 27/08/2025
// Número de ejercicio: 13

#include <iostream>
using namespace std;

int main()
{
    int numero=0;
    int resultado=0;
    cout<<"Numero: "<<endl;
    cin>>numero;
    if(numero<0)
    {
        cout<<"No negativos"<<endl;
    }
    else
        {
          for (int valor=1;valor<=numero;++valor)//(iniciar la variable;condicion que verifica si es verdadero;se ejecuta la suma aumentanmdo)
        {
        resultado+=valor;
        }
        cout<<"Resultado: " <<resultado<<endl;
    }

    return 0;
}