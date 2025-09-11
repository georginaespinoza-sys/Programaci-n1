//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 11/09/2025
//Numero de ejercicio: 5

#include <iostream>
#include <cstdlib>//sran y rand
#include <ctime>//time

using namespace std;

double promedioPonderado(int n1, int n2, int n3, int n4){
    double nota1 = n1 * 10.0;//operaciones
    double nota2 = n2 * 20.0;
    double nota3 = n3 * 30.0;
    double nota4 = n4 * 40.0;
    
    double nota = nota1 + nota2 + nota3 + nota4;
    
    double promedio = nota / 100.0;
    
    return promedio;
}


int main()
{
    srand(time(NULL));//numero aleatorio
    
    int n1 = rand() % (101);// numero aleatorio modulo 100 +1
    int n2 = rand() % (101);
    int n3 = rand() % (101);
    int n4 = rand() % (101);
    
    cout << "La nota 1 es de: " << n1 << endl;
    cout << "La nota 2 es de: " << n2 << endl;
    cout << "La nota 3 es de: " << n3 << endl;
    cout << "La nota 4 es de: " << n4 << endl;
    
    double promedio = promedioPonderado(n1, n2, n3, n4);
    
    cout << endl << "El promedio ponderado es de: " << promedio << endl;
    
    return 0;
}