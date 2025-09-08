//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 07/09/2025
//Numero de ejercicio: 1

#include <iostream>
#include <cstdlib> // Para la función rand() y srand()
#include <ctime>   // Para la función time()

using namespace std;

int main() {
    srand(time(NULL));
    int numero;
    cout << "Ingrese el numero de lanzamientos: "<<endl;
    cin >> numero;
    int lanzamientos_pares = 0;
    int lanzamiento;        

    if(numero>0)
    {
        for (int i=1; i<numero; i++) {
         lanzamiento= (rand() % 6)+1;
         if (lanzamiento%2 == 0) {
            lanzamientos_pares++; 
        }
        }

        float frecuencia_par = (float)lanzamientos_pares / numero;
        cout << lanzamientos_pares << " pares." << endl;
        cout << "La frecuencia de caras pares es: " <<frecuencia_par<< endl;
    }
    else{
        cout<<"No menores a 0";
    }
    return 0;
}