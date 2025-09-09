//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 09/09/2025
//Numero de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool esPrimo(int n){
    if(n <= 1){
        return false;
    }
    
    for(int i = 2; i * i <= n; i++){//declaramos condicion
        if(n % i == 0){
            return false;
        }
    }
    
    return true;
}

int main()
{
    srand(time(NULL));//numero aleatorio
    
    int n;
    
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    
    int primos = 0, aleatorio;
    
    for(int i = 0; i < n; i++){//declaramos condicion
        aleatorio = rand() % (10001) + 1;
        bool p = esPrimo(aleatorio);
        if(p){
            cout << aleatorio << " es Primo" << endl;
            primos++;
        } else {
            cout << aleatorio << endl;
        }
    }
    
    cout << "Se han generado " << primos << " numeros primos" << endl;
    return 0;
}