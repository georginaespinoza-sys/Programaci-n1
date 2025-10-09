// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 05/10/2025
// Número de ejercicio: 7 Video
// Problema planteado: Pasar una palabra a MAYUSCULA - Funcion strupr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[]="georgina";

    strupr(palabra);
    cout<<palabra<<endl;

    //EJERCICIO DEL FINAL DEL VIDEO
    //Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decir si son iguales o no.


    getch();
    return 0;
}