/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 06/10/2025
Número de ejercicio: 11
Problema planteado: Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un 
delimitador. Por ejemplo, dividir una oración en palabras. 
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','  
// Salida:  
// Esto  
// es  
// una  
// cadena  
// separada  
// por  
// comas  */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separar (string texto, char delimitador){// se crea el delimitador
    int n = texto.length();//longitud
    vector<string> palabras;
    string p = "";
    
    for(int i = 0; i < n; i++){
        if(texto[i] != delimitador){
            p = p + texto[i];
        } else if (texto[i] == delimitador && p.length() > 0){//revisa el caracter
            palabras.push_back(p);
            p = "";
        }
    }
    
    if(p.length() > 0){
        palabras.push_back(p);//dependiendo de la longitud de palabras
    }
    
    return palabras;
}

void mostrar (vector<string> palabras){
    for(string i : palabras){
        cout << i << endl;
    }
}

int main()
{
    string texto;
    cout << "Ingrese un texto: " << endl;
    getline(cin, texto);
    
    char delimitador;
    
    cout << "Ingrese el delimitador: " << endl;
    cin >> delimitador;
    
    vector<string> palabras = separar(texto, delimitador);
    
    cout << "El mensaje sin el delimitador es: " << endl;
    mostrar(palabras);
    
    return 0;
}