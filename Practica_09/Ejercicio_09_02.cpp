/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 01/11/2025
Número de ejercicio: 2
Problema planteado: Crea una estructura llamada Atleta que contenga los siguientes campos:

• nombre (cadena de caracteres) 
• pais (cadena de caracteres) 
• edad (entero) 
• mejor_tiempo (entero, en segundos) 

Escribe un programa que permita al usuario ingresar los datos de N atletas y, al final, 
muestre el nombre y país del atleta con el mejor tiempo registrado. 
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Atleta{
    char nombre[20];
    char pais[20];
    int edad;
    int mejor_tiempo;
};

//Llenar datos
void llenarDatos(Atleta atletas[], int &n){
    cout<<"Digite el numero de atletas: "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin.ignore();
        cout<<"Digite su nombre: ";
        cin.getline(atletas[i].nombre,20);
        cout<<"Digite su pais: ";
        cin.getline(atletas[i].pais,20);
        cout<<"Digite su edad: ";
        cin>>atletas[i].edad;
        cout<<"Digite su mejor tiempo: ";
        cin>>atletas[i].mejor_tiempo;
        
    }
}

void mostrarDatos(Atleta atletas[], int n){
    cout<<"\nImprimiendo Datos\n";
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        
        cout<<"Nombre: "<<atletas[i].nombre<<endl;
        cout<<"Pais: "<<atletas[i].pais<<endl;
        cout<<"Edad: "<<atletas[i].edad<<endl;
        cout<<"Tiempo: "<<atletas[i].mejor_tiempo<<endl;
    }
}

//Condicion del mejor tiempo
void mejorTiempo(Atleta atletas[], int n){
    int mejor=0;
    for (int i = 0; i < n; i++)
    {
        if (atletas[i].mejor_tiempo < atletas[mejor].mejor_tiempo)
        {
            mejor=1;
        }
        
    }
    cout<<"\nAtleta con mejor tiempo\n";
    cout<<"Nombre: "<<atletas[mejor].nombre<<endl;
    cout<<"Pais: "<<atletas[mejor].pais<<endl;
    cout<<"Tiempo: "<<atletas[mejor].mejor_tiempo<<endl;
}

int main()
{
    Atleta atletas[50];
    int nAtletas;

    llenarDatos(atletas, nAtletas);
    mostrarDatos(atletas, nAtletas);
    mejorTiempo(atletas, nAtletas);

    getch();
    return 0;
}