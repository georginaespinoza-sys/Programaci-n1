// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 18/09/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

double calcularSalarioBase(int antiguedad) {//calcular el salario base
    double SALARIO_INICIAL = 2750.0;
    double tasa_incremento = 0.10; // 10% de aumento anual

    double salario = SALARIO_INICIAL;
    for (int i = 0; i < antiguedad; ++i) {
        salario += salario * tasa_incremento ;
    }
    return salario;
}

// Función para calcular la comisión por ventas de una vendedora.
double calcularComision(double precio_producto) {
    int PROD_PROMEDIO = 10;
    double TASA_COMISION = 0.10; // 10% de comisión del total vendido

    double total_ventas = precio_producto * PROD_PROMEDIO;
    return total_ventas * TASA_COMISION;
}

int main() {
    int n_vendedoras;

    cout << "Ingrese la cantidad de vendedoras: ";
    cin >> n_vendedoras;

    double precio_producto;
    cout << "Ingrese el precio de los productos: ";
    cin >> precio_producto;

    for (int i = 1; i <= n_vendedoras; ++i) {
        int antiguedad;
        cout << "\nIngrese los anios de antiguedad de la vendedora " << i << ": ";
        cin >> antiguedad;

        // Se calculan los componentes del salario
        double salario_base = calcularSalarioBase(antiguedad);
        double comision = calcularComision(precio_producto);
        double salario_total = salario_base + comision;

        cout << "Su salario base es: " << salario_base << endl;
        cout << "Su comision por ventas es de: " << comision << endl;
        cout << "Su salario total a recibir es de: " << salario_total << endl;
    }

    return 0;
}