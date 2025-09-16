// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 16/09/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

void calcularSalario(int horasTrabajadas, float tarifaPorHora, float bonoPorHoraExtra) {
    float salario= 0.0;
    float salarioBonificacion = 0.0;
    int horasExtra = 0;

    if (horasTrabajadas > 8) {
        horasExtra=horasTrabajadas-8;
        salario=8*tarifaPorHora;
        salarioBonificacion = horasExtra * bonoPorHoraExtra;
    } else {
        salario=horasTrabajadas * tarifaPorHora;
    }
    
    float salarioTotal = salario+salarioBonificacion;

    cout << "Salario regular: " << salario<< endl;
    cout << "Salario con bonificacion: " << salarioBonificacion << endl;
    cout << "Salario total del trabajador: " << salarioTotal << endl;
}

int main() {
    int horasTrabajadas;
    float tarifaPorHora;
    float bonoPorHoraExtra;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaPorHora;

    cout << "Ingrese el valor de la bonificacion por hora extra: ";
    cin >> bonoPorHoraExtra;

    calcularSalario(horasTrabajadas, tarifaPorHora, bonoPorHoraExtra);//función para calcular 

    return 0;
}