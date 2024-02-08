#include <iostream>
using namespace std;
// Hacer un programa para ayudar a un trabajador a saber cuál será su sueldo semanal (funcion), se sabe que, si trabaja 40 horas o menos,
// se le pagar $20 por hora, pero si trabaja más de 40 horas entonces las horas extras se le pagarán a $25 por hora.

float sueldo_semanal(int horas_trabajadas, float pago_por_hora)
{
    float sueldo = 0;

    if (horas_trabajadas <= 40)
    {
        sueldo = horas_trabajadas * pago_por_hora;
    }
    else
    {
        // si trabaja más de 40 horas entonces las horas extras se le pagarán a $25 por hora.
        int horas_normales = 40;
        int horasExtras = horas_trabajadas - horas_normales;
        // si trabaja 40 horas o menos,se le pagará $20 por hora
        // pero si trabaja más de 40 horas entonces las horas extras se le pagarán a $25 por hora
        sueldo = (horas_normales * pago_por_hora) + (horasExtras * (pago_por_hora * 1.5));
    }

    return sueldo;
}

int main()
{
    int horasTrabajadas;
    float pagoPorHora;
    // poner las horas trabajadas
    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    // El pago respectivo por cada hora de trabajo
    cout << "Ingrese el pago por hora: ";
    cin >> pagoPorHora;
    // En total de su sueldo semanal
    float sueldo = sueldo_semanal(horasTrabajadas, pagoPorHora);
    cout << "El sueldo semanal es: $" << sueldo << endl;

    return 0;
}
