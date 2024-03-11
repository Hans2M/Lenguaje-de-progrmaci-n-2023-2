#include <iostream>
#include <string>
#include <fstream>
#include "vendedor.cpp"
using namespace std;
int main()
{
    Producto producto_1 ("holatera");

    ofstream archivo_producto("D:\\Documents\\PROGRAMACION BASICA-PRACTICA\\semana 16\\cursos.txt");

    if (!archivo_producto.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo_producto << "Datos de registro de productos\n";
    archivo_producto << producto_1.to_string() << "\n";
    archivo_producto << "********************************************";
    cout << "Se registraron los documentos";
    archivo_producto.close();

    ifstream archivo_mostrar("D:\\Documents\\PROGRAMACION BASICA-PRACTICA\\semana 16\\cursos.txt");
    if (!archivo_mostrar.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    cout << "Imprimiendo" << endl;
    string linea;
    while (getline(archivo_mostrar, linea))
    {

        cout << linea << endl;
    }

    archivo_mostrar.close();

    return 0;
};
