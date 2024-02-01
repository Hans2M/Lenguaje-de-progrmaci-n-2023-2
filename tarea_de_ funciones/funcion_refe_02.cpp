#include <iostream>
using namespace std;

// Funcion que incrementa un numero por referencia
void incrementar(int &num)
{
    num++;
}

int main()
{
    int numero = 5;
    cout << "Antes de llamar a la funcion, numero es: " << numero << endl;
    incrementar(numero);
    cout << "Despues de llamar a la funcion, numero es: " << numero << endl;

    return 0;
}