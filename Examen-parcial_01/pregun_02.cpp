
#include <iostream>
using namespace std;

int main() {
    int partidosGanados, partidosEmpatados,perdido_partidos;//elaboarar un programa que permita calcular el puntaje de un equipo de futbol
    cout<<"Ingrese los 20 partidos respectivamente";
    cout << "Ingrese el numero de partidos ganados: ";//partido ganado el puntaje aumenta +3,partido empatado +1
    cin >> partidosGanados;//total de partidos ganados
    cout << "Ingrese el numero de partidos empatados: ";
    cin >> partidosEmpatados;//total de partidos empatados
    cout<<"Ingrese el numero de partidos perdidos";
    cin>>perdido_partidos;//total de partidos perdidos

    int puntaje = (partidosGanados * 3) + partidosEmpatados;//hace la operacion por cada partido ganado o empatado
    //El puntaje total de todos los partidos jugados  
    cout << "El puntaje total del equipo de futbol es: " << puntaje << endl;

    return 0;
}
