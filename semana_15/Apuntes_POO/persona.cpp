#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Persona
{
private:
    /* data */
    int id;
    string apellidos;
    string nombres;
    int dni;
    string direccion;

public:
    Persona(/* args */);
    Persona(int _id, string _apellidos, string _nombres, int _dni, string _direccion)
    {
        id = _id;
        apellidos = _apellidos;
        nombres = _nombres;
        dni = _dni;
        direccion = _direccion;
    }

    int GetId() const
    {
        return id;
    }

    void SetId(int id)
    {
        id = id;
    }

    string GetApellidos() const
    {
        return apellidos;
    }

    void SetApellidos(string apellidos)
    {
        apellidos = apellidos;
    }

    string GetNombres() const
    {
        return nombres;
    }

    void SetNombres(string nombres)
    {
        nombres = nombres;
    }

    int GetDni() const
    {
        return dni;
    }

    void SetDni(int dni)
    {
        dni = dni;
    }

    string GetDireccion() const
    {
        return direccion;
    }

    void SetDireccion(string direccion)
    {
        direccion = direccion;
    }
};
