/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 08/10/2025
Número de ejercicio: 5
Problema planteado: Intersección de dos listas de clientes: dos empresas tienen listas de clientes y quieren 
saber cuántos clientes tienen en común. Escribe un programa que compare dos vectores 
de nombres y muestre los clientes repetidos. */

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector<string>ListaUno(){
    return {"Pedro", "Elizabet", "Tomas", "Alvin", "Zipora"};
    
}

vector<string>ListaDos(){
    return {"Pedro", "Ana", "Maribel", "Teodoro", "Alvin", "Simon"};
}

void ClientesRepetidos(vector<string>& listaUno, vector<string>&listaDos){
    cout<<"De las dos empresas\n";
    for(string& clienteUno:listaUno){
        for(string& clienteDos:listaDos){
           if( clienteUno == clienteDos){
            cout<< clienteUno <<" es el cliente comun de las dos empresas"<<endl;
           }
        }
    }
}

int main()
{
    vector<string> listaUno=ListaUno();
    vector<string> listaDos=ListaDos();

    ClientesRepetidos (listaUno, listaDos);
    
    return 0;
}