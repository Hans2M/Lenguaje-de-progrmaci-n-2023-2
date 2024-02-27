#include <iostream>
#include <string>
using namespace std;


struct Automovil {
    string color;
    int velocidadMaxima;
    int cantidadPasajeros;
};


void cambiarCaracteristicas(Automovil &carro, string color, int velocidad, int pasajeros) {
    carro.color = color;
    carro.velocidadMaxima = velocidad;
    carro.cantidadPasajeros = pasajeros;
}

int main() {
    Automovil autos[5]; 


    for (int i = 0; i < 5; i++) {
        cout << "Automovil " << i+1 << ":" << endl;
        cout << "Color: ";
        cin >> autos[i].color;
        cout << "Velocidad maxima: ";
        cin >> autos[i].velocidadMaxima;
        cout << "Cantidad de pasajeros: ";
        cin >> autos[i].cantidadPasajeros;
    }

    
    int indice;
    cout << "Ingrese el indice del automovil cuyas caracteristicas desea cambiar (1-5): ";
    cin >> indice;
    cout << "Ingrese el nuevo color, velocidad maxima y cantidad de pasajeros: ";
    string nuevoColor;
    int nuevaVelocidad, nuevoPasajeros;
    cin >> nuevoColor >> nuevaVelocidad >> nuevoPasajeros;
    cambiarCaracteristicas(autos[indice], nuevoColor, nuevaVelocidad, nuevoPasajeros);

    return 0;
}
