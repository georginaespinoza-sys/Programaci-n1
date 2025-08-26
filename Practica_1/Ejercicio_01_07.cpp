// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 26/08/2025
// Número de ejercicio: 7


#include <iostream>
using namespace std;

int main()
{
    char caracter;//char almacena un caracter
    cout << "ingrese un caracter" << endl;
    cin >> caracter;
    if((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')){ //"||" es o. && es una condicion de que los dos sean verdaderos
        if(caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U' || caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){//asignamos por separado las vocales con ||
            cout << "Es una vocal" << endl;
        } else {
            cout << "Es consonante" << endl;
        }
    }else {
        cout << "Es un caracter especial" << endl;
    }
    return 0;
}