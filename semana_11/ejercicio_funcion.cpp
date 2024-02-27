/*Elaborar un programa que registre 3 personas y que pida su año de nacimiento
.calcular su edad 
.calcular quien es mayor
usar estruct y funciones*/
#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int years_Nacimiento;
};

int calcularEdad(int years_Nacimiento) {
    int years_Actual = 2024; 
    return years_Actual - years_Nacimiento;
}

void determinarMayor(Persona personas[]) {
    int mayorEdad = 0;
    string nombreMayor = "";
    for (int i = 0; i < 3; i++) {
        if (calcularEdad(personas[i].years_Nacimiento) > mayorEdad) {
            mayorEdad = calcularEdad(personas[i].years_Nacimiento);
            nombreMayor = personas[i].nombre;
        }
    }
    cout << "La persona mayor es: " << nombreMayor << endl;
}

int main() {
    Persona personas[3];
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre de la persona " << i+1 << ": ";
        cin >> personas[i].nombre;
        cout << "Ingrese el years de nacimiento de la persona " << i+1 << ": ";
        cin >> personas[i].years_Nacimiento;
    }

    for (int i = 0; i < 3; i++) {
        cout << "La edad de " << personas[i].nombre << " es: " << calcularEdad(personas[i].years_Nacimiento) << " years" << endl;
    }

    determinarMayor(personas);

    return 0;
}
