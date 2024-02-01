#include <iostream>
using namespace std;

// Funcion que calcula el cuadrado de un numero por referencia
void calcularCuadradoPorReferencia(int &num) {
    num = num * num;
}

int main() {
    int numero = 5;
    cout << "Antes de llamar a la funcion, numero es: " << numero << endl;
    calcularCuadradoPorReferencia(numero);
    cout << "Despues de llamar a la funcion, numero es: " << numero << endl;

    return 0;
}
