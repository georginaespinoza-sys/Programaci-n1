/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 04/11/2025
Número de ejercicio: 10
Problema planteado: Escribe una función llamada ReducirFraccion que reciba una estructura llamada 
Fraccion y devuelva una nueva estructura FraccionSimplificada, que represente la 
fracción simplificada. 
Para simplificar, necesitarás calcular el Máximo Común Divisor (MCD) del 
numerador y el denominador. Puedes implementar el algoritmo de Euclides, que 
ya lo hiciste en la práctica 7 ejercicio 4. 
Ejemplo:  4/8 → 1/2 
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Fraccion {
    int numerador;
    int denominador;
};

int MCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Recibe una fraccion y devuelve la fraccion simplificada
Fraccion ReducirFraccion(Fraccion f) {
    Fraccion fraccionSimplificada;
    int mcd = MCD(f.numerador, f.denominador);
    fraccionSimplificada.numerador = f.numerador / mcd;
    fraccionSimplificada.denominador = f.denominador / mcd;
    return fraccionSimplificada;
}

int main() {
    Fraccion f, fReducida;
    cout << "Ingrese numerador: ";
    cin >> f.numerador;
    cout << "Ingrese denominador: ";
    cin >> f.denominador;

    if(f.denominador == 0) {
        cout << "Denominador no puede ser cero." << endl;
        return 1;
    }

    fReducida = ReducirFraccion(f);
    cout << "Fraccion simplificada: " << fReducida.numerador << "/" << fReducida.denominador << endl;

    getch();
    return 0;
}