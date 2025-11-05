/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 31/10/2025
Número de ejercicio: Video 3
Problema planteado: Categoria de un corredor
Hacer una estructura llamada corredor, en la cual se tendran los siguientes
campos: NOMBRE, EDAD, SEXO, CLUB, PEDIR DATOS AL USUARIO para un corredor,
y asi mismo una categoria de competicion:

- Juvenil <= 18 anios
- Senior <= 40 anios
- Veterano > 40 anios

Posteriormente imprimir todos los datos del corredor, incluida su
categoria de competicion
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Corredor{
    char nombre[30];
    int edad;
    char sexo[30];
    char club[30];
}c1;

int main()
{
    char categoria[30];

    cout<<"Nombre: ";
    cin.getline(c1.nombre,30);
    cout<<"Edad: ";
    cin>>c1.edad;
    cin.ignore();
    cout<<"Sexo: ";
    cin.getline(c1.sexo,30);
    cout<<"Club: ";
    cin.getline(c1.club,30);

    if(c1.edad <=18)
    {
        strcpy(categoria,"Juvenil");//Copear Cadena
    }
    else if (c1.edad <=40)
    {
        strcpy(categoria,"Senior");
    }
    else 
    {
        strcpy(categoria,"Veterano");
    }
    
    cout<<"\nDatos del Corredor\n\n";
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    

    getch();
    return 0;
}