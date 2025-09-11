//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 11/09/2025
//Numero de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    int n;
    cout << "Ingresa la cantidad de alumnos: ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad de alumnos debe ser un numero positivo." << endl;
        return 1;
    }

    int edades=n;
    int alturas=n;
    int sumaEdades = 0;
    int sumaAlturas = 0;
    int mayoresDe18 = 0;
    int masDe175cm = 0;

    for (int i = 0; i < n; ++i) {
        edades = 1 + rand() % 35;//1 mas el numero aleatorio de modulo de 35
        alturas = 120 + rand() % 81;

        sumaEdades += edades;
        sumaAlturas += alturas;

        if (edades > 18) {
            mayoresDe18++;
        }
        if (alturas> 175) {
            masDe175cm++;
        }
    }
    
    float mediaEdad = float(sumaEdades) / n;//operaciones
    float mediaAltura = float(sumaAlturas) / n;

    cout << "Edad media: " << mediaEdad << " anios." << endl;
    cout << "Altura media: " << mediaAltura << " cm." << endl;
    cout << "Cantidad de alumnos mayores de 18 anios: " << mayoresDe18 << endl;
    cout << "Cantidad de alumnos que miden mas de 1.75 cm: " << masDe175cm << endl;

    return 0;
}