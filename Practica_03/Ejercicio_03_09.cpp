//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 11/09/2025
//Numero de ejercicio: 9

#include <iostream>


using namespace std;

double tiempoTrabajado(int minutos){
    double horas = minutos / 60.0;
    
    return horas - 8.0;
}

void mostrarResultado () {//no es necesario return
    cout << "Ingrese la cantidad de minutos trabajados" << endl;
    int minutos;
    cin >> minutos;
    
    double horas = tiempoTrabajado(minutos);
    
    if(horas == 0){//condicion
        cout << "Ha trabajado 8 horas exactas" << endl;
    } else if (horas < 0){
        cout << "Ha trabajado menos horas" << endl;
        cout << "Le debe a la empresa: " << (-1) * horas << " horas de trabajo" << endl;
    } else if (horas > 0){
        cout << "Ha trabajado horas extra" << endl;
        cout << "La empresa le debe pagar " << horas << " horas extra" << endl;
    }
}

int main()
{
    
    mostrarResultado();
    
    return 0;
}