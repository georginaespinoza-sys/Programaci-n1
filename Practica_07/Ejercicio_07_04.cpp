/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 12/10/2025
Número de ejercicio: 4
Problema planteado: Generar la matriz para un orden nxn 
Sea n=5 
1       2       3       4       5
3       4       5       6       7
5       6       7       8       9
7       8       9       10      11
9       10      11      12      13
*/

#include <iostream>

using namespace std;

int main()
{
    
    int matriz[5][5];

    //Llenar la matriz*
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = (1 + 2 *i) + j;
        }
    }

    cout<<"La matriz es"<<endl;
    //Mostrar la matriz original
    for(int i=0 ; i<5 ;i++){
        for(int j=0 ; j<5 ; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}