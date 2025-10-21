/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 19/10/2025
Número de ejercicio: 3 Video
Problema planteado: Elevacion de un numero con recursividad: Escriba una funcion
recursiva que calcule un numero elevado a una potencia entera mayor
o igual que cero: x^y

    potencia(x,y) = x                   , y=1
                    x* potencia(x,y-1) , y>1
*/

#include <iostream>

using namespace std;

int potencia(int,int);

int main()
{
   int base, exponente;

   cout<<"Ingrese la base: ";
   cin>>base;
   cout<<"Ingrese el exponente: ";
   cin>>exponente;

   cout<<"\nPotencia de "<<base<<" elevado a "<<exponente<< " es: "<<potencia(base,exponente);

    return 0;
}

int potencia(int x,int y){
    int pot;
    //caso base
    if(y==1){
        pot = x;
    }
    else{//caso general
        pot = x*potencia(x,y-1);
    }
    return pot;
}