/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 12/10/2025
Número de ejercicio: 1
Problema planteado: Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 
por la fila n. 
Por ejemplo, si la matriz que da el usuario es: 
{{4,7,1,3,5},{2,0,6,9,7},{3,1,2,6,4}}
Entonces el programa debe escribir la matriz:
{{3,1,2,6,4},{2,0,6,9,7},{4,7,1,3,5}}
*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[50][50];
    int fila, columna;
    

    cout<<"Introduzca una matriz"<<endl;
    cout<<"Introduzca la fila: ";
    cin>>fila;
    cout<<"Introduzca la columna: ";
    cin>>columna;
   
    //Almacenando elementos en la matriz
    for(int i=0 ; i<fila ;i++){
        for(int j=0 ; j<columna ; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
            cin>>matriz[i][j];
        }   
    }

    cout<<"La matriz es"<<endl;

    //Mostrando la matriz original
    for(int i=0 ; i<fila ; i++){
        for(int j=0 ; j<columna ; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    
    cout<<"La nueva matriz es"<<endl;

    //Intercambiando fila 0 por fila n-1
    for(int j=0 ; j<fila ; j++){
       int temp = matriz[0][j];
       matriz[0][j] = matriz[fila-1][j];
       matriz[fila-1][j] = temp;
    }

    //Mostrando la matriz
    for(int i=0 ; i<fila ; i++){
        for(int j=0 ; j<columna ; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}