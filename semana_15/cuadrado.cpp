#include <iostream>
#include <string>
using namespace std;
class FormaGeometrica
{
public:
    virtual void dibujar() const = 0;
    virtual double calcular_area() const = 0;
};

class Cuadrado : public FormaGeometrica
{
private:
    double lado;

public:
    Cuadrado();
    Cuadrado( double l)
    {
        lado = l;
    }
    double calcular_area() const override{
        return   (lado*lado);
    }
};