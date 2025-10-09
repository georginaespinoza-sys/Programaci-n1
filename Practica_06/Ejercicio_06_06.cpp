/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 08/10/2025
Número de ejercicio: 6
Problema planteado:  Rango de calificaciones en un curso: Un maestro tiene N calificaciones de sus 
estudiantes en un vector. Las calificaciones deben ser llenadas en forma aleatoria entre 0 y 100. 
Luego debe calcular el porcentaje de estudiantes en cada rango: 
• 0-59 (Reprobado) 
• 60-79 (Regular) 
• 80-89 (Bueno) 
• 90-100 (Excelente)  */

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

vector<int> Calificaciones(int N){
    vector<int>calif;
    for(int i=0 ; i<N ; i++){
        calif.push_back(rand()%101);
    }
    return calif;//retornarlo como numero rand
}

void EstudiantesNota(vector<int>&calif){
    int repro = 0, regu = 0,bue = 0,  exce = 0;
    int N = calif.size();
    for(int nota:calif){//se registra en el vector
        if(nota<=59){
            repro++;
        }else if(nota<=79){
            regu++;
        }else if(nota<=89){
            bue++;
        }else if(nota<=100){
            exce++;
        }
    }
    cout<<"Reprobado "<<(repro*100/N)<<endl;//porcentaje
    cout<<"Regular "<<(regu*100/N)<<endl;
    cout<<"Bueno "<<(bue*100/N)<<endl;
    cout<<"Excelente "<<(exce*100/N)<<endl;

}

int main()
{
    srand(time(NULL));

    int N;
    cout<<"Cantidad de estudiantes: \n";
    cin>>N;

    vector<int>califi=Calificaciones(N);

    for(int cal:califi){
        cout<<cal<<" ";
    }
    cout<<endl;

    EstudiantesNota(califi);


    return 0;
}