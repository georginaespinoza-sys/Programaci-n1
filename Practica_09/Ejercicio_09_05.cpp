/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 01/11/2025
Número de ejercicio: 5
Problema planteado: Sistema de gestión de películas 
Descripción: Define una estructura llamada Pelicula con los siguientes campos: 

• titulo (cadena de caracteres) 
• director (cadena de caracteres) 
• duracion (entero, en minutos) 
• anio_estreno (entero) 
• genero (cadena de caracteres) 

Escribe un programa que permita al usuario registrar N películas en un arreglo de 
estructuras y luego realice lo siguiente: 

• Mostrar todas las películas de un género específico introducido por el usuario. 
• Mostrar todas las películas dirigidas por un director específico introducido por el usuario. 
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Pelicula{
    char titulo[30];
    char director[30];
    int duracion;
    int anio_estreno;
    char genero[30];
};

void llenarDatos(Pelicula peli[], int &n){
    cout<<"Digite el numero de peliculas: ";
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout<<"Digite el titulo: ";
        cin.getline(peli[i].titulo,30);
        cout<<"Digite el director: ";
        cin.getline(peli[i].director,30);
        cout<<"Digite la duracion: ";
        cin>>peli[i].duracion;
        cout<<"Digite el anio de estreno: ";
        cin>>peli[i].anio_estreno;
        cin.ignore();
        cout<<"Digite el genero: ";
        cin.getline(peli[i].genero,30);
    }
}

void mostrarPorGenero(Pelicula peli[], int n, char generoBuscado[]) {
    cout << "Peliculas del genero " << generoBuscado << ":\n";
    for (int i = 0; i < n; i++) {
        //Intercambio de cadenas
        if (strcmp(peli[i].genero, generoBuscado) == 0) {
            cout << "Titulo: " << peli[i].titulo << ", Director: " << peli[i].director 
                 << ", Duracion: " << peli[i].duracion << " min, Anio: " << peli[i].anio_estreno << "\n";
        }
    }
}

void mostrarPorDirector(Pelicula peli[], int n, char directorBuscado[]) {
    cout << "Peliculas dirigidas por " << directorBuscado << ":\n";
    for (int i = 0; i < n; i++) {
        if (strcmp(peli[i].director, directorBuscado) == 0) {
            cout << "Titulo: " << peli[i].titulo << ", Genero: " << peli[i].genero
                 << ", Duracion: " << peli[i].duracion << " min, Anio: " << peli[i].anio_estreno << "\n";
        }
    }
}

int main() {
    int n = 0;
    Pelicula peliculas[100]; 

    llenarDatos(peliculas, n);

    char generoBuscar[30];
    cout << "Ingrese el genero a buscar: ";
    cin.getline(generoBuscar, 30);
    mostrarPorGenero(peliculas, n, generoBuscar);

    char directorBuscar[30];
    cout << "Ingrese el director a buscar: ";
    cin.getline(directorBuscar, 30);
    mostrarPorDirector(peliculas, n, directorBuscar);

    return 0;
}