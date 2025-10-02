// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Fecha creación: 30/09/2025
// Número de ejercicio: 7
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo hasta que se llene el 
//vector o se introduzca un número negativo. Entonces se debe imprimir el vector (sólo los elementos introducidos).

#include <iostream>
#include <vector>

using namespace std;

vector<int> ingresar(){
    int i = 0;
    vector<int> arr;
    int a = 1;
    
    while(i < 10 && a >= 0){//cumplir las dos condiciones
        cout << "ingrese el valor " << i + 1 << ":\n";
        cin >> a;
        if(a < 0){
            continue;
        } else {
            arr.push_back(a);
            i++;
        }
    }
    
    return arr;
}

void mostrar (vector<int> arr){
    for(int i :  arr){
        cout << i << "\t";
    }
}

int main()
{
    vector<int> arr = ingresar();//llamar a la funcion
    mostrar(arr);
    return 0;
}