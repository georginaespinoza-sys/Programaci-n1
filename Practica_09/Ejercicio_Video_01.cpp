/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 31/10/2025
Número de ejercicio: Video 1
Problema planteado: Estructura Basica
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
//Nombrar
persona1 = {"Alejandra",20},
persona2 = {"Ana", 20},
persona3, persona4;

int main()
{
    cout<<"\nDatos parte 1\n";
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;
    cout<<"Nombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;

    cout<<endl;

    cout<<"Nombre de la persona 1: ";
    cin.getline(persona3.nombre,20);
    cout<<"Edad: ";
    cin>>persona3.edad;
    cin.ignore();
    cout<<"Nombre de la persona 2: ";
    cin.getline(persona4.nombre,20);
    cout<<"Edad de la persona 2: ";
    cin>>persona4.edad;

    cout<<"\nDatos parte 2\n";
    cout<<"Nombre3: "<<persona3.nombre<<endl;
    cout<<"Edad 3: "<<persona3.edad<<endl;
    cout<<"Nombre4: "<<persona4.nombre<<endl;
    cout<<"Edad 4: "<<persona4.edad<<endl;

    getch();
    return 0;
}