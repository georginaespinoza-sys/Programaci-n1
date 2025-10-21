/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 21/10/2025
Número de ejercicio: 8
Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado 
un entero n > 1, calcule e imprima los elementos correspondientes a la 
conjetura de Ullman (en honor al matemático  Ullman) que consiste en lo siguiente: 
• Empiece con cualquier entero positivo. 
• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1. 
• Obtenga enteros sucesivamente repitiendo el proceso. 
Al final se obtendrá el número 1, independientemente del entero inicial. Por 
ejemplo, cuando el entero inicial es 26, la secuencia será: 
26  13  40  20  10  5  16  8  4  2  1 
*/

#include <iostream>
using namespace std;

void ullman(int n) {
    cout << n << " ";
    if (n == 1){
        // Caso base
        return; 
    }
    //Par
    if (n % 2 == 0) {
        ullman(n / 2);
    //Impar 
    } else {
        ullman(3 * n + 1); 
    }
}

int main() {
    int n;
    cout << "Ingrese un entero mayor a 1: ";
    cin >> n;
    if (n > 1) {
        ullman(n);
    } else {
        cout << "El numero debe ser mayor a 1." << endl;
    }
    return 0;
}
