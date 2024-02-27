#include <iostream>
using namespace std;
// programcion orientada a objetos...es una paradigma de desarrollo,el termino solid---"investigar".
// objeto:es una abstraccion de algo del mundo real.
// ejemplo: alumno:facultad,nombre,semestre,notas--->clases
// curso: id,nombre,credito,notafinal---esto son atributos
// curso: get y set,cursoc---esto son metodos o funciones
// herencia--se crea una clase asociada --curso02
// encapsulamiento---encapsular una clase por clase --atraves de una herencia
// protectted,private;
// paar eliminar set
// para ver get
class Rectangulo
{
private:
    float longitud;
    float ancho;

public:
    // constructor
    Rectangulo(float l, float a)
    {
        longitud = l;
        ancho = a;
    }
    Rectangulo(){ }
    // getter ans setter --- para manipular variables
    float getlongitud()
    {
        return longitud;
    }
    void setlongitud(float l)
    {
        longitud = l;
    }
    float getanch()
    {
        return ancho;
    }
    void setancho(float a)
    {
        ancho = a;
    }
    // metodos de rectangulo
    float calcular_area(float l, float a)
    {
        return l * a;
    }
    float perimetro()
    {
        return 2 * (longitud + ancho);
    }
};

int main()
{
    Rectangulo rect(5.0, 2.5);
    Rectangulo rect_02;

    rect_02.setlongitud(5.0);
    rect_02.setancho(2.5);

    cout<<"El valor de la longitud del rectangulo 2 es:";
    cout<<rect_02.getlongitud()<<rect_02.getanch()<<endl;

    return 0;
}