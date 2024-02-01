#include <iostream>
using namespace std;

// Función que calcula el cuadrado de un número entero y lo devuelve
int cal_Cuadrado(int x) {
    return x * x;
}

int main() {
    int numero = 5;
    cout << "El cuadrado de " << numero << " es: " << cal_Cuadrado(numero) << endl;
    return 0;
}

