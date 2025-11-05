/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 04/11/2025
Número de ejercicio: 8
Problema planteado: Olimpiada Nacional 
Descripción: El viceministerio de deportes hace una olimpiada a nivel nacional de 
los siguientes deportes: 
• Tiro con arco 
• Atletismo 
• Boxeo 
• Ciclismo 
• Natación 
• Esgrima 
También se registra los nombres de los atletas y que departamento representa y 
que deporte practica. 
Realizar un programa en C++ que simule y registre cuantas medallas ha ganado un 
atleta y que me muestre el medallero final por departamento. 
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Atleta {
    char nombre[30];
    char departamento[30];
    char deporte[30];
    int medallas;
};

// Registrar atletas
void llenarAtletas(Atleta atletas[], int &n) {
    cout << "Digite cuantos atletas desea registrar? ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        cout << "Digite nombre del atleta: ";
        cin.getline(atletas[i].nombre, 30);
        cout << "Digite departamento que representa: ";
        cin.getline(atletas[i].departamento, 30);
        cout << "Digite deporte (Tiro con arco, Atletismo, Boxeo, Ciclismo, Natacion, Esgrima): ";
        cin.getline(atletas[i].deporte, 30);
        cout << "Digite medallas ganadas: ";
        cin >> atletas[i].medallas;
        cin.ignore();
    }
}

int buscarDepartamento(char departamentos[][30], int totalDept, char departamentoBuscado[]) {
    for (int i = 0; i < totalDept; i++) {
        if (string(departamentos[i]) == string(departamentoBuscado)) {
            return i;
        }
    }
    return -1;  // No encontrado
}

void calcularMedallero(Atleta atletas[], int n, char departamentos[][30], int medallasDept[], int &totalDept) {
    totalDept = 0;
    for(int i = 0; i < n; i++) {
        int pos = buscarDepartamento(departamentos, totalDept, atletas[i].departamento);
        if (pos == -1) {
            strcpy(departamentos[totalDept], atletas[i].departamento);
            medallasDept[totalDept] = atletas[i].medallas;
            totalDept++;
        } else {
            medallasDept[pos] += atletas[i].medallas;
        }
    }
}

void mostrarMedallero(char departamentos[][30], int medallasDept[], int totalDept) {
    cout << "\nMedallero final por departamento:\n";
    for (int i = 0; i < totalDept; i++) {
        cout << departamentos[i] << ": " << medallasDept[i] << " medallas" << endl;
    }
}

int main() {
    int n;
    Atleta atletas[100];

    llenarAtletas(atletas, n);

    char departamentos[100][30];
    int medallasDept[100];
    int totalDept;

    calcularMedallero(atletas, n, departamentos, medallasDept, totalDept);
    mostrarMedallero(departamentos, medallasDept, totalDept);

    getch();
    return 0;
}