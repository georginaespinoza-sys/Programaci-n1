// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 05/10/2025
// Número de ejercicio: 8 Video
// Problema planteado: Pasar una palabra a minusculas - Funcion strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[]="GEORGINA";

    strlwr(palabra);
    cout<<palabra<<endl;


    //EJERCICIO DEL FINAL DEL VIDEO
    //Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A,
    //convertir su nombre a minusculas, caso contrario no convertirlo

    char nom[50]=" ";
    cout<<"Ingrese su nombre en MAYUSCULAS para la conversion\n";
    cin.getline(nom, 50);
    if(nom[0]=='A'){
        strlwr(nom);
        cout<<nom<<endl;
    }else{
        cout<<"No inicia con A\n";
    }

    getch();
    return 0;
}