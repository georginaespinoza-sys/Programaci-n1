/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 14/10/2025
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
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));

    int matriz[50][50];
    int suma = 0;
    int producto = 1;

    int N;
    cout << "Ingrese el tamanio de la matriz (N x N): ";
    cin >> N;

    
    //Llenar la matriz
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            matriz[i][j] = rand()%50;
        }
    }

    //Mostrar la matriz
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    //Sumar la ultima columna
    for(int i=0 ; i<N ; i++){
        suma += matriz[i][N-1];
    }
    cout<<"La suma es: "<<suma<<endl;

    //Producto de la ultila fila
    for(int j=0 ; j<N ; j++){
        producto *= matriz[N-1][j];
    }
    cout<<"El producto es: "<<producto<<endl;


    //Mayor valor
    int mayor = matriz[0][0];
    int filaMayor = 0, columnaMayor = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                filaMayor = i;
                columnaMayor = j;
            }
        }
    }
    cout << "Mayor valor: " << mayor << ", posicion: (" << filaMayor << ", " << columnaMayor << ")" << endl;


    //Desviacion estandar
    double sumaTotal = 0, sumaCuadrados = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sumaTotal += matriz[i][j];
            sumaCuadrados += matriz[i][j] * matriz[i][j];
        }
    }
    double media = sumaTotal / (N * N);
    double desviacion = sqrt( (sumaCuadrados / (N * N)) - (media * media) );
    cout << "Desviacion estandar: " << desviacion << endl;



    return 0;
}