//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 11/09/2025
//Numero de ejercicio: 6

#include <iostream>
using namespace std;

// Función para determinar si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);//anio modulo 4 conresiduo 0 y modulo de 100 diferente a 0
}

int obtenerDiasDelMes(int anio, int mes) {
    switch (mes) {
        case 1: // Enero
            return 31;
            break;
        case 2: // Febrero
            if (esBisiesto(anio)) {
                return 29;
            } else {
                return 28;
            }
            break;
        case 3: // Marzo
            return 31;
            break;
        case 4: // Abril
            return 30;
            break;
        case 5: // Mayo
            return 31;
            break;
        case 6: // Junio
            return 30;
            break;
        case 7: // Julio
            return 31;
            break;
        case 8: // Agosto
            return 31;
            break;
        case 9: // Septiembre
            return 30;
            break;
        case 10: // Octubre
            return 31;
            break;
        case 11: // Noviembre
            return 30;
            break;
        case 12: // Diciembre
            return 31;
            break;
        default:
            return 0; // Mes no válido
            break;
    }
}

int main() {
    int anio, mes;
    
    cout << "Ingresa un anio: ";
    cin >> anio;
    
    cout << "Ingresa un mes (1-12): ";
    cin >> mes;
    
    int dias = obtenerDiasDelMes(anio, mes);
    
    if (dias > 0) {
        cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias." <<endl;
    } else {
        cout << "La entrada no es valida" <<endl;
    }

    return 0;
}