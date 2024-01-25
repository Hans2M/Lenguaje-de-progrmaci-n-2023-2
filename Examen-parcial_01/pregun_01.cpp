#include <iostream>
using namespace std;
//Elaborar un programa que solicite el numero de respuestas
//respuestas correctas +4,respuestas incorrectas -2
//respuestas en blanco +0
int main() {
    int respuestasCorrectas, respuestasIncorrectas, respuestasEnBlanco,respuestasblanco;
    //Son 20 preguntas de la prueba
    cout<< "Ingrese las 20 preguntas de la prueba\n";
    cout<< "Ingrese el numero de respuestas correctas: ";
    cin >> respuestasCorrectas;
    cout << "Ingrese el numero de respuestas incorrectas: ";
    cin >> respuestasIncorrectas;
    //hace el calculo de las respuestas segun sus resultados +4,-2,0
    respuestasEnBlanco = 20 - respuestasCorrectas - respuestasIncorrectas;
    //aumenta en 4 si es correcta
    //descuenta en -2 si es incorrecta
    //no aumenta si esta en blanco
    int puntaje = (respuestasCorrectas * 4) + (respuestasIncorrectas * -2);
    //resultado
    cout << "El puntaje total del postulante es: " << puntaje << endl;

    return 0;
}
