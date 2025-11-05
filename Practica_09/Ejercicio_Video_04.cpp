/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 31/10/2025
Número de ejercicio: Video 5
Problema planteado: Empleado con mayor y menor salario
Realizar un programa que lea un arreglo de estructuras los datos de N
empleados de la empresa y que imprima los datos del empleado con mayor y
menor salario
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Empleado{
    char nombre[30];
    float salario;
}emp[100];

int main(){
    int nEmpleado;
    float mayor=0,menor=99999;
    int posicionMayor=0, posicionMenor=0;
    cout<<"Digite el numero de empleados: ";
    cin>>nEmpleado;

    for (int i = 0; i < nEmpleado; i++)
    {
        cin.ignore();
        cout<<i+1<<"Digite su nombre: ";
        cin.getline(emp[i].nombre,20);
        cout<<i+1<<"Digite su salario: ";
        cin>>emp[i].salario;
        
        cout<<endl;

        //Empleado de mayor salario
        if (emp[i].salario > mayor)
        {
            mayor = emp[i].salario;
            posicionMayor = i;
        }
        //Empleado de menor salario
        if (emp[i].salario < menor)
        {
            menor = emp[i].salario;
            posicionMenor = i;
        }
        
        cout<<endl;
    }

    cout<<"\nDatos del empleado con mayor salario\n";
    cout<<"Nombre: "<<emp[posicionMayor].nombre<<endl;
    cout<<"Salario: "<<emp[posicionMayor].salario<<endl;

    cout<<"\nDatos de empleado con menor salario\n";
    cout<<"Nombre: "<<emp[posicionMenor].nombre<<endl;
    cout<<"Salario: "<<emp[posicionMenor].salario<<endl;

    getch();
    return 0;
}
