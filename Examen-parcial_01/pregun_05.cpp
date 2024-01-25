#include <iostream>
#include <stdio.h>
//elaborar un programa que determine el pago por cada alumno
using namespace std;
int main(){
    int cant_alumnos,precio_alumnos, costo_total;
    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>cant_alumnos;
    //si cantidad de alumnos es mayor o igual que 100
    if (cant_alumnos>=100)
    {
        costo_total = precio_alumnos*65;//precio por la cantidad de alumnnos
        return costo_total;
    }
    //si cantidad de alumnos esta entre 50 y 99 
    else if (50<=cant_alumnos<=99)
    {
        costo_total = precio_alumnos*70;//precio por la cantidad de alumnnos
        return costo_total;
    }
    //si cantidad de alumnos esta entre 30 y 49 
    else if (30<=cant_alumnos<=49)
    {
        costo_total = precio_alumnos*95;//precio por la cantidad de alumnnos
        return costo_total;
    }
    //el precio que deben de pagar de acuerdo a la cantidad de alumnos
    if (cant_alumnos<30)
    {
        costo_total = 4000;
        return costo_total;
    }
    cout<<"El costo total es: "<<costo_total;
    return 0;
}