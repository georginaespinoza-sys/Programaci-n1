// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 03/10/2025
// Número de ejercicio: 2
// Problema planteado: Escriba un programa para introducir los siguientes valores en un arreglo nombrado
// voltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. 
// Después que se hayan introducido los datos, haga que su programa despliegue los valores.
// 11.95   16.32   12.15
// 8.22    15.98   26.22
// 13.54   6.45    17.59

#include <iostream>
#include <vector>

using namespace std;

void desplegarVoltajes(vector<double>& voltajes, int columnas) {//vector<double>& voltajes recibe el vector de voltajes por referencia
    cout << "Los valores de voltaje son:" <<endl;

    for (int i = 0; i < voltajes.size(); ++i) {//recorre cada elemento

        cout << voltajes[i];

        if ((i + 1) % columnas == 0) {//% devuelve el resto de la división entre la posición actual y el número de columnas
            cout << endl; 
        } else {
            cout << "\t"; 
        }
    }
}

int main() {
    vector<double> voltios;

    voltios.push_back(11.95);
    voltios.push_back(16.32);
    voltios.push_back(12.15);
    voltios.push_back(8.22);
    voltios.push_back(15.98);
    voltios.push_back(26.22);
    voltios.push_back(13.54);
    voltios.push_back(6.45);
    voltios.push_back(17.59);

    int columnas = 3;

    desplegarVoltajes(voltios, columnas);

    return 0;
}