#include <iostream>
using namespace std;
class FormaGeometrica
{

public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Rectangulo : public FormaGeometrica
{
private:
    double base;
    double altura;

public:
    Rectangulo();//caundo hay dos no,bres iguales estoes sobre carga de metodos
    Rectangulo(double l, double a)
    {
        base = 1;
        altura = a;
    }

    void dibujar() const override{//const override--
        cout<<"Dibujando un rectangulo"<<endl;
    }
    double calcular_area() const override{
        return base * altura;
    }
};
