#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    for (int i = 1; ; i++) {
        if (i % 9 == 0) {
            cout << i << " es un multiplo de 9" << endl;
            contador++;
        }
        if (contador == 20) {
            break;
        }
    }

    return 0;
}
