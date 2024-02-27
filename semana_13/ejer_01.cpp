#include <iostream>
#include <string>
using namespace std;

class Carro {
public:
    string marca;
    string modelo;
    string color;
    int years;
    float precio;
    int id;
    int num_asientos;
    int cilindrada;

    void ingresarDatos() {
        cout << "Ingrese la marca del automovil: ";
        getline(cin, marca);
        cout << "Ingrese el modelo del automovil: ";
        getline(cin, modelo);
        cout << "Ingrese el years del automovil: ";
        cin >> years;
        cout << "Ingrese el precio del automovil: ";
        cin >> precio;
        cout << "Ingrese el color del carro: ";
        cin >> precio;
    }

    void mostrarDatos() {
        cout << "\nInformacion del automovil:\n";
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "years: " << years << endl;
        cout << "Precio: $" << precio << endl;
    }
};

int main() {
    Carro auto1;
    cout << "Ingrese los datos del automovil:\n";
    cin.ignore();  
    auto1.ingresarDatos();
    auto1.mostrarDatos();
    return 0;
}