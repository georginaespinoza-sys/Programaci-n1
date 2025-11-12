/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 08/11/2025
Número de ejercicio: 3 video (de video 1)
Problema planteado: Escribir en un archivo de texto
Realice un programa que permita al usuario tantas frases
como el usuario desee
*/

#include <iostream>
//Libreria para ficheros o archivos
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void Escribir(){
    ofstream archivo;
    string nombreArchivo,texto;
    int numTexto;
    
    cout<<"Ingresa el nombre de tu archivo: ";
    getline(cin, nombreArchivo);
     
    archivo.open(nombreArchivo.c_str(),ios::out);

    if (archivo.fail())
    {
        cout<<"El archivo no se pudo crear";
        exit(1);
    }

    cout<<"Ingresa el  numero de textos que quieras escribir: ";
    cin>>numTexto;
    cin.ignore();
    for (int i = 0; i < numTexto; i++)
    {
        cout<<"Texto "<<i+1<<" : ";
        getline(cin,texto);
        archivo<<texto<<endl;
    }
    
    archivo.close();
}

int main(){
    Escribir();

    system("pause");
    return 0;
}