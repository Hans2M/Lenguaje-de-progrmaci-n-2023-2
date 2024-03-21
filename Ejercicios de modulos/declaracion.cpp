#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str[] = "Hola mundo!";
    char *p = str; // Puntero que apunta al primer caracter del array

    while (*p != '\0')
    {
        cout << *p;
        p++; // Avanzar el puntero al siguiente caracter
    }

    cout << endl;

    return 0;
}
