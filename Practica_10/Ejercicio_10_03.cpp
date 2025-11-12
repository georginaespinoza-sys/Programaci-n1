/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/11/2025
Número de ejercicio: 3
Problema planteado: Almacenamiento de registros de estudiantes 
Descripción: Escribe un programa que permita registrar la información de 
varios estudiantes en un archivo de texto llamado estudiantes.txt. Cada 
estudiante debe tener un nombre, una edad y un promedio de 
calificaciones. Luego, el programa debe poder leer el archivo y mostrar toda 
la información de los estudiantes en un formato organizado. 
Formato del archivo: 
            Nombre: Juan
            Edad: 20
            Promedio: 8.5

            Nombre: Ana
            Edad: 22
            Promedio: 9.1
*/

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

void EscribirEstudiantes(){
    ofstream archivo("estudiantes.txt");

    string nombre;
    int edad;
    double promedio;

    int n;
    cout<<"Digite el numero de estudiantes: ";
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;
        
        archivo << "Nombre: " << nombre << endl;
        archivo << "Edad: " << edad << endl;
        archivo << "Promedio: " << promedio << endl;
        archivo << endl;
    }
    archivo.close();
}

int main()
{
    EscribirEstudiantes();
    return 0;
}