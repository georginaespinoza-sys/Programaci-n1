/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 13/10/2025
Número de ejercicio: 3
Problema planteado: En la segunda temporada de The Walking Dead, los personajes llegaron a una cárcel para refugiarse. La cárcel 
estaba rodeada de vallas por lo que los muertos vivientes no podían entrar en ella.Sin embargo, dentro de las instalaciones aun 
existían muertos vivientes que amenazaban a los personajes.Por tanto, Rick y otros miembros del grupo decidieron ir a investigar 
las instalaciones con el fin de determinar cuáles eran los lugares seguros. Para lograr su objetivo construyeron un mapa basado 
en una matriz que indicaba las zonas seguras. Después de un tiempo, tu grupo llega al mismo complejo y encuentra el mapa hecho por
Rick. Para mantener a salvo a tus amigos decides diseñar e implementar un programa que te ayude a determinar las zonas seguras. 
Tu trabajo es determinar los siguientes datos: 
a) Mostrar la matriz que describe el área.  
b) Mostrar el número de filas y columnas que no tienen un muerto viviente.  
c) Determinar las coordenadas de los muertos vivientes en la matriz. Utilice vectores paralelos para almacenar la posición de 
los muertos vivientes. Un vector almacenara el índice de la fila y otro vector almacenara el índice de la columna.  
d) La cantidad de muertos vivientes que existen en toda la matriz.  
e) Determinar si dos o más muertos vivientes se encuentran en la primera columna. Si es así imprimir “no es posible entrar al 
complejo” de otro modo imprimir “es posible entrar al complejo”.  
NOTA 1.- INICIALIZE LA SIGUIENTE MATRIZ COMO CONSTANTE PARA PROBAR 
SU PROGRAMA 
x   o   x   o
o   o   o   o
o   o   x   o
Las "o" describen lugares seguros mientras que las "x" describen los lugares con un muerto viviente. 
NOTA 2.- AYUDA --> PUEDE DECLARAR DOS VARIABLES GLOBALES CONSTANTES PARA DETERMINAR EL TAMANO DE LA MATRIZ 
NOTA 3.- CADA INCISO DEBE SER RESUELTO CON UNA FUNCION ESTRICTAMENTE, EXCEPTO EL ULTIMO INCISO QUE NO REQUIERE DE UNA FUNCION.
*/

#include <iostream>
#include <vector>
using namespace std;

//Mostrar la matriz a)
void mostrar (char matriz[3][4]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }    
}
//b)
int muertosFilas (char matriz[3][4]){
    int filasLibres = 0;
    for(int i = 0; i < 3; i++){
        int muertos = 0;
        for(int j = 0; j < 4; j++){
            //Si la fila contiene x
            if(matriz[i][j] == 'x'){
                muertos++;
            }
        }
        if(muertos == 0){
            filasLibres++;
        }
    }
    
    return filasLibres;
}
//b)
int muertosColumnas (char matriz[3][4]){
    int columnasLibres = 0;
    for(int j = 0; j < 4; j++){
        int muertos = 0;
        for(int i = 0; i < 3; i++){
            //Si la columna contiene x
            if(matriz[i][j] == 'x') {
                muertos++;
            }
        }
        if(muertos == 0){
            columnasLibres++;
        }
    }
    return columnasLibres;
}

//Vectores pareados
vector<pair<int,int>> hallarMuertos (char matriz[3][4]) {
    vector<pair<int,int>> muertos;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] == 'x'){
                muertos.push_back({i,j});
            }
        }
    }
    return muertos;
}

int cantidadTotal (char matriz[3][4]){
    int muertos = 0;
    
    for(int i = 0; i < 3; i++){
        for( int j = 0; j < 4; j++){
            if(matriz[i][j] == 'x'){
                muertos++;
            }
        }
    }
    return muertos;
}

int muertosColumna1 (char matriz[3][4]) {
    
    int muertos2 = 0;
    for(int i = 0; i < 3;i++){
        if(matriz[i][0] == 'x'){
            muertos2++;
        }
    }
    return muertos2;
}

int main()
{
    char matriz[3][4] = {{'x', 'o', 'x', 'o'}, {'x', 'o', 'o', 'o'}, {'x', 'o', 'x', 'o'}};
    cout << "a) Mostrar la matriz" << endl;
    mostrar(matriz);
    cout << endl;
    
    cout << "b) Filas y columnas sin muertos vivientes: " << endl;
    int filas = muertosFilas(matriz);
    int columnas = muertosColumnas(matriz);
    cout << "la cantidad de filas libres de muertos vivientes es: " << filas << endl;
    cout << "La cantidad de columnas libres de muertos vivientes es: " << columnas << endl;
    cout << endl;
    
    cout << "c) Posiciones de los muertos" << endl;
    vector<pair<int, int>> muertos = hallarMuertos(matriz);
    cout << "Los muertos estan en las posiciones: " << endl;
    for(int i = 0; i < muertos.size(); i++){ 
        cout << "(" <<muertos[i].first << "," << muertos[i].second << ")" << endl;
    }
    cout << endl;
    
    cout << "d) Cantidad total de muertos" << endl;
    int muertosTotales = cantidadTotal(matriz);
    cout << "La cantidad total de muertos que hay son: " << muertosTotales << endl;
    cout << endl;
    
    cout << "e) Se puede entrar al complejo o no" << endl;
    int primeraColumna = muertosColumna1(matriz);
    cout << "Hay " << primeraColumna << " muertos en la primera columna" << endl;
    if(primeraColumna <= 2){
        cout << "Es posible entrar al complejo" << endl;
    } else {
        cout << "No es posible entrar al complejo" << endl;
    }
    return 0;
}