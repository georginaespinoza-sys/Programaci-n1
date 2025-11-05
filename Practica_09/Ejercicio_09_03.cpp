/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 01/11/2025
Número de ejercicio: 3
Problema planteado: Desarrolle una estructura que guarde los datos de los n alumnos de 
la materia Programación I y los muestres por pantalla, la estructura debe tener los 
siguientes datos: 

• cedula (entero) 
• nombre (cadena de caracteres) 
• apellido (cadena de caracteres) 
• edad (entero) 
• profesión (cadena de caracteres) 
• lugar_nacimiento (cadena de caracteres) 
• dirección (cadena de caracteres) 
• teléfono (entero) 
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Alumno{
    int cedula;
    char nombre[30];
    char apellido[30];
    int edad;
    char profesion[30];
    char lugar_nacimiento[30];
    char direccion[30];
    int telefono;
};

//Llenar datos del alumno
void DatosDeAlumnos(Alumno alumnos[], int &n){
    cout<<"Digite el numero de alumnos: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Digite su cedula: ";
        cin>>alumnos[i].cedula;
        cin.ignore();
        cout<<"Digite el nombre: ";
        cin.getline(alumnos[i].nombre,30);
        cout<<"Digite el apellido: ";
        cin.getline(alumnos[i].apellido,30);
        cout<<"Digite su edad: ";
        cin>>alumnos[i].edad;
        cin.ignore();
        cout<<"Digite su profesion: ";
        cin.getline(alumnos[i].profesion,30);
        cout<<"Digite su lugar de nacimiento: ";
        cin.getline(alumnos[i].lugar_nacimiento,30);
        cout<<"Digite su direccion: ";
        cin.getline(alumnos[i].direccion,30);
        cout<<"Digite su telefono: ";
        cin>>alumnos[i].telefono;
    }
}

void MostrarDatos(Alumno alumnos[], int n){
    cout<<"-----------------------------------------";
    cout<<"\nDatos Guardados\n\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Cedula "<<i+1<<" : "<<alumnos[i].cedula<<endl;
        cout<<"Nombre "<<i+1<<" : "<<alumnos[i].nombre<<endl;
        cout<<"Apellido "<<i+1<<" : "<<alumnos[i].apellido<<endl;
        cout<<"Edad "<<i+1<<" : "<<alumnos[i].edad<<endl;
        cout<<"Profesion "<<i+1<<" : "<<alumnos[i].profesion<<endl;
        cout<<"Lugar de Nacimiento "<<i+1<<" : "<<alumnos[i].lugar_nacimiento<<endl;
        cout<<"Direccion "<<i+1<<" : "<<alumnos[i].direccion<<endl;
        cout<<"Telefono "<<i+1<<" : "<<alumnos[i].telefono<<endl;
        cout<<endl;
    }
}

int main()
{
    Alumno alumnos[50];
    int n;
    DatosDeAlumnos(alumnos,n);
    MostrarDatos(alumnos,n);

    getch();
    return 0;
}