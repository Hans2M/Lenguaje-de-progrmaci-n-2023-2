#include <iostream>
#include <string>
using namespace std;

class Coche {
    string marca;
    string modelo;
    int año;

public:
    Coche(string mar, string mod, int an) : marca(mar), modelo(mod), año(an) {}

    string getMarca() const { return marca; }
    string getModelo() const { return modelo; }
    int getAño() const { return año; }
};

int main() {
    Coche miCoche("Toyota", "Corolla", 2010);

    cout << "Marca del coche: " << miCoche.getMarca() << endl;
    cout << "Modelo del coche: " << miCoche.getModelo() << endl;
    cout << "Año del coche: " << miCoche.getAño() << endl;

    return 0;
}
