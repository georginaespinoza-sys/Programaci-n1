/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 01/11/2025
Número de ejercicio: 1
Problema planteado: Registro de una biblioteca 
Descripción: Define una estructura llamada Libro con los siguientes campos: 

• titulo (cadena de caracteres) 
• autor (cadena de caracteres) 
• anio_publicacion (entero) 
• disponible (booleano, que indica si el libro está disponible o no) 

Escribe un programa que permita al usuario registrar los datos de 1 libros, y luego 
muestre los datos del libro, indicando si está o no disponible. 
*/

#include <iostream>
using namespace std;

struct Libro{
char titulo[20];
char autor[20];
int anio_publicacion;
bool disponible;
}N;

//Llenar datos
void leerDatos(Libro &N){
    int dispo;

    cout<<"Ingrese el nombre del libro: ";
    cin.getline(N.titulo,20);
    cout<<"Ingrese el autor: ";
    cin.getline(N.autor,20);
    cout<<"Ingrese el anio: ";
    cin>>N.anio_publicacion;
    cin.ignore();
    cout<<"El libro esta disponible? (1=si, 0=no): ";
    cin>>dispo;
    N.disponible = dispo;
}

void mostrarDatos(Libro &N)
{
    cout<<"\nDatos\n";
    cout<<"Titulo: "<<N.titulo<<endl;
    cout<<"Autor: "<<N.autor<<endl;
    cout<<"Anio: "<<N.anio_publicacion<<endl;
    
    //Condiciones
    if (N.disponible)
    {
        cout<<"Disponible"<<endl;
    }
    else{
        cout<<"No disponible"<<endl;
    }
}

int main()
{
    leerDatos(N);
    mostrarDatos(N);

    return 0;
}