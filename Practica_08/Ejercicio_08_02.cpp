/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 19/10/2025
Número de ejercicio: 2
Problema planteado: Implementa una función recursiva para calcular la potencia de un número. 
La función debe recibir dos parámetros, la base a y el exponente n, y 
devolver el valor de a^n. Evita usar la función pow de la biblioteca 
estándar. Por ejemplo, potencia(2, 3) debería devolver 8. 
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

   cout<<"\nEl resultado es "<<potencia(base,exponente);

    return 0;
}

int potencia(int x,int y){
    int pot;
    //caso base
    if(y==1){
        pot = x;
    }
    else{//caso general: base elevadada al resultado que ira disminuyendo
        pot = x*potencia(x,y-1);
    }
    return pot;
}