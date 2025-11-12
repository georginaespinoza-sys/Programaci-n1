/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 08/11/2025
Número de ejercicio: 1 
Problema planteado: Escritura y lectura básica de archivos 
Descripción: Escribe un programa que pida al usuario ingresar una lista de 
nombres y guarde cada nombre en un archivo de texto llamado 
nombres.txt. Después, el programa debe leer el archivo y mostrar todos los 
nombres en la consola. 
*/

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

void EscribirLeer(){
    ofstream archivo("nombres.txt");
    string nombre;

    int n;
    cout<<"Ingrese el numeros de nombre: ";
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el nombre "<<i+1<<": ";
        getline(cin,nombre);
        archivo<<nombre<<endl;
        
    }
    archivo.close();

    ifstream archiv("nombres.txt");
    
    cout<<"\nLos nombres ingresados son\n";
    //Lee las lineas del archivo hasta el final
    while (getline(archiv, nombre)) {
        cout << nombre << endl;
    }
    
    archivo.close();
}

int main()
{
    EscribirLeer();
    return 0;
}