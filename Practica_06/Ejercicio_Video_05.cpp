// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 05/10/2025
// Número de ejercicio: 5 Video
// Problema planteado: Aniadir o concatenar una cadena con otra - Funcion strcat()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char cad1[] = "Cadena";
    char cad2[] = " mostrada";
    char cad3[50]=" ";

    strcat(cad3, cad1);//cad 1 en cad 3
    strcat(cad3, cad2);//cad 2 y cad2 en cad 3

    cout<<cad3<<endl;
    



    //EJERCICIO DEL FINAL DEL VIDEO
    //Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena
    //para preguntarle al ususario su nombre, por ultimo aniadir el nombre al final de la 
    //de la primera cadena y mostrar el mensaje completo "Hola que tal (NombreDelUsuario)".

    char cadena1[]= "Hola que tal ";
    char cadena2[50];

    cout<<"Ingrese su nombre: \n";
    cin.getline(cadena2, 50);

    strcat(cadena1, cadena2);
    cout<<cadena1<<endl;


    getch();
    return 0;
}