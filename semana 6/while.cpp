#include<iostream>
using namespace std;
int main(){
    int dia;
    cout<<"Ingrese un numero de 1 al 12\n";
    cin>>dia;

    while(dia >=12 || dia<=0){
        cout<<"Ingrese el numero del 1 al 12\n"<<endl;
        cin>>dia; 
    }
    switch (dia)
    {
    case 1:
        cout<<"enero";
        break;
    case 2:
        cout<<"febrero";
        break;
    case 3:
        cout<<"marzo";
        break;
    case 4:
        cout<<"abril";
        break;
    case 5:
        cout<<"mayo";
        break;
    case 6:
        cout<<"junio";
        break;
    case 7:
        cout<<"julio";
        break;
    case 8:
        cout<<"agosto";
        break;
    case 9:
        cout<<"setiembre";
        break;
    case 10:
        cout<<"octubre";
        break;
    case 11:
        cout<<"novienbre";
        break;
    case 12:
        cout<<"diciembre";
        break;
    default:
    cout<<"Numero errado"<<endl;
        break;
    }
    return 0;
}