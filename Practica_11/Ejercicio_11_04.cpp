/*
Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 19/11/2025
Número de ejercicio: 4
Problema planteado: Realizar un programa que pida al usuario almacenar en un archivo binario llamado 
“ESTUDIANTES.BIN”, con los datos de los estudiante, por Ejemplo: 
• Carnet Identidad = 12345 
• Nombres = WILLY 
• Apellidos = TENORIO 
• Materia = PROGRAMACION I 
• Paralelo = 4 

Este programa debe tener un menú con las siguientes opciones: 
MENU NOTAS UCB 
1. Adicionar Estudiante (15 Puntos) 
2. Listado de Estudiantes Habilitados (30 Puntos) 
3. Eliminar una Estudiante (10 Puntos) 
4. Adicionar notas habilitación (15 Puntos)

El listado de notas de estudiantes habilitados es: 

CARNET  NOMBRES    APELLIDOS  MATERIA       PARALELO    NOTA HABILITACION       ESTADO 
12345   WILLY      TENORIO  PROGRAMACION I      4                   71.7       HABILITADO
 
Se debe tomar en cuenta que para poder habilitar una materia, TODAS las notas deben ser 
mayores o iguales a 60. Por ejemplo si el mismo estudiante del ejemplo anterior sus notas seria. 
12345; PROGRAMACION I; 4; 80; 33.33 
12345; PROGRAMACION I; 4; 50; 33.33 
12345; PROGRAMACION I; 4; 75; 33.34 

CARNET  NOMBRES   APELLIDOS  MATERIA         PARALELO   NOTA HABILITACION   ESTADO
12345   WILLY     TENORIO    PROGRAMACION I   4          68.4                 NO 
                                                                           HABLITADO, 
                                                                           TIENE UNA 
                                                                          NOTA MENOR A 
                                                                              60 
Por ultimo el listado debe sacar el promedio de las notas de habilitación. Que sería la suma de 
todas las notas del listado dividido entre la cantidad de estudiantes. 
*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Estudiante {
    char ci[15];
    char nombre[50];
    char apellidos[50];
    char materia[100];
    int paralelo;
    double nota1;
    double nota2;
    double nota3;
    double notaHabilitacion;
    bool habilitado;
};

const char* nombreArchivo = "ALUMNOS.BIN";//estudiantes ya esta siendo usado

Estudiante ingresar(){
    Estudiante es;
    cout << "Ingrese su CI: ";
    cin.ignore();
    cin.getline(es.ci, 15);
    cout << "Ingrese su nombre: ";
    cin.getline(es.nombre, 50);
    cout << "Ingrese sus apellidos: ";
    cin.getline(es.apellidos, 50);
    cout << "Ingrese la materia: ";
    cin.getline(es.materia, 100);
    cout << "Ingrese su paralelo: ";
    cin >> es.paralelo;
    es.nota1 = 0.0;
    es.nota2 = 0.0;
    es.nota3 = 0.0;
    es.notaHabilitacion = 0.0;
    es.habilitado = false;
    return es;
}

void AgregarEstudiante(){
    Estudiante es = ingresar();
    ofstream archivo(nombreArchivo, ios::binary | ios::app);
    if(!archivo.is_open()){
        cout << "Error al agregar" << endl;
        return;
    }
    archivo.write((char*)&es, sizeof(Estudiante));
    archivo.close();
    cout << "Registro exitoso"<< endl;
}

void mostrarEstudiantesHabilitados(){
    ifstream archivo(nombreArchivo, ios::binary);
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    cout << "\nCARNET  NOMBRES    APELLIDOS  MATERIA       PARALELO    NOTA HABILITACION       ESTADO" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    
    Estudiante es;
    double sumaNotas = 0.0;
    int contador = 0;
    
    while(archivo.read((char*)&es, sizeof(Estudiante))){
        // Calcular promedio y verificar habilitación
        double suma = es.nota1 + es.nota2 + es.nota3;
        double promedio = suma / 3.0;
        es.notaHabilitacion = promedio;
        
        // Verificar si todas las notas son >= 60
        bool todasAprobadas = (es.nota1 >= 60.0 && es.nota2 >= 60.0 && es.nota3 >= 60.0);
        es.habilitado = todasAprobadas;
        
        // Mostrar solo si está habilitado
        if(es.habilitado){
            cout << es.ci << "   " << es.nombre << "      " << es.apellidos << "  " << es.materia << "      " << es.paralelo << "               " << es.notaHabilitacion << "          HABILITADO" << endl;
            
            sumaNotas += es.notaHabilitacion;
            contador++;
        }
    }
    
    archivo.close();
    
    if(contador > 0){
        double promedioGeneral = sumaNotas / contador;
        cout << "\nPromedio general de notas de habilitacion: " << promedioGeneral << endl;
    } else {
        cout << "No hay estudiantes habilitados" << endl;
    }
}

void eliminarEstudiante(){
    ifstream archivo(nombreArchivo, ios::binary);
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    Estudiante es;
    vector<Estudiante> estudiantes;
    
    while(archivo.read((char*)&es, sizeof(Estudiante))){
        estudiantes.push_back(es);
    }
    archivo.close();
    
    if(estudiantes.empty()){
        cout << "No hay estudiantes registrados" << endl;
        return;
    }
    
    for(int i = 0; i < estudiantes.size(); i++){
        cout << "Estudiante numero " << i + 1 << endl;
        cout << "CI: " << estudiantes[i].ci << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Apellidos: " << estudiantes[i].apellidos << endl;
        cout << "------------------------" << endl;
    }
    
    cout << "Ingrese el numero de estudiante a eliminar: ";
    int eliminar;
    cin >> eliminar;
    
    if(eliminar < 1 || eliminar > estudiantes.size()){
        cout << "Numero invalido" << endl;
        return;
    }
    
    ofstream archivoEscritura(nombreArchivo, ios::binary);
    if(!archivoEscritura.is_open()){
        cout << "Error al crear el archivo" << endl;
        return;
    }
    
    for(int i = 0; i < estudiantes.size(); i++){
        if(i != eliminar - 1){
            archivoEscritura.write((char*)&estudiantes[i], sizeof(Estudiante));
        }
    }
    cout << "Eliminado exitosamente" << endl;
    archivoEscritura.close();
}

void adicionarNotas(){
    ifstream archivo(nombreArchivo, ios::binary);
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo" << endl;
        return;
    }
    
    Estudiante es;
    vector<Estudiante> estudiantes;
    int indice = 1;
    
    while(archivo.read((char*)&es, sizeof(Estudiante))){
        cout << "Estudiante numero: " << indice << endl;
        cout << "CI: " << es.ci << endl;
        cout << "Nombre: " << es.nombre << endl;
        cout << "Apellidos: " << es.apellidos << endl;
        cout << "------------------------" << endl;
        estudiantes.push_back(es);
        indice++;
    }
    archivo.close();
    
    if(estudiantes.empty()){
        cout << "No hay estudiantes registrados" << endl;
        return;
    }
    
    cout << "Ingrese el numero de estudiante para registrar notas: ";
    int registrar;
    cin >> registrar;
    
    if(registrar < 1 || registrar > estudiantes.size()){
        cout << "Numero invalido" << endl;
        return;
    }
    
    cout << "Ingrese nota 1: ";
    cin >> estudiantes[registrar-1].nota1;
    cout << "Ingrese nota 2: ";
    cin >> estudiantes[registrar-1].nota2;
    cout << "Ingrese nota 3: ";
    cin >> estudiantes[registrar-1].nota3;
    
    // Calcular promedio
    double suma = estudiantes[registrar-1].nota1 + estudiantes[registrar-1].nota2 + estudiantes[registrar-1].nota3;
    estudiantes[registrar-1].notaHabilitacion = suma / 3.0;
    
    // Verificar habilitación
    estudiantes[registrar-1].habilitado = (estudiantes[registrar-1].nota1 >= 60.0 && 
                                          estudiantes[registrar-1].nota2 >= 60.0 && 
                                          estudiantes[registrar-1].nota3 >= 60.0);
    
    // Guardar todos los datos actualizados
    ofstream archivoEscritura(nombreArchivo, ios::binary);
    if(!archivoEscritura.is_open()){
        cout << "Error al crear el archivo" << endl;
        return;
    }
    
    for(int i = 0; i < estudiantes.size(); i++){
        archivoEscritura.write((char*)&estudiantes[i], sizeof(Estudiante));
    }
    
    cout << "Notas registradas exitosamente" << endl;
    archivoEscritura.close();
}

void menu() {
    int opcion = 0;
    bool bandera = true;
    while(bandera){
        cout << "\n=== MENU NOTAS UCB ===" << endl;
        cout << "1. Adicionar estudiante" << endl;
        cout << "2. Listado de estudiantes habilitados" << endl;
        cout << "3. Eliminar un estudiante" << endl;
        cout << "4. Adicionar notas habilitacion" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion){
            case 1:
                AgregarEstudiante();
                break;
            case 2:
                mostrarEstudiantesHabilitados();
                break;
            case 3:
                eliminarEstudiante();
                break;
            case 4:
                adicionarNotas();
                break;
            case 5:
                bandera = false;
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    }
}

int main()
{
    menu();
    return 0;
}