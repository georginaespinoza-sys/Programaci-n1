// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 04/10/2025
// Número de ejercicio: 1 Video
// Problema planteado: Cadena de Caracteres

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[]="Georgina";
    char palabra2[]={'G','e','o','r','g','i','n','a','\0'};// el 0 para que termine
    char nombre[12];


    cout<<palabra<<endl;
    cout<<palabra2<<endl;

    cout<<"Introduzca su nombre: \n";
    //gets(nombre);//guarda bien las variables, no usar cin solo
    cin.getline(nombre,20,'\n');
    cout<<nombre<<endl;

    getch();
    return 0;
}