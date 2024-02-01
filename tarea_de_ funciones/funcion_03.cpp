#include <iostream>
using namespace std;

// Funcion que suma dos numeros y devuelve el resultado
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;
    cout << "La suma de " << num1 << " y " << num2 << " es: " << sumar(num1, num2) << endl;
    return 0;
}
