// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera: Ingenieria Mecatrónica
// Fecha creación: 04/10/2025
// Número de ejercicio: 1
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1)
// y a partir de este arreglo determine la desviación típica.

#include <iostream>
#include <string.h>
#include <vector>
#include <cmath>

using namespace std;

vector <int> IngresarEdades(){
    vector<int>edades;
    int edad;
    cout<<"Ingrese las edades(culmina con -1)\n";
    cin>>edad;
    while(edad!= -1){
        edades.push_back(edad);
        cin>>edad;
    }
    return edades;
}


double CalcularMedia(vector <int> &datos){
    double suma=0.0;
    for(int edad : datos){
        suma+=edad;
    }
    double media = suma/(double)datos.size();
    return media;
}


double CalcularVariacion(vector <int> &datos, double media){//const es para que los datos sean de solo lectura por referencia
    double variacion=0;
    for(int edad : datos){
        variacion+=pow((edad-media), 2);
    }
    double varianza=variacion/(double)datos.size();
    return varianza;
}


int main()
{
    vector <int> edades=IngresarEdades();
    if (edades.size() == 0){// verifica si esta vacio
        cout<<"No valido"<<endl;
    }
    cout<<"Edades ingresadas \n";
    for(int i=0 ; i<edades.size() ; i++){
        cout<<edades[i];
        if(i< edades.size() - 1){
            cout<<" ";
        }
    }
    cout<<endl;


    double promedio = CalcularMedia(edades);
    double variacion = CalcularVariacion(edades, promedio);
    double desviacion=sqrt(variacion);//raiz
    
    cout<<"La desviacion de los datos es: "<<desviacion;
    
    return 0;
}