/* 
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 13/11/2025
Número de ejercicio: 1
Problema planteado: Escribe un programa que tenga un menú de tres opciones:

• Ingreso de datos estudiantes.
• Ingreso de materias y notas.
• Reporte de estudiantes y notas ingresadas.
• Salir

La primera opción debe ingresar los datos personales de un estudiante de acuerdo con la
siguiente estructura y estos sean almacenados en un archivo binario llamado “Estudiantes.bin”,
se debe considerar en no duplicar al estudiante con el mismo ci:

struct structEstudiante
{
 char ci[10];
 char nombres[30];
 char apellidos[30];
};

La segunda opción debe ingresar las notas de los estudiantes de acuerdo con la siguiente
estructura, se debe considerar no duplicar la nota de una materia y no ingresar una nota de un
estudiante que no existe:

struct structNotas
{
 char ci[10];
 char materia[30];
 int nota;
};

La tercera opcion debe dar un reporte de la lista de los estudiantes ingresados y las notas que
tiene asignadas.
*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

struct structEstudiante{
    char CI[10];
    char nombres[30];
    char apellidos[30];
};

struct structNotas{
    char CI[10];
    char materia[30];
    int nota;
};

const char* nombreArchivoEst = "Estudiantes.bin";
const char* nombreArchivoNota = "notas.bin";

// Verificar si ya existe un estudiante con la misma CI
bool existeEstudiante(char* ci) {
    ifstream archivo(nombreArchivoEst, ios::binary);
    if (!archivo.is_open()) {
        return false;
    }
    
    structEstudiante estudiante;
    while (archivo.read((char*)&estudiante, sizeof(structEstudiante))) {
        if (strcmp(estudiante.CI, ci) == 0) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}

// Funcion para verificar si ya existe una nota para la misma materia y estudiante
bool existeNota(char* ci, char* materia) {
    ifstream archivo(nombreArchivoNota, ios::binary);
    if (!archivo.is_open()) {
        return false;
    }
    
    structNotas nota;
    while (archivo.read((char*)&nota, sizeof(structNotas))) {
        if (strcmp(nota.CI, ci) == 0 && strcmp(nota.materia, materia) == 0) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}

structEstudiante IngresoDatosEstudiante(){
    structEstudiante estudiante;
    cout << "Ingrese la cedula de identidad del estudiante: ";
    cin.getline(estudiante.CI, 10);
    
    // Verificar si el estudiante ya existe
    if (existeEstudiante(estudiante.CI)) {
        cout << "Error: Ya existe un estudiante con esta CI." << endl;
        estudiante.CI[0] = '\0'; // Marcar como invalido
        return estudiante;
    }
    
    cout << "Ingrese su nombre: ";
    cin.getline(estudiante.nombres, 30);
    cout << "Ingrese su apellido: ";
    cin.getline(estudiante.apellidos, 30);
    return estudiante;
}

void escribirArEst(){
    structEstudiante es = IngresoDatosEstudiante();
    
    // Si el estudiante ya existe, no guardar
    if (es.CI[0] == '\0') {
        return;
    }
    
    ofstream archivo(nombreArchivoEst, ios::binary | ios::app);
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    archivo.write((char*)&es, sizeof(structEstudiante));
    archivo.close();
    cout << "Registro exitoso"<< endl;
}

structNotas IngresoNotas(){
    structNotas notas;
    cout << "Ingrese la cedula de identidad: ";
    cin.getline(notas.CI, 10);
    
    // Verificar si el estudiante existe
    if (!existeEstudiante(notas.CI)) {
        cout << "Error: No existe un estudiante con esta CI." << endl;
        notas.CI[0] = '\0'; // Marcar como inválido
        return notas;
    }
    
    cout << "Ingrese la materia: ";
    cin.getline(notas.materia, 30);
    
    // Verificar si ya existe una nota para esta materia y estudiante
    if (existeNota(notas.CI, notas.materia)) {
        cout << "Error: Ya existe una nota para esta materia y estudiante." << endl;
        notas.CI[0] = '\0'; // Marcar como inválido
        return notas;
    }
    
    cout << "Ingrese la nota: ";
    cin >> notas.nota;
    cin.ignore(); // Limpiar el buffer después de leer un número
    
    return notas;
}

void ingresarNotasAr() {
    structNotas no = IngresoNotas();
    
    // Si hay algun error, no guardar
    if (no.CI[0] == '\0') {
        return;
    }
    
    ofstream archivo(nombreArchivoNota, ios::binary | ios::app);
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    archivo.write((char*)&no, sizeof(structNotas));
    archivo.close();
    cout << "Registro exitoso"<< endl;
}

void reporte(){
    ifstream ar1(nombreArchivoEst, ios::binary);
    
    if (!ar1.is_open()) {
        cout << "No hay estudiantes registrados." << endl;
        return;
    }
    
    structEstudiante es;
    structNotas no;
    bool hayEstudiantes = false;
    
    while (ar1.read((char*)&es, sizeof(structEstudiante))){
        hayEstudiantes = true;
        cout << "CI: " << es.CI << endl;
        cout << "Nombre: " << es.nombres << endl;
        cout << "Apellidos: " << es.apellidos << endl;
        
        // Buscar notas para este estudiante
        ifstream ar2(nombreArchivoNota, ios::binary);
        bool tieneNotas = false;
        
        if (ar2.is_open()) {
            while(ar2.read((char*)&no, sizeof(structNotas))){
                if(strcmp(es.CI, no.CI) == 0){
                    if (!tieneNotas) {
                        cout << "  Notas:" << endl;
                        tieneNotas = true;
                    }
                    cout << "    Materia: " << no.materia << " - Nota: " << no.nota << endl;
                }
            }
            ar2.close();
        }
        
        if (!tieneNotas) {
            cout << "  No tiene notas registradas." << endl;
        }
        cout << "------------------------" << endl;
    }
    
    ar1.close();
    
    if (!hayEstudiantes) {
        cout << "No hay estudiantes registrados." << endl;
    }
}

int main()
{
    int opcion;
    do
    {
        cout << "\n=== MENU PRINCIPAL ===" << endl;
        cout << "1. Ingreso de datos de estudiantes" << endl;
        cout << "2. Ingreso de materias y notas" << endl;
        cout << "3. Reporte de estudiantes y notas ingresadas" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            escribirArEst();
            break;
        case 2:
            ingresarNotasAr();
            break;
        case 3:
            reporte();
            break;
        case 4:
            cout << "Saliendo...." << endl;
            break;
        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
            break;
        }

    } while (opcion != 4);
    
    return 0;
}