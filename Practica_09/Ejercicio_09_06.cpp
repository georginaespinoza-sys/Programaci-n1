/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 03/11/2025
Número de ejercicio: 6
Problema planteado: Gestión de empleados con funciones 
Descripción: Define una estructura llamada Empleado que contenga los siguientes 
campos: 
• nombre (cadena de caracteres) 
• id (entero) 
• sueldo (decimal) 
• antiguedad (entero, en años) 

Escribe un programa que permita: 

• Ingresar los datos de N empleados. 
• Crear una función que reciba un arreglo de empleados y un valor de sueldo y 
    devuelva cuántos empleados tienen un sueldo mayor a ese valor. 
• Crear otra función que reciba el arreglo y calcule el promedio de antigüedad 
    de todos los empleados. 
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Empleado{
    char nombre[30];
    int id;
    double sueldo;
    int antiguedad;
};

void llenarDatos(Empleado emple[], int &n){
    cout<<"Digite el numero de empleados: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout<<"Digite su nombre: ";
        cin.getline(emple[i].nombre,30);
        cout<<"Digite su id: ";
        cin>>emple[i].id;
        cout<<"Digite su sueldo: ";
        cin>>emple[i].sueldo;
        cout<<"Digite su antiguedad: ";
        cin>>emple[i].antiguedad;
    }
}

void mostrarDatos(Empleado emple[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"-------------------------------------";
        cout<<"\nDatos\n";
        cout<<"Nombre "<<i+1<<" : "<<emple[i].nombre<<endl;
        cout<<"Id "<<i+1<<" : "<<emple[i].id<<endl;
        cout<<"Sueldo "<<i+1<<" : "<<emple[i].sueldo<<endl;
        cout<<"Antiguedad "<<i+1<<" : "<<emple[i].antiguedad<<endl;   
    }
}

// Contar empleados con sueldo mayor a un valor dado
int empleadosSueldoMayor(Empleado emple[], int n, double valor) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (emple[i].sueldo > valor) {
            contador++;
        }
    }
    return contador;
}

// Calcular el promedio de antiguedad
double promedioAntiguedad(Empleado emple[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += emple[i].antiguedad;
    }
    if (n == 0) {
        return 0;
    }
    return suma / n;
}

int main()
{
    int n;
    Empleado emple[100];
    llenarDatos(emple,n);
    mostrarDatos(emple,n);

    double valor;
    cout << "Digite el sueldo para comparar: ";
    cin >> valor;
    int cantidad = empleadosSueldoMayor(emple, n, valor);
    cout << "Cantidad de empleados con sueldo mayor a " << valor << ": " << cantidad << endl;

    double promedio = promedioAntiguedad(emple, n);
    cout << "Promedio de antiguedad de los empleados: " << promedio << " anios." << endl;

    return 0;
}