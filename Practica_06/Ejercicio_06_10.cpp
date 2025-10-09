/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/10/2025
Número de ejercicio: 10
Problema planteado: Escribe un programa que elimine todos los dígitos de una cadena. 
// Entrada: "abc123def456"  
// Salida: "abcdef" */

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

string EliminarDigitos()
{
    string cadena;
    string resultado = "";
    cout<<"Ingrese una cadena: ";
    cin>>cadena;
    for(int i=0 ; i<cadena.size() ; i++){
        //limites
        if (cadena[i] < '0' || cadena[i] > '9') {
            resultado+= cadena[i];
        }
    }
    return resultado;
}

int main()
{
    string SinDigitos = EliminarDigitos();
    cout<<"Cadena sin digitos: "<<SinDigitos<<endl;
    
    return 0;
}