// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Fecha creación: 30/09/2025
// Número de ejercicio: 1
//Problema planteado:Escriba un programa con 6 funciones utilizando vectores para lo siguiente:
//a. Una lista de 100 voltajes de precisión doble (entre 20.00 V y 220.00 V)
//b. Una lista de 50 temperaturas de precisión doble (Entre 0.00 y 100.00)
//c. Una lista de 30 caracteres alfanuméricos.
//d. Una lista de 100 años en número entero (entre 1990 y 2025)
//e. Una lista de 32 velocidades de precisión doble (entre 10.00 y 300.00)
//f. Una lista de 1000 distancias de precisión doble (entre 1.00 a 1000.00)
//Los datos debes ser generados utilizando numero aleatorios.

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

//las distancias al ser 1000 no se notan los anteriores datos, pero si lo modifica a un menor si lo vera

using namespace std;

vector<double> CienVoltajes() {//a
    vector<double> voltajes;//declarar vector para 100 voltajes

    double min_voltaje = 20.00;//limites
    double max_voltaje = 220.00;

    for (int i = 0; i < 100; ++i) {//generar
        
        double rango = max_voltaje - min_voltaje;
        double aleatorio_normalizado = (double)rand() / RAND_MAX;
        double voltaje = min_voltaje + rango * aleatorio_normalizado;
        
        voltajes.push_back(voltaje);
    }
    return voltajes;
}


vector<double> CincuentaTempe() {//b
    vector<double> temperaturas;//declarar vector para 50 temperaturas

    double min_temperatura = 0.00;//limites
    double max_temperatura = 100.00;

    for (int i = 0; i < 50; ++i) {//generar
        
        double rango = max_temperatura - min_temperatura;
        double aleatorio_normalizado = (double)rand() / RAND_MAX;
        double temperatura = min_temperatura + rango * aleatorio_normalizado;
        
        temperaturas.push_back(temperatura);
    }
    return temperaturas;
}


vector<char> Alfanumericos() {
    vector<char> caracteres;
    int cantidad = 30;

    for (int i = 0; i < cantidad; ++i) {
        // Genera un índice aleatorio de 0 a 61 (10 números + 26 mayúsculas + 26 minúsculas).
        int indice = rand() % 62; 
        
        char c;
        if (indice < 10) { // Mapeo a números '0' a '9'
            c = '0' + indice;
        } else if (indice < 36) { // Mapeo a letras mayúsculas 'A' a 'Z'
            c = 'A' + (indice - 10);
        } else { // Mapeo a letras minúsculas 'a' a 'z'
            c = 'a' + (indice - 36);
        }
        
        caracteres.push_back(c);
    }
    return caracteres;
}


vector<int> CienAnios() {//d
    vector<int> anios;//declarar vector para 100 anios

    int min_anio = 1990;//limites
    int max_anio = 2025;

    for (int i = 0; i < 100; ++i) {//generar
        
        int rango = max_anio - min_anio;
        double aleatorio_normalizado = (double)rand() / RAND_MAX; 
        int anio = min_anio + int((rango + 1) * aleatorio_normalizado);
        
        anios.push_back(anio);
    }
    return anios;
}


vector<double> Velocidades() {//e
    vector<double> velocidades;//declarar vector para 32 velocidades

    double min_velocidad = 10.00;//limites
    double max_velocidad = 300.00;

    for (int i = 0; i < 32; ++i) {//generar
        
        double rango = max_velocidad - min_velocidad;
        double aleatorio_normalizado = (double)rand() / RAND_MAX;
        double velocidad = min_velocidad + rango * aleatorio_normalizado;
        
        velocidades.push_back(velocidad);
    }
    return velocidades;
}


vector<double> Distancias() {//f
    vector<double> distancias;//declarar vector para 1000 distancias

    double min_distancia = 1.00;//limites
    double max_distancia = 1000.00;

    for (int i = 0; i < 1000; ++i) {//generar
        
        double rango = max_distancia - min_distancia;
        double aleatorio_normalizado = (double)rand() / RAND_MAX;
        double distancia = min_distancia + rango * aleatorio_normalizado;
        
        distancias.push_back(distancia);
    }
    return distancias;
}


int main() {
    
    srand(time(NULL));
    
    vector<double> listaDeVoltajes = CienVoltajes();// llamar a la funcion
    cout << "Lista de 100 voltajes de precision doble (20.00V a 220.00V):\n";
    for (int i = 0; i < listaDeVoltajes.size(); ++i) {
        cout << "Voltaje " << (i + 1) << ": " << listaDeVoltajes[i] << " V\n";
    }
    
    vector<double> listaDeTemperatura = CincuentaTempe();// llamar a la funcion
    cout << "Lista de 32 velocidades de precision doble (20.00 a 100.00):\n";
    for (int i = 0; i < listaDeTemperatura.size(); ++i) {
        cout << "Temperatura " << (i + 1) << ": " << listaDeTemperatura[i] << " t\n";
    }

    vector<char> lista_caracteres = Alfanumericos();
    cout << "Lista de 30 Caracteres Alfanumericos:\n";
    for (int i = 0; i < lista_caracteres.size(); ++i) {
        cout << "Caracter "<<(i + 1)<<": "<<lista_caracteres[i]<<"\n";
        if (i < lista_caracteres.size() - 1) {
            cout << " "; 
        }
    }

    vector<int> listaDeAnios = CienAnios();// llamar a la funcion
    cout << "Lista de 100 anios de precision doble (1990 a 2025):\n";
    for (int i = 0; i < listaDeAnios.size(); ++i) {
        cout << "Anios " << (i + 1) << ": " << listaDeAnios[i] << " anios\n";
    }

    vector<double> listaDeVelocidades = Velocidades();// llamar a la funcion
    cout << "Lista de 32 velocidades de precision doble (10.00 a 300.00):\n";
    for (int i = 0; i < listaDeVelocidades.size(); ++i) {
        cout << "Velocidad " << (i + 1) << ": " << listaDeVelocidades[i] << " v\n";
    }

    vector<double> listaDeDistancias = Distancias();// llamar a la funcion
    cout << "Lista de 1000 distancias de precision doble (1.00 a 1000.00):\n";
    for (int i = 0; i < listaDeDistancias.size(); ++i) {
        cout << "Distancia " << (i + 1) << ": " << listaDeDistancias[i] << " d\n";
    }

    return 0;
}