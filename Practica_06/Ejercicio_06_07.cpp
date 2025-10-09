/* Materia: Programación I, Paralelo 4
Autor: Georgina Mishel Espinoza Mamani
Carnet: 9979732 L.P.
Carrera: Ingenieria Mecatrónica
Fecha creación: 06/10/2025
Número de ejercicio: 7
Problema planteado: Compresión de datos en una imagen en escala de grises: Dada una imagen en escala 
de grises representada por un vector de N valores entre 0 y 255 (estos valores deben ser 
generados aleatoriamente), agrupa los valores en segmentos de 10 unidades y muestra 
cuántos píxeles hay en cada rango.  */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> inferior;
vector<int> superior;

vector<int> generarAleatorios (){
    int n;
    cout << "Ingrese la longitud del vector a generar" << endl;
    cin >> n;
    
    vector<int> ra(n);
    
    for(int i = 0; i < n; i++){
        ra[i] = rand()%(256);//de 256 xq inicializa en 0
        cout << ra[i] << " ";
    }
    cout << endl;
    
    return ra;
}

void generarLimites (){//0, 10, 20,...
    int inf = 0;
    while(inf <= 250){
        inferior.push_back(inf);
        inf += 10;
    }
    
    int sup = 9;
    while(sup < 250){//9, 19, 29,...
        superior.push_back(sup);
        sup += 10;
    }
    superior.push_back(255);
}

vector<int> contarPixeles (vector<int> ra){
    int n = inferior.size();
    vector<int> seg (n, 0);
    int l = ra.size();//longitud
    for(int i = 0; i < l; i++){
        for(int j = 0; j < n; j++){
            if(ra[i] >= inferior[j] && ra[i] <= superior[j]){
                seg[j]++;
            }
        }
    }
    
    return seg;
}

void mostrar(vector<int> seg){
    int n = seg.size();
    for(int i = 0; i < n; i++){
        cout << inferior[i] << " - " << superior[i] << ": " << seg[i] << " pixel(es)" << endl;
    }
}

int main()
{
    generarLimites();
    vector<int> ra = generarAleatorios();
    vector<int> seg = contarPixeles(ra);
    mostrar(seg);

    return 0;
}