#include <iostream>
using namespace std;

//  calcula el area de un rectangulo con parámetros por valor
double calcularAreaRectangulo(double largo, double ancho) {
    return largo * ancho;
}

int main() {
    double largo = 5.0;
    double ancho = 3.0;
    cout << "El area del rectangulo con largo " << largo << " y ancho " << ancho << " es: " << calcularAreaRectangulo(largo, ancho) << endl;
    return 0;
}
