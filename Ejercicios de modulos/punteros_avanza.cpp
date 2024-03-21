#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str[] = "Hola mundo!";
    char sub[] = "mundo";
    char *p = str;
    char *q = sub;

    while (*p != '\0')
    {
        if (*p == *q)
        {
            q++;
        }
        else
        {
            q = sub;
        }

        if (*q == '\0')
        {
            cout << "La subcadena \"" << sub << "\" se encontro en la posicion " << (p - str) << endl;
            break;
        }

        p++;
    }

    if (*q != '\0')
    {
        cout << "La subcadena \"" << sub << "\" no se encontro" << endl;
    }

    return 0;
}
