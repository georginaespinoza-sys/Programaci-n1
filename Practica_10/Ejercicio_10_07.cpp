/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 09/11/2025
Número de ejercicio: 7
Problema planteado: Promedio de calificaciones por estudiante 
Descripción: Escribe un programa que lea un archivo calificaciones.txt, 
donde cada línea contiene el nombre de un estudiante seguido de varias 
calificaciones. El programa debe calcular el promedio de cada estudiante y 
escribirlo en un archivo promedios.txt en el formato Nombre Promedio. 
Formato del archivo de entrada (calificaciones.txt): 
            Juan 7.5 8.0 9.5.5 6
            Ana 8.0 7.5 9.0 8.5
            Luis 6.0 6.5 7.0 5.5
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<double> sacarPromedio(vector<string>& nombres) {
    ifstream archivo("calificaciones.txt");
    vector<double> promedios;
    
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return promedios;
    }
    
    string linea;  
    while(getline(archivo, linea)) {  
        stringstream ss(linea);
        string palabra;
        double suma = 0.0;
        int totalCalificaciones = 0;
        
        // Leer nombre (primera palabra)
        if(ss >> palabra) {
            nombres.push_back(palabra);
            
            // Leer calificaciones
            double calificacion;
            while(ss >> calificacion) {
                suma += calificacion;
                totalCalificaciones++;
            }
            
            // Calcular promedio
            if(totalCalificaciones > 0) {
                double promedio = suma / totalCalificaciones;
                promedios.push_back(promedio);
            } else {
                promedios.push_back(0.0);
            }
        }
    }
    archivo.close();
    return promedios;
}

void guardarMostrar(const vector<string>& nombres, const vector<double>& promedios) {
    if(nombres.size() != promedios.size()) {
        cout << "Error: cantidad de nombres y promedios no coincide" << endl;
        return;
    }
    
    ofstream archivo("promedios.txt");
    if(!archivo.is_open()){
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }
    
    for(size_t i = 0; i < nombres.size(); i++){
        cout << nombres[i] << " " << promedios[i] << endl;
        archivo << nombres[i] << " " << promedios[i] << "\n";
    }
    
    archivo.close();
}

int main() {
    vector<string> nombres;
    vector<double> promedios = sacarPromedio(nombres);
    guardarMostrar(nombres, promedios);
    return 0;
}