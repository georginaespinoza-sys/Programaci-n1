/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 14/10/2025
Número de ejercicio: 6
Problema planteado: Traspones una matriz de N x M
1   0
2   4       =       1   2   3
3   5               0   4   5
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[4][3];
    int matriz2[3][4];

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<"Ingrese los datos: ["<<i<<"]["<<j<<"]:";
            cin>>matriz[i][j];
        }
    }

    
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }

    
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<3 ; j++){
            matriz2[j][i] = matriz[i][j];
        }
        cout<<endl;
    }

    cout<<"Matriz transpuesta"<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<matriz2[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}