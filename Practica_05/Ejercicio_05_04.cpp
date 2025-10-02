// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Fecha creación: 30/09/2025
// Número de ejercicio: 4
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
#include <vector>

using namespace std;

vector<double> leerVector(int N) {
    vector<double> v;
    double valor;
    
    for (int i = 0; i < N; ++i) {
        cout << "Introduce el valor " << i + 1 << ": ";
        
        cin >> valor; 
        v.push_back(valor); 
    }
    return v;
}

vector<double> multiplicarVectores(vector<double>& V1, vector<double>& V2) {
    vector<double> V_resultado; 
    
    for (int i = 0; i < V1.size(); ++i) {
        
        double producto = V1[i] * V2[i]; 
        V_resultado.push_back(producto);
    }
    
    return V_resultado;
}

int main() {
    int N; 
    
    cout << "Ingrese la dimension (N) de los vectores: ";
    cin >> N;
    
    cout << "\nPrimer vector (A)" << endl;
    vector<double> vectorA = leerVector(N);
    
    cout << "\nSegundo vector (B)" << endl;
    vector<double> vectorB = leerVector(N);
    
    vector<double> vectorResultado = multiplicarVectores(vectorA, vectorB);//llamar a la funcion
    cout << "\nResultado (A * B)" << endl;
    
    for (int i = 0; i < vectorResultado.size(); ++i) {
        cout << vectorResultado[i];
        if (i < vectorResultado.size() - 1) {
            cout << " "; // separador de elementos
        }
    }
    return 0;
}