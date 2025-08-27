// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 11

#include <iostream>

using namespace std;


int main()
{
    int mes;
    cout<<"Introduce el numero de un mes: "<<endl;
    cin>>mes;
    if (mes<0)
    {
        cout<<"Debe ser mayor a 0";
    }
    else if (mes>0)
    {
        if(mes==1)
        {
            cout<<"enero"<<endl;
        }
        else if(mes==2)
        {
            cout<<"febrero"<<endl;
        }
        else if(mes==3)
        {
            cout<<"marzo"<<endl;
        }
         else if(mes==4)
        {
            cout<<"abril"<<endl;
        }
         else if(mes==5)
        {
            cout<<"mayo"<<endl;
        }
         else if(mes==6)
        {
            cout<<"junio"<<endl;
        }
         else if(mes==7)
        {
            cout<<"julio"<<endl;
        }
         else if(mes==8)
        {
            cout<<"agosto"<<endl;
        }
         else if(mes==9)
        {
            cout<<"septiembre"<<endl;
        }
         else if(mes==10)
        {
            cout<<"octubre"<<endl;
        }
         else if(mes==11)
        {
            cout<<"noviembre"<<endl;
        }
         else if(mes==12)
        {
            cout<<"diciembre"<<endl;
        }
    }
    
    return 0;
}
