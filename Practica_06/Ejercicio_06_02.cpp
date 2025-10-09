// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 05/10/2025
// Número de ejercicio: 2
// Problema planteado:Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y   
// otro contiene los nombres de estos minerales,para obtener: 
// • Buscar por nombre de mineral y desplegar la producción 
// • Ordenar del mayor al menor (producción) y mostrar:  
// Mineral           Produccion 
// SN                998.000 
// SB                876.500
// AU                786.670 
// PT                636.143
// AG                135.567 
// CU                109.412 

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

double buscarProduccion(vector< string>& nombres, vector<double>& produccion, string& mineral){
    for(int i=0 ; i<nombres.size() ; i++){
        if(nombres[i] == mineral){
            return produccion[i];
        }
    }
    return -1;//el mineral no se encontro
}

void ordenarMinerales(vector<string>& nombres, vector<double>& produccion){
    int N = nombres.size();
    for(int i=0 ; i<N-1 ; i++){
        //recorre los elementos que aun no estan ordenados. Cada vez que termina una pasada, el mayor ya está en su lugar, asi que se reduce el rango
        for(int j=0 ; j<N-1-i ; j++){
            if(produccion[j] < produccion[j + 1]){//cuantas veces se repite el proceso de comparacion
                double prod = produccion[j];
                produccion[j]=produccion[j + 1];//a la posicion actual
                produccion[j + 1] = prod;

                string nom = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = nom;
            }
        }
    }
}

void mostrarMinerales(vector<string>& nombres, vector<double>& produccion){
    cout<<"\nMineral\t\tProduccion TM\n";
    for(int i=0 ; i<nombres.size() ; i++){
        cout<<nombres[i] <<"\t\t"<<produccion[i]<<endl;
    }
}

int main()
{
    vector<string> nombres = {"SN","SB","AU","PT","AG","CU"};
    vector<double> produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    string mineral;
    cout<<"Ingrese el nombre del mineraL (SN, SB, AU, PT, AG, CU):\n";
    cin>>mineral;

    double prod=buscarProduccion(nombres, produccion, mineral);
    if(prod!= -1){
        cout<<"El mineral "<<mineral<<" tiene una produccion de " << prod<<endl;
    }else{
        cout<<"MineraL no encontrado"<<endl;
    }
    ordenarMinerales(nombres, produccion);
    mostrarMinerales(nombres, produccion);

    return 0;
}