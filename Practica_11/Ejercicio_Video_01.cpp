/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 13/11/2025
Número de ejercicio: 1 Video
Problema planteado: Archivos Binarios
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Persona{
    char nombre[45]= "";
    char apellido1[30] = "";
    char apellido2[30] = "";
    long cedula = 0;
};

int menu(){
    int x = 0;
    cout<<"1. Agregar registro"<<endl;
    cout<<"2. Listar"<<endl;
    cout<<"3. Buscar"<<endl;
    cout<<"4. Eliminar"<<endl;
    cout<<"5. Modificar"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>x;
    return x;
}

Persona getPersona(long ced){
    fstream e("Archivos.txt",ios::out | ios::in | ios::binary);
    Persona aux;
    if (e.is_open())
    {
        e.seekg((ced-1)*sizeof(Persona));
        e.read((char*)&aux,sizeof(Persona));
        e.close();
    }
    return aux;
}

void agregarRegistro(){
    Persona p;
    cin.ignore();
    strcpy(p.nombre, getString("Ingresar nombre").c_str());
    strcpy(p.apellido1, getString("Ingresar apellido 1").c_str());
    strcpy(p.apellido2, getString("Ingresar apellido 2").c_str());
    p.cedula = getLog("Numero de Cedula");
    // Para verificar que la persona no exista o que no duplique informacion
    Persona aux = getPersona(p.cedula);
    if (aux.cedula != 0)
    {
        cout<<"Registro Ya existe"<<endl;
    }else{
        fstream e("Archivos.txt",ios::out | ios::in | ios::binary);
        if (e.is_open())
        {
            e.seekg((p.cedula-1)*sizeof(Persona));
            e.write((char*)&p,sizeof(Persona));
            e.close();
        }
    }
    
    
}

// Recuperacion del dato
long getLog(string mjs){
    long m;
    cout<<mjs<<endl;
    cin>>m;
    return m;
}

// Mensaje que se mostrara por consola
string getString(string mjs){
    string m;
    cout<<mjs<<endl;
    getline(cin, m);
    return m;
}

int main()
{
    int x = 0;
    do
    {
        x = menu();
        switch (x)
        {
        case 1:
            agregarRegistro();
            break;
        
        default:
            break;
        }
    } while (x != 6);
    
    return 0;
}