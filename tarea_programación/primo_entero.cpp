#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero_tipo;

    cout << "Ingrese un numero de tipo entero positivo: ";
    cin >> numero_tipo;

    if (esPrimo(numero_tipo)) {
        cout << "El numero si es primo." << endl;
    } else {
        cout << "El numero no es primo." << endl;
    }

    return 0;
}
