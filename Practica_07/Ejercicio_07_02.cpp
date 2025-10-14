/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 12/10/2025
Número de ejercicio: 2
Problema planteado: Generar una matriz de N x N con números al azar entre A y B, y determinar: 
• La suma de la última columna 
• El producto total de la última fila 
• Obtener el mayor valor y su posición 
• Obtener la desviación estándar de todos los elementos de la matriz 
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));

    int fila, columna;
    int matriz[50][50];
    int suma = 0;
    int producto = 1;

    cout<<"Ingrese la fila";
    cin>>fila;
    cout<<"Ingrese la columna";
    cin>>columna;
    
    //Llenar la matriz
    for(int i=0 ; i<fila ; i++){
        for(int j=0 ; j<columna ; j++){
            matriz[i][j] = rand()%50;
        }
    }

    //Mostrar la matriz
    for(int i=0 ; i<fila ; i++){
        for(int j=0 ; j<columna ; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    //Sumar la ultima columna
    for(int i=0 ; i<fila ; i++){
        suma += matriz[i][columna-1];
    }
    cout<<"La suma es: "<<suma<<endl;

    //Producto de la ultila fila
    for(int j=0 ; j<columna ; j++){
        producto *= matriz[fila-1][j];
    }
    cout<<"El producto es: "<<producto;


    return 0;
}