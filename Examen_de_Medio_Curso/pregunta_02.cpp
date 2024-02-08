#include <iostream>
using namespace std;

struct Cliente
{
    int modo_tarjeta;
    bool pago_pendiente;
};

int main()
{
    Cliente cliente;
    cout << "------------------------------------------" << endl;
    cout << "---------Binevenido a TingoBanck----------" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Ingrese el tipo de tarjeta por favor (1, 2, 3 u otro): ";
    cin >> cliente.modo_tarjeta;
    cout << "Tiene una deuda con el banco (1 para si, 0 para no): ";
    cin >> cliente.pago_pendiente;

    float aumentos[] = {0.25, 0.35, 0.40, 0.50};
    float aumento = 0;

    if (cliente.modo_tarjeta >= 1 && cliente.modo_tarjeta <= 4)
    {
        aumento = aumentos[cliente.modo_tarjeta - 1];
        if (cliente.pago_pendiente && (cliente.modo_tarjeta == 1 || cliente.modo_tarjeta == 2))
        {
            aumento /= 2;
        }
        cout << "El aumento del limite de credito es: " << (aumento * 100) << "%" << endl;
    }
    else
    {
        cout << "Tipo de tarjeta invalido." << endl;
    }

    return 0;
}
