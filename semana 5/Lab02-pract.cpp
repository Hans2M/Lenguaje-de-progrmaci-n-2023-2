#include <iostream>
using namespace std;
//Desarrolle un programa que permita leer 4 números y ordenarlos de menor a mayor, si es el caso
int main(){
    int x,y,z,a;
    cout<<"Ingrese el primer numero:\n";
    cin>>x;
    cout<<"Ingrese el segundo numero:\n";
    cin>>y;
    cout<<"Ingrese el tercer numero:\n";
    cin>>z;
    cout<<"Ingrese el cuarto numero:\n";
    cin>>a;
    
    if (x > y) {
        // A es mayor que B
        if (y > z && z>a) {
            // A > B > C
            cout << x << ", " << y << ", " << z << ","<< a << endl;
        } 
        else {
            // C es mayor que B
            if (x > z && z>a ) {
                // A > C > B
                cout << x << ", " << z << ", " << y <<"," <<a<<  endl;
            } else {
                // C > A > B >a
                cout << z << ", " << x << ", " << y <<"," <<a<< endl;
            }
        }
    } else {
        // B es mayor que A
        if (y > z && z>x) {
            // B > C > A
            cout << y << ", " << x << ", " << z << endl;
        } else {
            // C > B > A
            cout << z << ", " << y << ", " << x <<endl;
        }
    }


    return 0;
}