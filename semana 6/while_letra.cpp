#include <iostream>
using namespace std;

char nota_letra;
int main()
{
    cout << "Ingrese una nota\n";
    cin >> nota_letra;

    switch (nota_letra)
    {
    case 'A':
        cout << "El rango de tu nota es entre 19 a 18";
        break;
    case 'B':
        cout << "El rango de tu nota es entre 17 a 14";
        break;
    case 'C':
        cout << "El rango de tu nota es entre 14 a 11";
        break;
    case 'D':
        cout << "El rango de tu nota es entre 10 a 5";
        break;
    case 'E':
        cout << "El rango de tu nota es entre 5 a 0";
        break;

    default:
        break;
    }

    return 0;
}