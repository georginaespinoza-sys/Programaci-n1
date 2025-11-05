/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 31/10/2025
Número de ejercicio: Video 6
Problema planteado: Estructuras anidadas promedio de un alumno
Hacer 2 estructuras una llamada promedio que tendra los siguientes campos:
-nota1
-nota2
-nota3
y otra estructura llamado alumno que tendra los siguientes miembros:
-nombre
-sexo
-edad
hacer que la estructura promedio este anidada en la estructura alumno,
luego pedir todos los datos para un alumno, luego calcular su promedio
, y por ultimo imprimir todos sus datos incluidos el promedio
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Promedio{
    double nota1;
    double nota2;
    double nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[20];
    int edad;
    //Funcion anidada
    struct Promedio prom;
}alumno1;

int main()
{
    double promedio_alumno;

    cout<<"Digite su nombre: ";
    cin.getline(alumno1.nombre,20);
    cout<<"Digite su sexo: ";
    cin.getline(alumno1.sexo,20);
    cout<<"Digite su edad: ";
    cin>>alumno1.edad;

    cout<<"\nNotas de alumno\n";
    cout<<"Nota 1: ";
    cin>>alumno1.prom.nota1;
    cout<<"Nota 2: ";
    cin>>alumno1.prom.nota2;
    cout<<"Nota 3: ";
    cin>>alumno1.prom.nota3;

    promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3)/3;

    cout<<"\nDatos del alumno\n";
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<promedio_alumno<<endl;


    getch();
    return 0;
}