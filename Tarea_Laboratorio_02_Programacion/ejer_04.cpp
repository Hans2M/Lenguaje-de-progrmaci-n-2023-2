#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int notas[6];

    // Solicitar al usuario ingresar las 6 notas
    cout << "Ingrese 6 notas separadas por favor: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> notas[i];
    }

    cout << "Notas en desorden: ";
    for (int i = 0; i < 6; i++)
    {
        cout << notas[i] << " ";
    }
    cout << endl;

    char letras[6];
    for (int i = 0; i < 6; i++)
    {
        if (notas[i] >= 0 && notas[i] <= 13)
        {
            letras[i] = 'C';
        }
        else if (notas[i] >= 14 && notas[i] <= 18)
        {
            letras[i] = 'B';
        }
        else if (notas[i] >= 19 && notas[i] <= 20)
        {
            letras[i] = 'A';
        }
        else
        {
            letras[i] = 'C';
        }
    }

    stack<char> pila;

    // Insertar las letras en la pila
    for (int i = 0; i < 6; i++)
    {
        pila.push(letras[i]);
    }

    cout << "Notas ordenadas: ";
    while (!pila.empty())
    {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;

    return 0;
}
