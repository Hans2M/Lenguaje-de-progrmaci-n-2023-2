#include <iostream>

using namespace std;

int main()
{
    // Declaramos las variables
    int dias;
    int years;
    int meses;
    int dia;

    cout << "Ingrese el numero de dias: ";
    cin >> dias;

    // años es years en ingles xd
    years = dias / 365;

    //  meses
    meses = (dias % 365) / 30;

    //  días
    dia = (dias % 365) % 30;

    //  resultados de la operacion
    cout << "years: " << years << endl;
    cout << "Meses: " << meses << endl;
    cout << "Dias: " << dia << endl;

    // Indicamos el mes
    switch (meses)
    {
    case 1:
        cout << "El dia esta en enero." << endl;
        break;
    case 2:
        cout << "El dia esta en febrero." << endl;
        break;
    case 3:
        cout << "El dia esta en marzo." << endl;
        break;
    case 4:
        cout << "El dia esta en abril." << endl;
        break;
    case 5:
        cout << "El dia esta en mayo." << endl;
        break;
    case 6:
        cout << "El dia esta en junio." << endl;
        break;
    case 7:
        cout << "El dia esta en julio." << endl;
        break;
    case 8:
        cout << "El dia esta en agosto." << endl;
        break;
    case 9:
        cout << "El dia esta en septiembre." << endl;
        break;
    case 10:
        cout << "El dia esta en octubre." << endl;
        break;
    case 11:
        cout << "El dia esta en noviembre." << endl;
        break;
    case 12:
        cout << "El dia esta en diciembre." << endl;
        break;
    }

    return 0;
}
