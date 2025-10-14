/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 12/10/2025
Número de ejercicio: 3 Video
Problema planteado: Copiar el contenido de una matriz a otra matriz: Hacer una matriz
de tipo enter 2*2, llenarla de numeros y luego copiar todo su contenido hacia otra matriz 
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));


    int matriz[2][2]={{1,2},{3,4}};
    int matriz2[2][2];

    //Intercambiando matrices
    for(int i=0 ;i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            matriz2[i][j] = matriz[i][j];
        }
    }

    //Mostrar resultado
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            cout<<matriz2[i][j]<<"\n";
        }
    }

    cout<<endl;
    cout<<endl;

    //EJERCICIO DEL FINAL DEL VIDEO
    //Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla
    //de numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en pantalla

    int fila2 , columna2;
    int matriz3[100][100];
    int matriz4[100][100];
    cout<<"Ingrese el numero de filas: ";
    cin>>fila2;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columna2;

    //Llenando la matriz
    for(int i=0 ; i<fila2 ; i++){
        for(int j=0 ; j<columna2 ; j++){
            matriz3[i][j] = rand()%(100);
        }
    }

    //Intercambiar la matriz
    for(int i=0 ; i<fila2 ; i++){
        for(int j=0 ; j<columna2 ; j++){
            matriz4[i][j] = matriz3[i][j];
        }
    }

    //Mostrar la matriz
    for(int i=0 ; i<fila2 ; i++){
        for(int j=0 ; j<columna2 ; j++){
            cout<<matriz4[i][j]<<"\t";
        }
    }
    return 0;
}

