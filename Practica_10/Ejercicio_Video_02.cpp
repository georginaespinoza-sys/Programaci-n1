/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 08/11/2025
Número de ejercicio: 2 video (de video 1)
Problema planteado: Escribir en un archivo de texto
*/

#include <iostream>
//Libreria para ficheros o archivos
#include <fstream>
#include <stdlib.h>
using namespace std;

void Escribir(){
    ofstream archivo;
    //Variables para pedir al usuario
    string nombreArchivo,frase;

    cout<<"Digite el nombre del archivo: ";
    //Para guardar, es de tipo string
    getline(cin,nombreArchivo);

    //Abrir el archivo creado
    archivo.open(nombreArchivo.c_str(),ios::out);
    
    if (archivo.fail())
    {
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    cout<<"\nDigite el texto del archivo: ";
    getline(cin,frase);

    archivo<<frase;

    archivo.close();
}

int main(){
    Escribir();

    system("pause");
    return 0;
}