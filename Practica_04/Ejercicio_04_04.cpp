// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 16/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

float ConvertirCelsiusAFahrenheit(float celsius) {
    float fahrenheit=(celsius*1.8)+32;
    return fahrenheit;
}

float MayorTemperatura(float temperatura1, float temperatura2){
    
    if(temperatura1>temperatura2){
        return temperatura1;
    }
    else{
        return temperatura2;
    } 
}

int main()
{
    float temperatura_celsius;
    float temperatura1, temperatura2;

    cout << "Introduce la temperatura en Celsius: ";
    cin >> temperatura_celsius;

    float temperatura_fahrenheit = ConvertirCelsiusAFahrenheit(temperatura_celsius);//funcion "ConvertirCelsiusAFahrenheit" con el valor de entrada
    cout << "La conversion es: " << temperatura_fahrenheit << "Fahrenheit" << endl;

    cout << "Introduce la primera temperatura: ";
    cin >> temperatura1;
    cout << "Introduce la segunda temperatura: ";
    cin >> temperatura2;

    float mayor_temperatura = MayorTemperatura(temperatura1, temperatura2);//funcion "MayorTemperatura" con los dos valores
    cout << "La mayor temperatura es: " << mayor_temperatura << endl;

    return 0;
}