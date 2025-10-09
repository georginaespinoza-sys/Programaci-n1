/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 07/10/2025
Número de ejercicio: 4
Problema planteado: Crea un programa que permita al usuario ingresar N números en un vector y luego rota 
el vector k posiciones a la derecha. Muestra el vector después de la rotación.  */

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector <int> LlenarVector()
{
    int N;
    int valor;
    vector <int> numeros;
    cout<<"Ingrese N numero: ";
    cin>>N;
    // Llenar el vector numeros
    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un valor: ";
        cin >> valor;
        // Cargar el valor a mi vector
        numeros.push_back(valor);
    }
    return numeros;
}

void MostrarVector(vector<int> vector)
{
    for(int i=0 ; i < vector.size() ; i++){
        cout<<vector[i]<<"\t";
    }
}

vector<int> Rotar(vector<int> numeros)
{
    int k=0;
    vector<int> copia(numeros.size(), 0);
    cout<<"\nIngrese el valor de numero de veces que quiere rotar: ";
    cin>>k;
    for(int i=0 ; i<numeros.size() ; i++)
    {
        copia[k] = numeros[i];
        k++;
        if (k==numeros.size())
        {
            k=0;
        }
    }
    return copia;
}

int main()
{
    vector<int> numeros;
    numeros = LlenarVector();
    MostrarVector(numeros);
    numeros = Rotar(numeros);
    MostrarVector(numeros);
    return 0;
}