//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 08/09/2025
//Numero de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N;
    cout << "Ingrese una cantidad de numeros aleatorios: "<<endl;
    cin >> N;

    if (N <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." <<endl;
        return 1;
    }

    // Inicializar la semilla para los números aleatorios
    srand((time(NULL)));

    long long sumatoria = 0;
    int mayor = 0;
    int menor = 1001;
    int numero;

    cout <<"Numeros generados: "<<endl;
    for (int i = 0; i < N; ++i) {
        // Generar un número aleatorio entre 1 y 1000
        numero = rand() % 1000 + 1;
        cout << numero <<endl;

        // a. Sumatoria
        sumatoria = sumatoria + numero;

        // c. Mayor valor
        if (numero > mayor) {
            mayor = numero;
        }

        // d. Menor valor
        if (numero < menor) {
            menor = numero;
        }
    }
    cout <<endl;

    // b. Promedio
    double promedio = double(sumatoria) / N;

    cout << "Resultados:" <<endl;
    cout << "Sumatoria de los numeros: " << sumatoria <<endl;
    cout << "Promedio: " << promedio <<endl;
    cout << "Mayor valor: " << mayor <<endl;
    cout << "Menor valor: " << menor <<endl;

    return 0;
}