//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 08/09/2025
//Numero de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));//numero aleatorio
    
    int p = rand() % (51);
    
    int intentos = 1, prueba = -1;
    int minimo = 0, maximo = 50;
    
    while(prueba != p && intentos <= 5){//prueba diferente o igual a p y intentos menores e igual a 5
        cout << "Estoy pensando en un numero entre: " << minimo << " y " << maximo << endl;
        cout << "Intento " << intentos << ": " << endl;
        
        cin >> prueba;
        
        if(prueba == p){
            cout << "Felicidades, ganaste" << endl;
        } else if (prueba < p){
            minimo = prueba;
            cout << "Numero equivocado" << endl;
        } else if (prueba > p){
            maximo = prueba;
            cout << "Numero equivocado" << endl;
        }
        
        intentos++;// se incrementa
    }
    
    if(prueba != p){
        cout << "Perdiste el juego" << endl;
    }
    

    return 0;
}