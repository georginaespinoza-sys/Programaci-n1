/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 18/10/2025
Número de ejercicio: 1 Video
Problema planteado: Factorial de un numero: Recursividad 
Factorial de un numero  3! = 3*2!
0! = 1 
factorial (n) = 1                , si n=0
                n*factorial(n-1) , si n>0
*/

#include <iostream>

using namespace std;

int factorial (int);

int main()
{
    cout<<"El factorial es "<<factorial(5)<<endl;

    return 0;
}

int factorial (int n){
    //Caso base
    if(n == 0){
        n = 1;
    }
    //Caso general
    else{
        n = n * factorial(n - 1);
    }
    return n;
}