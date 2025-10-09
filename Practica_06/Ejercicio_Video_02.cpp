// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 04/10/2025
// Número de ejercicio: 2 Video
// Problema planteado: Longitud de una Cadena - Funcion strlen()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[] = "Georgina Mishel Espinoza Mamani";
    int longitud = 0;

    longitud = strlen(palabra);//la funcion te devuelve enteros
    cout<<"Numero de elementos: "<<longitud<<endl;



    //EJERCICIO DEL FINAL DEL VIDEO
    //Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la
    //la longitud de la cadena, y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla

    char cadena[30];

    cout<<"Ingrese una cadena mayor a 10 caracteres\n";
    cin.getline(cadena,30);
    int longitud1=strlen(cadena);//llamar despues de la cadena
    

    if(longitud1>10){
        cout<<"La cadena es: "<<cadena<<endl;
    }else{
        cout<<"No es mayor a 10 caracteres";
    }


    getch();
    return 0;
}