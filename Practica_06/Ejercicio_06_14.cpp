/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 06/10/2025
Número de ejercicio: 14
Problema planteado: Realizar el ejercicio de este video (Contando cada vocal en una frase): */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> contarVocales (string texto){
    int n = texto.length();
    vector<int> vocales(5, 0);
    
    for(int i = 0; i < n; i++){
        if(texto[i] == 'a' || texto[i] == 'A'){
            vocales[0]++;
        } else if (texto[i] == 'e' || texto[i] == 'E'){
            vocales[1]++;
        } else if (texto[i] == 'i' || texto[i] == 'I'){
            vocales[2]++;
        } else if (texto[i] == 'o' || texto[i] == 'O'){
            vocales[3]++;
        } else if (texto[i] == 'u' || texto[i] == 'U'){
            vocales[4]++;
        } 
    }
    
    return vocales;
}

int main()
{
    string texto;
    cout << "Ingrese un texto: " << endl;
    getline(cin, texto);
    
    vector<int> vocales = contarVocales(texto);
    
    /*
    cout << "a: " << vocales[0] << endl;
    cout << "e: " << vocales[1] << endl;
    cout << "i: " << vocales[2] << endl;    otra forma de realizar
    cout << "o: " << vocales[3] << endl;
    cout << "u: " << vocales[4] << endl;
    */
    
    vector<char> v = {'A', 'E', 'I', 'O', 'U'};// vocal
    
    for(int i = 0; i < 5; i++){
        cout << v[i] << ": " << vocales[i] << endl;
    }
    
    
    return 0;
}