/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/10/2025
Número de ejercicio: 12
Problema planteado: Escribe una función que reciba un texto y retorne verdadero o falso (Boolean) según 
sean o no palíndromos. 
Un Palíndromo es una palabra o expresión que es igual si se lee de izquierda a derecha 
que de derecha a izquierda. NO se tienen en cuenta los espacios, signos de puntuación y 
tildes.  
Ejemplo: Ana lleva al oso la avellana.  */

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

bool RecibirTexto(){
    string palindromo;
    string verificar;
    
    cout<<"Ingrese una palabra palindroma: ";
    getline(cin, palindromo);
    for(int i=0 ; i<palindromo.size() ; i++){
        char pa = palindromo[i];
        if ((pa>= 'a' && pa <= 'z') || (pa >= 'A' && pa <= 'Z')){
            pa += ('a' - 'A');
        }
        verificar += pa;
    }
    // verificar con su reverso
    int n = verificar.size();
    for (int i = 0; i < n / 2; i++) {
        if (verificar[i] != verificar[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main()
{
     if (RecibirTexto()) {
        cout << "Es palindromo" << endl;
    } else {
        cout << "No es palindromo" << endl;
    }
    return 0;
}