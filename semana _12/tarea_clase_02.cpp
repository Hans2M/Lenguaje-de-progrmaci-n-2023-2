// hacer un programa para un cliente, donde va a tener nombre,apellido,direccion,tipo_cliente,año de nacimiento.
// usar metodos como constructor,getter and setter, calculo_tipo(int edad){
// 0-10--- tipo A
// 10-20 --- tipo B
// 20-30 --- tipo C
// 30-40 --- tipo D
// 40-50 --- tipo E
#include <iostream>
#include <string>

using namespace std;

class Cliente
{
private:
    string nombre;
    string apellido;
    string direccion;
    string tipo_cliente;
    int fecha_nacimiento;
    int edad;

public:
    // Constructor
    Cliente()
    {
        // Pedir datos al usuario
        cout << "Ingrese su nombre: ";
        cin >> nombre;
        cout << "Ingrese su apellido: ";
        cin >> apellido;
        cout << "Ingrese su direccion: ";
        cin >> direccion;
        cout << "Ingrese su fecha de nacimiento: ";
        cin >> fecha_nacimiento;

        calcularEdad();
        asignarTipoCliente();
    }

    // Métodos getter
    string getNombre() { return nombre; }
    string getApellido() { return apellido; }
    string getDireccion() { return direccion; }
    string getTipoCliente() { return tipo_cliente; }
    int getEdad() { return edad; }

    // Métodos adicionales
    void calcularEdad()
    {
        edad = 2023 - fecha_nacimiento;
    }

    void asignarTipoCliente()
    {
        if (edad >= 0 && edad < 10)
        {
            tipo_cliente = "A";
        }
        else if (edad >= 10 && edad < 20)
        {
            tipo_cliente = "B";
        }
        else if (edad >= 20 && edad < 30)
        {
            tipo_cliente = "C";
        }
        else if (edad >= 30 && edad < 40)
        {
            tipo_cliente = "D";
        }
        else if (edad >= 40 && edad < 50)
        {
            tipo_cliente = "E";
        }
        else
        {
            tipo_cliente = "No definido";
        }
    }

    void mostrarInformacion()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Edad: " << edad << endl;
        cout << "Tipo de cliente: " << tipo_cliente << endl;
    }
};

int main()
{
    // Crear un objeto Cliente
    Cliente cliente;

    cliente.mostrarInformacion();

    return 0;
}
