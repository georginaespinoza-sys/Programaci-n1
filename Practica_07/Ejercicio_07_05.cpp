/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 12/10/2025
Número de ejercicio: 5
Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N 
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz1[3][4] = {{1,2,3,9},{4,5,6,2},{7,8,9,1}};
    int matriz2[4][3] = {{2,4,6},{8,0,1},{2,3,7},{7,4,2}};
    int resultado[3][3];

    for(int i=0 ; i<3 ; i++){
        for (int j = 0; j < 3; j++){
            resultado[i][j] = 0;
            for(int k=0 ; k<4 ;k++){
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
        
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<resultado[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}