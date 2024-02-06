#include <iostream>
using namespace std;

int main() {
    int diasPorMes[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes;

    cout << "Ingrese el numero de mes (1-12): ";
    cin >> mes;

    if (mes >= 1 && mes <= 12) {
        
        switch (mes)
        {
        case 1:
            cout << "El mes de enero tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 2:
            cout << "El mes de febrero tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 3:
            cout << "El mes de marzo tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 4:
            cout << "El mes de abril tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 5:
            cout << "El mes de mayo tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 6:
            cout << "El mes de junio tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 7:
            cout << "El mes de julio tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 8:
            cout << "El mes de agosto tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 9:
            cout << "El mes de setiembre tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 10:
            cout << "El mes de octubre tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 11:
            cout << "El mes de Noviembre tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        case 12:
            cout << "El mes de diciembre tiene " << diasPorMes[mes - 1] << " dias." << endl;
            break;
        
        default:
            break;
        }
    } else {
        cout << "Numero de mes invalido." << endl;
    }

    return 0;
}