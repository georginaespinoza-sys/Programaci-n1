//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 11/09/2025
//Numero de ejercicio: 1

#include <iostream>
using namespace std;

void verificar(int numero) // Función si un número es par o impar
{
    if (numero % 2 == 0) {
        cout << numero << " es un numero par." << endl;
    } else {
        cout << numero << " es un numero impar." <<endl;
    }
}

int main() {
    int numeroIngresado;
    cout << "Ingresa un numero entero: "<<endl;
    cin >> numeroIngresado;

    verificar(numeroIngresado);// Llamar a la función

    return 0;
}