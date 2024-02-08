#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Crear una lista de numeros pares e impares
    vector<int> pares; // Un vector para numeros pares
    vector<int> impar; // Un vector para numeros impares

    // si su residuo es 0 va ser
    // si no es, va ser impar
    for (int i = 1; i <= 10; ++i)
    {
        if (i % 2 == 0)
        {
            pares.push_back(i);
        }
        else
        {
            impar.push_back(i);
        }
    }
    // los Numeros pares
    cout << "Numeros pares: ";
    for (int num : pares)
    {
        cout << num << " ";
    }
    cout << endl;
    // los numeros impares
    cout << "Numeros impares: ";
    for (int num : impar)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}