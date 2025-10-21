/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 18/10/2025
Número de ejercicio: 1 
Problema planteado: Escribe una función recursiva que reciba un número entero positivo y 
devuelva la suma de sus dígitos. Por ejemplo: para el número 1234, el 
resultado debería ser 10 (1 + 2 + 3 + 4). 
*/

#include <iostream>
using namespace std;

int suma (int n){
    if(n == 0) {
        return 0;
    } else {
        //caaso general: % el bajo numero divide a 10 acercandose a la base
        return (n % 10) + suma(n / 10);
    }
}

int main()
{
    cout << suma(1234) << endl;

    return 0;
}