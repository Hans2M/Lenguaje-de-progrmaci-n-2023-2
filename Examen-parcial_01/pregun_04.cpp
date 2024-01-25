#include <iostream>
using namespace std;
//Elaborar un programa que determine el area y que tipo de triangulo es 
int main(){
    //pedir al usuario que ingrese los lados
    int A,B,C;
    int area;
    cout<<"Ingrese el primer lado ";
    cin>>A;
    cout<<"Ingrese el segundo lado ";
    cin>>B;
    cout<<"Ingrese el tercer lado ";
    cin>>C;
    //se calcula el area de acuerdo a los lados

    area=(A*B)/2;
    cout<<"El area sera:"<<area<<endl;
    //se analiza si los lados son iguales, diferentes y saldra el respectivo trinagulo que es
    //si A Y B son igualesy y diferentes
    if(A==B && A!=C){
        cout<<"isoceles";
    }else{
        if(A!=B && B!=C){
        cout<<"escaleno";
        }
    }
    //si A Y B son iguales y A=C 
    if(A==B && A==C){
        cout<<"Equilatero";
    }

    return 0;
}