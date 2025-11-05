/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 01/11/2025
Número de ejercicio: 4
Problema planteado: Personal de la UCB 
Descripción: Se tiene una lista de empleados de la UCB y esta se almacena en 
una variable tipo struct llamada “empleado”. La información con la que se cuenta 
es: 
• nombre (cadena de caracteres) 
• genero (cadena de caracteres) 
• salario (decimal) 

Realizar un programa en C++ que lea un array de estructuras los datos de los N 
trabajadores de la empresa e imprima los datos de los empleados con menor y 
mayor salario. 
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Empleado{
    char nombre[30];
    char genero[30];
    double salario;
};

void llenarDatos(Empleado emple[], int &n){

    cout<<"Digite el numero de empleados de la UCB: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout<<"Digite el nombre de la persona "<<i+1<<" : ";
        cin.getline(emple[i].nombre,30);
        cout<<"Digite de genero de la persona "<<i+1<<" : ";
        cin.getline(emple[i].genero,30);
        cout<<"Digite su salario de la persona "<<i+1<<" : ";
        cin>>emple[i].salario;
        
    }
}

//Mostrar los datos con ciclo
void mostrarDatos(Empleado emple[], int n){
    double mayorSueldo=emple[0].salario;
    double menorSueldo=emple[0].salario;
    int mayorPosicion=0, menorPosicion=0;

    for (int i = 1; i < n; i++)
    {
        if (emple[i].salario>mayorSueldo)
        {
            mayorSueldo = emple[i].salario;
            mayorPosicion = i;
        }
        if (emple[i].salario < menorSueldo)
        {
            menorSueldo = emple[i].salario;
            menorPosicion = i;
        }
    }

    cout<<"\nEmpleado con mayor salario\n";
    cout<<"Nombre: "<<emple[mayorPosicion].nombre<<endl;
    cout<<"Genero: "<<emple[mayorPosicion].genero<<endl;
    cout<<"Salario: "<<emple[mayorPosicion].salario<<endl;

    cout<<"\n\nEmpleado con menor salario\n";
    cout<<"Nombre: "<<emple[menorPosicion].nombre<<endl;
    cout<<"Genero: "<<emple[menorPosicion].genero<<endl;
    cout<<"Salario: "<<emple[menorPosicion].salario<<endl;
}

int main()
{
    Empleado empleados[100];
    int n;
    llenarDatos(empleados,n);
    mostrarDatos(empleados,n);

    getch();
    return 0;
}