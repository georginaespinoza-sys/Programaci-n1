//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 11/09/2025
//Numero de ejercicio: 4


// Formula para IMC Peso (kg) / Estatura (m)². Es medida que relaciona el peso y la estatura de una persona para determinar su categoría de peso
#include <iostream>
using namespace std;

float calcularIMC(float peso, float altura) {
    if (altura <= 0 || peso <= 0) {//  || cualquiera se puede cumplir
        return 0.0;
    }
    return peso / (altura * altura);//ecuacion
}

int main() {
    float peso, altura, imc;

    cout << "Ingresa tu peso en kilogramos: "<<endl;
    cin >> peso;

    cout << "Ingresa tu altura en metros: "<<endl;
    cin >> altura;

    // Calcular el IMC
    imc = calcularIMC(peso, altura);

    if (imc > 0) {
        cout << "Tu indice de masa corporal (IMC) es: " << imc <<endl;
    } else {
        cout << "Valores de peso o altura no validos. Por favor, ingresa numeros positivos." <<endl;
    }

    return 0;
}