#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Escriba un programa que simule el juego de adivinar un número
int main()
{
    srand(time(0));
    int numero_aleatorio = rand() % 100 + 1; //  numero aleatorio entre 1 y 100
    int intentos = 0;
    int intento_usuario;
    // el numero de intentos debe ser menor que 5
    while (intentos < 5)
    {
        // El usuario ingresa un numero del 1 al 100
        cout << "---------------Bienvenido-----------------" << endl;
        cout << "Intenta adivinar el numero (entre 1 y 100): " << endl;
        cout << "------------------------------------------" << endl;
        cin >> intento_usuario;
        intentos++;
        // SI en caso el usuario adivina el numero correspondiente
        // el numero de intentos en el que a logrado saldra en la pantalla
        if (intento_usuario == numero_aleatorio)
        {
            cout << "¡Felicidades! Has adivinado el numero en " << intentos << " intentos." << endl;
            break;
        }
        else if (intento_usuario < numero_aleatorio)
        {
            cout << "El numero a adivinar es mayor." << endl;
        }
        else
        {
            cout << "El numero a adivinar es menor." << endl;
        }
    }

    if (intentos == 5)
    {
        // cuando el usuario exceda los intentos el aplicativo debe mostrar una alerta y terminar el programa.
        cout << "Has excedido el numero maximo de intentos. El numero a adivinar era: " << numero_aleatorio << endl;
    }

    return 0;
}
