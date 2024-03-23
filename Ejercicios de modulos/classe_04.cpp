#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Curso
{
private:
    /* data */
    string codigo_curso;
    string nombre_curso;
    int creditaje;
    float notas[3];
    float promedio_final;

public:
    Curso();
    Curso(string _codigo, string _nombre, int _credito)
    {
        codigo_curso = _codigo;
        nombre_curso = _nombre;
        creditaje = _credito;
    }
Ejemplo de clase persona

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Persona
{
private:
    /* data */
    int codigo_persona;
    string apellidos;
    string nombres;
    string dni;
    string direccion;
    string correo;
    int edad;
    string sexo;
    time_t fecha_nacimiento;

public:
    

    Persona(int _codigo, string _apellidos, string _nombre, int _edad){
        codigo_persona = _codigo;
        apellidos = _apellidos;
        nombres = _nombre;
        edad = _edad;
    }
}_marca)
    {
        id = _id;
        modelo = _modelo;
        año_fabricacion = _año_fabricacion;
        color = _color;
        marca = _marca;
        velocidad = 0;
        encedido = false;
    }
Ejemplo: Clase persona
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Persona
{
private:
    /* data */
    int codigo_persona;
    string apellidos;
    string nombres;
    string dni;
    string direccion;
    string correo;
    int edad;
    string sexo;
    time_t fecha_nacimiento;

public:
    

    Persona(int _codigo, string _apellidos, string _nombre, int _edad){
        codigo_persona = _codigo;
        apellidos = _apellidos;
        nombres = _nombre;
        edad = _edad;
    }_marca)
    {
        id = _id;
        modelo = _modelo;
        año_fabricacion = _año_fabricacion;
        color = _color;
        marca = _marca;
        velocidad = 0;
        encedido = false;
    }
