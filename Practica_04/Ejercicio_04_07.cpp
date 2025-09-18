// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 18/09/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

// Función para calcular el Máximo Común Divisor (MCD) usando recursión
int mcd(int a, int b) {//
    if (b == 0) {
        return a;
    }
    return mcd(b, a % b);
}

long mcm(int a, int b) {//calcular MCM. usando la relación: m*n = MCD(m,n) * MCM(m,n)
    if (a == 0 || b == 0) {
        return 0;
    }
    // Convertir el primer operando a long long para evitar el desbordamiento
    return (long)a * b / mcd(a, b);
}

int main() {
    int m, n;

    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> m >> n;

    if (m <= 0 || n <= 0) {
        cout << "Ambos numeros deben ser positivos. Intente de nuevo." <<endl;
        return 1;
    }

    int resultado_mcd = mcd(m, n);
    long long resultado_mcm = mcm(m, n);

    cout << "El Maximo Comun Divisor (MCD) es: " << resultado_mcd <<endl;
    cout << "El Minimo Comun Multiplo (MCM) es: " << resultado_mcm <<endl;

    return 0;
}