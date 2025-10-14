/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 12/10/2025
Número de ejercicio: 4 Video
Problema planteado: Matriz transpuesta: Realice un programa que lea
una matriz de 3*3 y cree su matriz transpuesta. La matriz transpuesta
es aquella en la que la columna i era la fila i de la matriz original.
1   2   3           1   4   7
4   5   6   --->    2   5   8
7   8   9           3   6   9
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int numeros[3][3];

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<"Digite los numero:["<<i<<"]["<<j<<"]:";
            cin>>numeros[i][j];
        }
    }

    cout<<"Matriz original"<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<numeros[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"Matriz transpuesta"<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<numeros[j][i]<<"  ";
        }
        cout<<endl;
    }

    //EJERCICIO DEL FINAL DEL VIDEO
    //Realice un programa que calcule la suma de 2 matrices 3*3

    int matriz[3][3];
    int matriz2[3][3];
    int temp[3][3];
    
    //Almacenar
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<"Ingrese los valores de la primera matriz: ["<<i<<"]["<<j<<"]:";
            cin>>matriz[i][j];
        }
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<"Ingrese los valores de la segunda matriz: ["<<i<<"]["<<j<<"]:";
            cin>>matriz2[i][j];
        }
    }

    cout<<"Primera matriz original"<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Segunda matriz original"<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<matriz2[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            
            temp[i][j]=matriz[i][j]+matriz2[i][j];
        }
    }

    cout<<endl;
    cout<<"Suma de matrices"<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<temp[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}