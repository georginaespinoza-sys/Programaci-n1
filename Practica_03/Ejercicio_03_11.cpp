#include <iostream>

using namespace std;

double retirarDinero (double saldo, int cantidad){
    if(saldo < cantidad){
        cout << "No tiene saldo suficiente" << endl;
        return 0.0;
    }
    
    if(cantidad % 10 != 0){
        cout << "La cantidad no es valida para retirar" << endl;
        return 0.0;
    }
    
    cout << "El retiro es valido" << endl;
    return saldo - cantidad;
}


int main()
{
    double saldo;
    int cantidad;
    cout << "Ingrese el saldo: " << endl;
    cin >> saldo;
    cout << "Ingrese la cantidad a retirar" << endl;
    cin >> cantidad;
    
    double nuevoSaldo = retirarDinero(saldo, cantidad);
    
    if(nuevoSaldo == 0){
        cout << "No se realizo la transaccion" << endl;
    } else {
        cout << "Su saldo actual es de: " << nuevoSaldo << endl;
    }
    return 0;
}