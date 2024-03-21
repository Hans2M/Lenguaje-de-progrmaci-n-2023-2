#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cout << "Ingrese la cantidad de nombres: ";
    cin >> n;

    string **names = new string *[n];
    for (int i = 0; i < n; i++)
    {
        int length;
        cout << "Ingrese la longitud del nombre " << i + 1 << ": ";
        cin >> length;
        names[i] = new string(length + 1); // Reserva memoria para el nombre + caracter nulo
        cin >> *names[i];                  // Leer nombre en la memoria reservada
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Nombre " << i + 1 << ": " << *names[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] names[i];
    }
    delete[] names;

    return 0;
}
