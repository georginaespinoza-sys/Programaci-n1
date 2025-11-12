/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 08/11/2025
Número de ejercicio: 1 video
Problema planteado: Escribir en un archivo de texto
*/

#include <iostream>
//Libreria para ficheros o archivos
#include <fstream>
#include <stdlib.h>
using namespace std;

void Escribir(){
    //o de ouput
    ofstream archivo;
    //Abriendo el archivo
    archivo.open("FicheroVideo1.txt",ios::out);
    if (archivo.fail())
    {
        cout<<"No se pudo abrir el archivo";
    }
    archivo<<"Aprendiendo"<<endl;
    archivo<<"Ingenieria Mecatronica";
    //Cerrar el archivo
    archivo.close();
}

int main(){
    Escribir();

    system("pause");
    return 0;
}