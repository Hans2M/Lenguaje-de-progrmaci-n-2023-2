#include <iostream>
using namespace std;

int main() {
    //declarar variables 
    float Not1, Not2, Not3, prom;

    //El usuario pondra los datos correspondientes 
    cout<< "Ingrese la primera nota: ";
    cin>>Not1;

    cout<< "Ingrese la segunda nota: ";
    cin>>Not2;

    cout<< "Ingrese la tercera nota: ";
    cin>>Not3;

    //Los porcentajes de cada nota según corresponda 
    const float valor1 = 0.15;
    const float valor2 = 0.35;
    const float valor3 = 0.50;
    
    prom = (Not1*valor1) + (Not2*valor2) + (Not3*valor3); 

    //El resultado o el promedio total
    cout<<"El promedio de las notas es: "<< prom <<endl;

    return 0;
}