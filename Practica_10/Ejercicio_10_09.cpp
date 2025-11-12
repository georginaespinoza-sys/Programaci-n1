/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/11/2025
Número de ejercicio: 9
Problema planteado: Cifrado de un archivo de texto (Cifrado César) 
Descripción: Escribe un programa que lea un archivo mensaje.txt, realice 
un cifrado César con un desplazamiento de 3 sobre el texto y guarde el 
resultado en un archivo mensaje_cifrado.txt. El cifrado César desplaza cada 
letra por un número fijo de posiciones en el alfabeto (por ejemplo, A se 
convierte en D, B en E, etc.). 
*/

#include <iostream>
#include <fstream>
using namespace std;

void escribirMensaje(){
    ofstream archivo("mensaje.txt", ios::app);
    char linea[100];
    cout << "Ingrese su mensaje" << endl;
    cin.getline(linea, 100);
    if(!archivo.is_open()){
        cout << "Error" << endl;
        return;
    }
    
    archivo << linea << "\n";
    archivo.close();
}

void mensajeCifrado(){
    ifstream archivoNormal("mensaje.txt");
    ofstream archivoCifrado("mensaje_cifrado.txt");
    
    if(!archivoNormal.is_open()){
        cout << "Error" << endl;
        return;
    }
    
    if(!archivoCifrado.is_open()){
        cout << "Error tambien" << endl;
        return;
    }
    string linea;
    while(!archivoNormal.eof()){
        getline(archivoNormal, linea);
        string cifrado = "";
        for(int i = 0; i < linea.length(); i++){
            char nuevaLetra = linea[i] + 3;
            cifrado += nuevaLetra;
        }
        archivoCifrado << cifrado << "\n";
    }
    
    archivoNormal.close();
    archivoCifrado.close();
}

int main()
{
    escribirMensaje();
    mensajeCifrado();
    return 0;
}