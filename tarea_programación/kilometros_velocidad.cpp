#include <iostream>
using namespace std;

double kmhToMs(double velocidadKmh) {
    return velocidadKmh * 1000 / 3600;
}

int main() {
    double velocidadKmh;

    cout << "Ingrese la velocidad en kilometros por hora: ";
    cin >> velocidadKmh;

    double velocidadMs = kmhToMs(velocidadKmh);

    cout << "La velocidad en metros por segundo es: " << velocidadMs << endl;

    return 0;
}
