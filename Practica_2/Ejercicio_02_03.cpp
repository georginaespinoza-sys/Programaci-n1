//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 08/09/2025
//Numero de ejercicio: 3

#include <iostream>
#include <cstdlib> // Para la función rand() y srand()
#include <ctime>   // Para la función time()

using namespace std;

int main() {
    
    srand(time(NULL)); //inicializamos la semilla para usar rand

    int numero = rand()%10;//creamos un numero aleatorio

    int factorial=1;      
    for (int i= numero; i >= 1; i--) { // en un for se expresa primero el inicio de i, por lo que definimos como numero, numero es  el numero del que sacaremos el factorial por ejemplo 5
        //el segundo es la condicion para que el bucle se repita, es decir, mientras i sea mayor a 1, los numeros se iran multiplicando 10*9*8*7 por ejemplo
        //el tercero es para saber si i debe bajarse o debe aumentarse, por ejemplo i++: i = i + 1, e i -- : i=i-1
        factorial= factorial*i;
    }
    cout<<"El factorial es: "<<factorial<<endl;
    
    return 0;
}