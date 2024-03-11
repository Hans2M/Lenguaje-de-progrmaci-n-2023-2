#include <iostream>
#include <string>

using namespace std;
class FormaGeometrica
{

public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Circulo : public FormaGeometrica
{
private:
    double radio;
    double pi;

public:
    Circulo();//caundo hay dos nombres iguales estos sobre carga de metodos
    Circulo(double r, double _pi=3.14)
    {
        radio = r;
        pi = _pi;
    }

    void dibujar() const override{//const override--
        cout<<"Dibujando un circulo"<<endl;
    }
    double calcular_area() const override{
        return   (pi)*(radio*radio);
    }
};