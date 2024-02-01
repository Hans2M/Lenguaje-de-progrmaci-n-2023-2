#include <iostream>
using namespace std;

// Funcion que intercambia el valor de dos numeros por referencia
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int numero1 = 5;
    int numero2 = 10;

    cout << "Antes del intercambio: primer numero = " << numero1 << ", segundo numero = " << numero2 << endl;

    intercambiar(numero1, numero2);

    cout << "Despues del intercambio: primer numero = " << numero1 << ", segundo numero = " << numero2 << endl;

    return 0;
}
