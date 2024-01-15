#include <iostream>
using namespace std;

int main() {
    float saldo = 800.0;

    int opcion;

    float cantidad;
     //cajero automatico y sus opciones
    while (true) {
        cout << "Cajero Automatico HM" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Realizar un deposito" << endl;
        cout << "3. Realizar un retiro" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        //opciones
        switch (opcion) {
            case 1:
                cout << "Esto es tu saldo actualmente: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad a depositar: $";
                cin >> cantidad;
                saldo += cantidad;
                cout << "Se ha depositado $" << cantidad << " en su cuenta." << endl;
                break;
            case 3:
                cout << "Ingrese el monto que desea retirar: $";
                cin >> cantidad;
                if (cantidad <= saldo) {
                    saldo -= cantidad;
                    cout << "Retiro $" << cantidad << " de su cuenta." << endl;
                } else {
                    cout << "poco saldo." << endl;
                }
                break;
            case 4:
                cout << "Gracias por utilizar nuestro Cajero Automatico HM. \nHasta pronto" << endl;
                return 0;
            default:
                cout << "Error.Por favor, seleccione una opcion válida." << endl;
                break;
        }

        cout << "\n-----------------------------------------\n" << endl;
    }
}
