/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 10/10/2025
Número de ejercicio: 2 video
Problema planteado: Hacer un programa para rellenar una matriz pidiendo al usuario el numero
de filas y columnas, posteriormente mostrar la matriz en pantalla
*/

#include <iostream>

using namespace std;

int main()
{

    int matriz[50][50];
    int filas,columnas;

    cout<<"Introduce el numero de filas: ";
    cin>>filas;
    cout<<"Introduce el numero de columnas: ";
    cin>>columnas;

    //Almacenando elementos en la matriz
    for(int i=0 ; i<filas ; i++){
        for(int j=0 ; j<columnas ; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    //Mostrando la matriz
    cout<<"La matriz es:"<<endl;
    for(int i=0 ; i<filas ; i++){
        for(int j=0 ; j<columnas ; j++){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }


    cout<<endl;
    cout<<endl;

    /*
    EJERCICIO DEL FINAL DEL VIDEO
    Realiza un programa que defina una matriz de 3*3 y escriba un ciclo
    para que muestre la diagonal principal de la matriz
    */

    int mat[3][3] = {1,2,3,4,5,6,7,8,9};
    cout<<"La matriz principal es:"<<endl;
    for(int i=0 ; i<3 ; i++){
        //misma fila y columna
        cout<<mat[i][i]<<"\t";
    }

    return 0;
}