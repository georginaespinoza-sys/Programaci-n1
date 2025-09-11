//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 11/09/2025
//Numero de ejercicio: 2

#include <iostream>

using namespace std;

//Celsius a Fahrenheit
float conversion(float celsius) {
    return (1.8 * celsius) + 32.0;
}

//Resultado
void Resultado(float celsius, float fahrenheit) {
    cout <<"El resultado es " << fahrenheit << " grados Fahrenheit." << endl;
}

int main() {
    float celsius;

    cout << "Ingresa el dato de Celsius: "<<endl;
    cin >> celsius;

    float fahrenheit = conversion(celsius);
    Resultado(celsius, fahrenheit);

    return 0;
}