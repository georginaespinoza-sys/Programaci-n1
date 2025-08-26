// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Carnet: 9979732 L.P.
// Carrera del estudiante: Ingeniería de Mecatrónica
// Fecha creación: 25/08/2025
// Número de ejercicio: 4

#include <iostream> 

using namespace std;

int main()
{
   float pi;
   float radio_de_la_esfera;
   float volumen_de_la_esfera;

   cout<<"Radio de la esfera: " <<endl;
   cin>>radio_de_la_esfera;

   volumen_de_la_esfera=(4/3)*pi*(radio_de_la_esfera*radio_de_la_esfera*radio_de_la_esfera);//por formula

   if(radio_de_la_esfera<0)
{
    cout<< "Mayor a 0: " <<endl;
}else{
    cout<<"Volumen de la esfera: " <<volumen_de_la_esfera<<endl;
}

    return 0;
}