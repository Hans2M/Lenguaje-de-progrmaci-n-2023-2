#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros_enteros[4];

    cout << "Ingrese los 4 numeros separados por espacios: ";
    for (int i = 0; i < 4; i++) {
        cin >> numeros_enteros[i];
    }

    sort(numeros_enteros, numeros_enteros + 4);

    cout << "Numeros de menor a mayor: ";
    for (int i = 0; i < 4; i++) {
        cout << numeros_enteros[i] << " ";
    }
    cout << endl;

    return 0;
}
