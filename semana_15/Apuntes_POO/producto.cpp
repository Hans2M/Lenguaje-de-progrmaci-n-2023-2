#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Producto
{
private:
    /* data */
    int id_producto;
    string descripcion;
    string tipo;
    string fecha;
    float precio;

public:
    Producto(/* args */){
        
    }
    Producto(string _tipo, float _precio, string _descripcion, int _id_producto, string _fecha)
    {
        id_producto = _id_producto;
        tipo = _tipo;
        fecha = _fecha;
        precio = _precio;
        descripcion = _descripcion;
    }
    int GetId_producto() const
    {
        return id_producto;
    }

    void SetId_producto(int id_producto)
    {
        id_producto = id_producto;
    }

    string GetDiscripcion() const
    {
        return descripcion;
    }

    void SetDiscripcion(string discripcion)
    {
        discripcion = discripcion;
    }

    string GetTipo() const
    {
        return tipo;
    }

    void SetTipo(string tipo)
    {
        tipo = tipo;
    }

    string GetFecha() const
    {
        return fecha;
    }

    void SetFecha(string fecha)
    {
        fecha = fecha;
    }

    float GetPrecio() const
    {
        return precio;
    }

    void SetPrecio(string precio)
    {
        precio = precio;
    }
    string to_string()
    {
        return " " + tipo ;
    }
};
