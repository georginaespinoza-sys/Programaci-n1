/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 19/10/2025
Número de ejercicio: 6
Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales. 
*/

#include <iostream>
#include <vector>
using namespace std;

bool sonIguales(const vector<int>& a, const vector<int>& b, int i = 0) {
    if (a.size() != b.size()){
        return false; // Diferente tamanio
    } 
    // Caso base: todos comparados
    else if (i == a.size()){
        return true; 
    }         
    else if (a[i] != b[i]){
        return false;         
    } 
    return sonIguales(a, b, i + 1);         
}

int main() {
    vector<int> v1 = {7, 3, 5, 4};
    vector<int> v2 = {1, 2, 3, 4};
    if (sonIguales(v1, v2)) {
        cout << "Los vectores son iguales" << endl;
    } else {
        cout << "Los vectores son diferentes" << endl;
    }
    return 0;
}

