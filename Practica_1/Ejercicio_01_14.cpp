// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 28/08/2025
// Número de ejercicio: 14

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero:" << endl;
    cin >> N;
    cout << "El triangulo es: " << endl;
    for(int i = 1; i <= N; i++){//iniciar;condicion,finaliza. 
        for(int j = 0; j < i; j++){//se encrementa 1 cada fila
            cout << "*";//se incrementa n de filas
        }
        cout << endl;//al terminar inicia de nuevo para imprimir la siguiente fila.
    }
    return 0;
}