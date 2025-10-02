// Materia: Programación I, Paralelo 4
// Autor: Georgina Mishel Espinoza Mamani
// Fecha creación: 30/09/2025
// Número de ejercicio: 3
//Problema planteado:Escriba un programa para introducir los N números enteros en un arreglo llamado calificaciones.
//Después que todos los números son introducidos obtener:
//• La suma total de calificaciones
//• El promedio de los números
//• Use el promedio para determinar la desviación de cada valor del promedio.
//• Almacene cada desviación en un arreglo llamado desviación. Cada desviación se obtiene como el valor del elemento menos el promedio
// de todos los datos. Haga que su programa despliegue cada desviación al lado de su elemento correspondiente del arreglo calificaciones.
//• Calcule la varianza de los datos usados. La varianza se obtiene elevando al cuadrado cada desviación individual y dividiendo la suma 
//de las desviaciones cuadradas entre el número de desviaciones.

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> ingresar (){
    cout << "Ingrese la cantidad de calificaciones" << endl;
    int n;
    cin >> n;
    
    vector<int> calificaciones(n);
    
    for(int i = 0; i < n; i++){
        cout << "Ingrese la calificacion " << i + 1 << ":\n";
        cin >> calificaciones[i];
    }
    
    return calificaciones;
}

double suma (vector<int> calificaciones){
    double s = 0.0;//suma
    int n = calificaciones.size();
    for(int i = 0; i < n; i++){
        s += calificaciones[i];
    }
    
    return s;
}

double promedio (double suma, int n){
    double prom = suma / n;
    return prom;
}

vector<double> diferencias (vector<int> calificaciones, double prom){//resta
    int n = calificaciones.size();
    vector<double> dif(n);
    cout << "Las diferencias son: " << endl;
    for(int i = 0; i < n; i++){
        dif[i] = calificaciones[i] - prom;
        cout << dif[i] << "\t";
    }
    cout << endl;
    
    return dif;
}

double desviacion (vector<double> dif){
    int n = dif.size();
    double s = 0.0;
    for(int i = 0; i < n; i++){
        s += pow(dif[i], 2);//dif elevado al cuadrado
    }
    
    double v = s / (n - 1);
    
    double des = sqrt(v);
    
    return des;
}

int main()
{
    vector<int> calificaciones = ingresar();
    double sum = suma(calificaciones);
    cout << "La suma de las notas es: " << sum << endl;
    int n = calificaciones.size();
    double prom = promedio(sum, n);
    cout << "El promedio de calificaciones es: " << prom << endl;
    vector<double> desv = diferencias(calificaciones, prom);
    double des = desviacion(desv);
    
    cout << "La desviacion estandar es: " << des << endl;
    return 0;
}