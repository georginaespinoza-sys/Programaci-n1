// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 22/08/2025
// Número de ejercicio: 25

#include <iostream>
using namespace std;

int main()
{
    int n;
    char continuar;
    do {
        cout << "Ingrese el numero del que quiere generar su tabla" << endl;
        cin >> n;
        for(int i = 1; i <= 10; i++){//del 1 al 10
            int res = n * i;
            cout << n << " x " << i << " = " << res << endl;
        }
        cout << endl;
        cout << "Desea generar otra tabla? (s/n)" << endl;// si y no
        cin >> continuar;
    } while (continuar == 's');
    return 0;
}