/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 18/10/2025
Número de ejercicio: 2 Video
Problema planteado: Suma: Realice un funcion recursiva que sume los primeros n enteros positivos.
Nota: para plantear la funcion recursiva tenga en cuenta que la suma
puede expresarse mediante la siguiente recurrencia:

    suma(n) = 1             , si n=1
            n + suma(n - 1) , si n>1
*/

#include <iostream>

using namespace std;

int sumar(int);

int main()
{
    int nElementos;

    do
    {
        cout<<"Ingrese el numero de elementos ";
        cin>>nElementos;
    //Mientras el numero ingresado sea menor, repetir el bucle
    } while (nElementos <= 0);

    //Imprimir el resultado
    cout<<"\nLa suma es "<<sumar(nElementos)<<endl;
    

    return 0;
}

int sumar(int n){
    int suma = 0;

    if(n == 1){
        suma = 1;
    }
    else{
        suma = n + sumar(n - 1);
    }
    return suma;
}