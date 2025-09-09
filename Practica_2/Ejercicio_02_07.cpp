//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 09/09/2025
//Numero de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(0));//numero aleatorioS

    int N; // Cantidad total de niños
    cout << "Ingresa la cantidad total de ninios: "<<endl;
    cin >> N;

    int rand1 = rand() % 100 + 1;
    int rand2 = rand() % 100 + 1;
    int rand3 = rand() % 100 + 1;
    int suma = rand1 + rand2 + rand3;

    // Calcular la cantidad de niños
    int ninios1Anio = (N * rand1) / suma;
    int ninios2Anios = (N * rand2) / suma;
    int ninios3Anios = N - ninios1Anio - ninios2Anios;

    // Si la cantidad total no es N debido a la división de enteros,
    // ajusta el último valor para que la suma sea exacta.
    if (ninios1Anio + ninios2Anios + ninios3Anios != N) {
        ninios3Anios = N - (ninios1Anio + ninios2Anios);
    }

    cout << "De 1 anio: " << ninios1Anio << endl;
    cout << "De 2 anios: " << ninios2Anios << endl;
    cout << "De 3 anios: " << ninios3Anios << endl;

    // Calcular el consumo total de pañales
    int consumo1Anio = ninios1Anio * 6;
    int consumo2Anios = ninios2Anios * 3;
    int consumo3Anios = ninios3Anios * 2;
    int consumoTotal = consumo1Anio + consumo2Anios + consumo3Anios;

    //Consumo
    cout << "Consumo de 1 anio por dia: " << ninios1Anio << " x 6 = " << consumo1Anio << endl;
    cout << "Consumo de 2 anios por dia: " << ninios2Anios << " x 3 = " << consumo2Anios << endl;
    cout << "Consumo de 3 anios por dia: " << ninios3Anios << " x 2 = " << consumo3Anios << endl;
    cout << "Consumo total de paniales: " << consumoTotal << endl;

    return 0;
}