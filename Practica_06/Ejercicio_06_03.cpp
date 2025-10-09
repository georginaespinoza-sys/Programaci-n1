/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 07/10/2025
Número de ejercicio: 3
Problema planteado: Se tiene 3 vectores de 10 elementos cada uno: 
• Vector de nombres. 
• Vector Apellidos 
• Vector de Edad 
Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla. 
Esto debe realizar N veces.*/

#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

void MostrarDatos(vector<string>& nombres, vector<string>& apellidos, vector<int>& edades){
    
    int nombre = rand()%nombres.size();
    int apellido = rand()%apellidos.size();
    int edad = rand()%edades.size();

    cout<<"Nombre, Apellido y Edad"<<endl;

    cout<<nombres[nombre]<<", "<<apellidos[apellido]<<", "<<edades[edad]<<endl;
}

int main()
{
    srand(time(NULL));
    int N;

    vector<string>nombres = {"Roberto", "Ana", "Alberto", "Diego","Margaret"};
    vector<string>apellidos = {"Valdez","Bolivar" "Cordova", "Gonzales","Boscozo"};
    vector<int>edades = {14, 45, 30, 25, 39};

    cout<<"Ingresa un numero N\n";
    cin>>N;
    for(int i=0 ; i<N ; i++){
        MostrarDatos(nombres, apellidos, edades);
    }

    return 0;
}