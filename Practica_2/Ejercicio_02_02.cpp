//Materia: Programacion I, Paralelo 4
//Autor: Georgina Mishel Espinoza Mamani
//Carnet: 9979732 L.P.
//Carrera de estudiante: Ingenieria de Mecatronica
//Fecha creacion: 07/09/2025
//Numero de ejercicio: 2


#include <iostream>
#include <cstdlib> // Para la función rand() y srand()
#include <ctime>   // Para la función time()

using namespace std;

int main() {
    
    int numero;
    int cara=0;
    int cruz=0; 
    float porcentaje_cara;
    float porcentaje_cruz;
    cout << "Ingrese el numero de lanzamientos: "<<endl;
    cin >> numero;
           
    srand(time(NULL));
    if(numero>0)
    {
      for(int i=0; i<numero; i++ )
      {
        if(rand()%2 == 0){
            cara++;
        }
        else{
            cruz++;
        }
      }
    porcentaje_cara = (cara*1.0/numero)*100;
    porcentaje_cruz =(cruz*1.0/numero)*100;
    
    cout<<cara<<" caras y su porcentaje "<<porcentaje_cara<<endl;
    cout<<cruz<<" cruz y su porcentaje "<<porcentaje_cruz<<endl;
    }
    else{
        cout<<"No menores a 0";
    }
    return 0;
}