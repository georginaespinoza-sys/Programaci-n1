// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 18/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void aplicardescuento(double &total) {
    const double tasa_descuento = 0.05;
    total -= (total * tasa_descuento);
}

double calculariva(double total) {
    double tasa_iva = 0.13;
    return total * tasa_iva;
}

int main() {
    srand(time(NULL));

    int n_productos;

    cout << "Ingrese la cantidad de productos vendidos en el dia: ";
    cin >> n_productos;

    double precio_unitario, total_sin_descuento = 0.0;

    for (int i = 0; i < n_productos; ++i) {
        precio_unitario = (rand() % 31) + 20; 
        total_sin_descuento += precio_unitario;
        cout << "Producto " << i + 1 << ": " << precio_unitario << " Bs" << endl;
    }

    cout << "El total de ventas es: " << total_sin_descuento << " Bs" << endl;
    
    double total_final = total_sin_descuento;

    if (total_final > 2500.0) {
        aplicardescuento(total_final);
        cout << "Se aplico un descuento del 5%" << endl;
    }
    
    double iva_a_pagar = calculariva(total_final);

    cout << "El total final de las ventas es: " << total_final << " Bs" << endl;
    cout << "El monto de IVA: " << iva_a_pagar << " Bs" << endl;
    
    return 0;
}