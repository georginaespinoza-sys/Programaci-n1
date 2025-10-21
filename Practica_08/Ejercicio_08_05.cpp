/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 20/10/2025
Número de ejercicio: 5 
Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, 
retorne la suma de sus elementos. 
*/

#include <iostream>
#include <vector>

using namespace std;

int suma (int i, vector<int> vi);

int main()
{
    int n;
    cout << "Ingrese el tamanio del vector: " << endl;
    cin >> n;
    vector<int> vi(n);
    for(int i = 0; i < n; i++){
        cin >> vi[i];
    }
    
    int s = suma(n - 1, vi);
    cout << "La suma de los valores del vector es: " << s << endl;
    
    return 0;
}

int suma (int i, vector<int> vi){
    if(i == 0){
        return vi[0];
    } else {//el iterador retrocede
        return vi[i] + suma(i - 1, vi);
    }
}