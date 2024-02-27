#include <iostream>
#include <cmath>
using namespace std;

class Triangulo {
private:
    float lado1, lado2, lado3;

public:
    Triangulo(float l1, float l2, float l3) {
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
    }

    void setLado1(float l) {
        lado1 = l;
    }

    void setLado2(float l) {
        lado2 = l;
    }

    void setLado3(float l) {
        lado3 = l;
    }

    float getLado1() {
        return lado1;
    }

    float getLado2() {
        return lado2;
    }

    float getLado3() {
        return lado3;
    }

    string tipoTriangulo() {
        if (lado1 == lado2 && lado2 == lado3) {
            return "Equilatero";
        } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
            return "Isosceles";
        } else {
            return "Escaleno";
        }
    }

    float calcularArea() {
        float s = (lado1 + lado2 + lado3) / 2;
        return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    }

    float calcularPerimetro() {
        return lado1 + lado2 + lado3;
    }
};

int main() {
    float l1, l2, l3;
    cout << "Ingrese el valor del lado 1: ";
    cin >> l1;
    cout << "Ingrese el valor del lado 2: ";
    cin >> l2;
    cout << "Ingrese el valor del lado 3: ";
    cin >> l3;

    Triangulo miTriangulo(l1, l2, l3);

    cout << "Tipo de Triangulo: " << miTriangulo.tipoTriangulo() << endl;
    cout << "Area del Triangulo: " << miTriangulo.calcularArea() << endl;
    cout << "Perimetro del Triangulo: " << miTriangulo.calcularPerimetro() << endl;

    return 0;
}
