#include <iostream>
#include <string>
using namespace std;

string obtenerNombreMes(int numer_Mes) {
    string tipo_Mes;

    switch (numer_Mes) {
        case 1:
            tipo_Mes = "Enero";
            break;
        case 2:
            tipo_Mes = "Febrero";
            break;
        case 3:
            tipo_Mes = "Marzo";
            break;
        case 4:
            tipo_Mes = "Abril";
            break;
        case 5:
            tipo_Mes = "Mayo";
            break;
        case 6:
            tipo_Mes = "Junio";
            break;
        case 7:
            tipo_Mes = "Julio";
            break;
        case 8:
            tipo_Mes = "Agosto";
            break;
        case 9:
            tipo_Mes = "Septiembre";
            break;
        case 10:
            tipo_Mes = "Octubre";
            break;
        case 11:
            tipo_Mes = "Noviembre";
            break;
        case 12:
            tipo_Mes = "Diciembre";
            break;
        default:
            tipo_Mes = "Mes inválido";
            break;
    }

    return tipo_Mes;
}

int main() {
    int numer_Mes;

    cout << "Ingrese el numero de mes: ";
    cin >> numer_Mes;

    string tipo_Mes = obtenerNombreMes(numer_Mes);

    cout << "El nombre del mes de acuerdo al numero " << numer_Mes << " es: " << tipo_Mes << endl;

    return 0;
}

