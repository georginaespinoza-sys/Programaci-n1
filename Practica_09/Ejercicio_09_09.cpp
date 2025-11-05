/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 04/11/2025
Número de ejercicio: 09
Problema planteado: Calificaciones Curso 
Desarrollo: Se desea calcular las notas finales de N alumnos de un curso, así 
como también el promedio, mínimo y máximo de éstas. Se recibirá el número de 
alumnos y las notas parciales de cada uno de éstos. Las notas parciales 
corresponden a la T1, T2, T3, T4 y EF. La nota final se calcula empleando la 
fórmula: 
NF = 0.7*NP + 0.3*EF 
En donde NP es la nota de presentación calculada como: 
NP = (T1+T2+T3+T4)/4 
*/

#include <iostream>
#include <conio.h>

using namespace std;

// Ingresar las notas 
void ingresarNotasAlumno(int alumno, double &T1, double &T2, double &T3, double &T4, double &EF) {
    cout << "Alumno " << alumno + 1 << ":\n";
    cout << "Digite nota T1: "; 
    cin >> T1;
    cout << "Digite nota T2: "; 
    cin >> T2;
    cout << "Digite nota T3: "; 
    cin >> T3;
    cout << "Digite nota T4: "; 
    cin >> T4;
    cout << "Digite nota EF: "; 
    cin >> EF;
}

double calcularNotaFinal(double T1, double T2, double T3, double T4, double EF) {
    double NP = (T1 + T2 + T3 + T4) / 4.0;
    return 0.7 * NP + 0.3 * EF;
}

void calcularEstadisticas(double notas[], int n, double &promedio, double &minimo, double &maximo) {
    double suma = 0;
    minimo = notas[0];
    maximo = notas[0];
    for (int i = 0; i < n; i++) {
        suma += notas[i];
        if (notas[i] < minimo) minimo = notas[i];
        if (notas[i] > maximo) maximo = notas[i];
    }
    promedio = suma / n;
}

void mostrarResultados(double notas[], int n, double promedio, double minimo, double maximo) {
    cout << "\nNotas finales de los alumnos:\n";
    for (int i = 0; i < n; i++) {
        cout << "Alumno " << i + 1 << ": " << notas[i] << endl;
    }
    cout << "Promedio del curso: " << promedio << endl;
    cout << "Nota minima: " << minimo << endl;
    cout << "Nota maxima: " << maximo << endl;
}

int main() {
    int N;
    cout << "Digite el numero de alumnos: ";
    cin >> N;

    double notasFinales[100];

    for (int i = 0; i < N; i++) {
        double T1, T2, T3, T4, EF;
        ingresarNotasAlumno(i, T1, T2, T3, T4, EF);
        notasFinales[i] = calcularNotaFinal(T1, T2, T3, T4, EF);
    }

    double promedio, minimo, maximo;
    calcularEstadisticas(notasFinales, N, promedio, minimo, maximo);

    mostrarResultados(notasFinales, N, promedio, minimo, maximo);

    getch();
    return 0;
}