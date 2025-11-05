/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 31/10/2025
Número de ejercicio: Video 2
Problema planteado: Estructuras anidadas
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct info_direccion{
    char direccion[20];
    char ciudad[20];
    char provincia[20];
};

struct Empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main()
{
    //En estructuras anidadas es con iterador, xq en este caso son 2 clientes
    for (int i = 0; i < 2; i++)
    {
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre,20);
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion,20);
        cout<<"Digite su ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad,20);
        cout<<"Digite su provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia,20);
        cout<<"Digite su Salario: ";
        cin>>empleados[i].salario;
        cin.ignore();
        cout<<endl;

    }
    
    cout<<"\n Imprimendo datos\n";
    for (int i = 0; i < 2; i++)
    {
        
        fflush(stdin);
       
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        
    
        cout<<endl;
    }
    
    getch();
    return 0;
}