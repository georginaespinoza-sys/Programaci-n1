// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 04/10/2025
// Número de ejercicio: 3 Video
// Problema planteado: Copiar el contenido de una cadena a otra- Funcion strcpy()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char nombre[] = "Georgina";
    char nombre2[20];

    strcpy(nombre2, nombre);//(cadena de caracteres vacia, cadena de caracteres con contenido)

    cout<<nombre2<<endl;//nombre se va a la cadena nombre2



    //EJERCICIO DEL FINAL DEL VIDEO
    //Pedir al usuario una cadena de caracteres almacenarla en un arreglo y copiar todo
    //su contenido hacia otro arreglo de caracteres

    
    char nombre3[50];
    char nombre4[50];

    cout<<"Ingrese una cadena de caracteres: \n";
    cin.getline(nombre3, 50);

    cout<<"La cadena es: ";
    cout<<nombre3<<endl;
    strcpy(nombre4,nombre3);//cadena 3 a cadena 4
    cout<<"La nueva cadena: ";
    cout<<nombre4<<endl;


    getch();
    return 0;
}