/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 06/10/2025
Número de ejercicio: 9
Problema planteado: Escribe un programa que invierta el orden de las palabras en una oración sin cambiar el 
orden de los caracteres dentro de cada palabra. 
• // Entrada: "Hola mundo desde C++"  
• // Salida: "C++ desde mundo Hola"  */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separar (string s){
    //guarda la longitud
    int n = s.length();
    string p = "";
    vector<string> palabras;
    for(int i = 0; i < n; i++){
        // si el caracter no es un espacio se va a p
        if(s[i] != ' '){
            p = p + s[i];
        } else if (p.length() > 0 && s[i] == ' '){
            palabras.push_back(p);
            p = "";
        }
    }
    
    if(p.length() > 0){
        palabras.push_back(p);
    }
    
    return palabras;
}

void mostrar (vector<string> palabras){
    int n = palabras.size();
    
    for(int i = n - 1; i >= 0; i--){
        cout << palabras[i] << " ";
    }
    cout << endl;
}

int main()
{
    string texto;
    cout << "Ingrese un texto: " << endl;
    getline(cin, texto);
    
    vector<string> palabras = separar(texto);
    mostrar(palabras);

    return 0;
}