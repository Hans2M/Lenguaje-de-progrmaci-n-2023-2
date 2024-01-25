//se conoce que la produccion minimo es 100 unidades
//elaborar un programa que calcule el aumento del incentivo de un trabajador 
#include <iostream>
using namespace std;

int main() {
    int produc, incentivo;//se declara las variables
    
    cout << "Ingrese la produccion del operario en cada dia de la semana (lunes a sabado):" << endl;
    
    int produc_Total = 0;
    //el incentivo que recibira el operario a lo largo de la semana
    for (int i = 1; i <= 6; i++) {
        cout << "Dia " << i << ": ";
        cin >> produc;
        //se hace el calculo del produc_totaly produc
        produc_Total += produc;
    }
    //si produc_total es mayor o igual que 100 unidades
    if (produc_Total >= 100) {
        incentivo = produc_Total * 20; // Suponiendo que el incentivo es de S/20 soles por cada unidad producida
        cout << "El operario recibira un incentivo de S/" << incentivo << " esta semana." << endl;
    } else {
        //no habra aumento de incentivo
        cout << "El operario no alcanzo la producción minima de 100 unidades esta semana." << endl;
    }
    
    return 0;
}