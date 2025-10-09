// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 05/10/2025
// Número de ejercicio: 4 Video
// Problema planteado: Comparar cadenas - Funcion strcmp()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra1[]="Hola";
    char palabra2[]="Hola";

    if(strcmp(palabra1,palabra2)==0){//==0 si son iguales o ==1,!=0 son diferentes
        cout<<"Son iguales las cadenas\n";
    }


    char palabra3[]="ola";
    char palabra4[]="Hola";

    if(strcmp(palabra3,palabra4)!=0){//==1,!=0 son diferentes
        cout<<"Son diferentes las cadenas\n";
    }


    char palabra5[]="astronauta";
    char palabra6[]="aviador";

    if(strcmp(palabra5,palabra6) < 0){//en orden alfabeticamente
        cout<<palabra6<<" esta despues alfabeticamente\n";
    }

    cout<<endl;


    //EJERCICIO DEL FINAL DEL VIDEO
    //Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas
    //son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente

    char cadena1[50];
    char cadena2[50];

    cout<<"Ingrese dos cadenas: \n";
    cout<<"Ingrese su primera cadena: \n";
    cin.getline(cadena1, 50);
    cout<<"Ingrese su segunda cadena: \n";
    cin.getline(cadena2, 50);

    if(strcmp(cadena1, cadena2)==0){
        cout<<"Las cadenas son iguales\n";
    }else if(strcmp(cadena1, cadena2) < 0){
        cout<<cadena2<<" esta despues alfabeticamente";
    }


    getch();
    return 0;
}