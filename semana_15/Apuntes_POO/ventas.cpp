#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Ventas
{
private:
    /* data */
    int id_ventas;
    int id_producto;
    string fecha;
    int cantidad;

public:
    Ventas(/* args */);
    Ventas(int _id_ventas, int _id_producto, string _fecha, int _cantidad){
        id_ventas = _id_ventas;
        id_producto = _id_producto;
        fecha = _fecha;
        cantidad = _cantidad;

    };
    int GetId_ventas() const
    {
        return id_ventas;
    }

    void SetId_ventas(int id_ventas)
    {
        id_ventas = id_ventas;
    }

    int GetId_producto() const
    {
        return id_producto;
    }

    void SetId_producto(int id_producto)
    {
        id_producto = id_producto;
    }

    string GetFecha() const
    {
        return fecha;
    }

    void SetFecha(string fecha)
    {
        fecha = fecha;
    }

    int GetCantidad() const
    {
        return cantidad;
    }

    void SetCantidad(int cantidad)
    {
        cantidad = cantidad;
    }
};
