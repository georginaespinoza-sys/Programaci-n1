#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double promedioPonderado(int n1, int n2, int n3, int n4){
    double nota1 = n1 * 10.0;
    double nota2 = n2 * 20.0;
    double nota3 = n3 * 30.0;
    double nota4 = n4 * 40.0;
    
    double nota = nota1 + nota2 + nota3 + nota4;
    
    double promedio = nota / 100.0;
    
    return promedio;
}


int main()
{
    srand(time(NULL));
    
    int n1 = rand() % (101);
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