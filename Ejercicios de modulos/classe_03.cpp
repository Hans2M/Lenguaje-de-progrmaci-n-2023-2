#include <iostream>
#include <string>
using namespace std;

class Carro
{
protected:
    /* data */
    int id;
    string modelo;
    int año_fabricacion;
    // int nro_acientos;
    string color;
    string marca;
    float velocidad;
    bool encedido;
    // string cilindrada;
    // string motor;
public:
    Carro (int _id, string _modelo, int _año_fabricacion, string _color, string _marca)
    {
        id = _id;
        modelo = _modelo;
        año_fabricacion = _año_fabricacion;
        color = _color;
        marca = _marca;
        velocidad = 0;
        encedido = false;
    }
Aca se hereda la clase carro.

#include <iostream>
#include <string>
#include "carro.cpp"
using namespace std;

class CarroVan : public Carro
{
private:
    /* data */
    int id_van;
    int nro_acientos;
    string cilindrada;
    string motor;

public:
    CarroVan(int _idVan = 0, int nro_aciento = 0, string _cilindrad = " ", string _motor = " ", int idCarro = 0, string _modelo = " ", int _año_fabricacion = 0, string _color = " ", string _marca = " ") : Carro(idCarro, _modelo, _año_fabricacion, _color, _marca)
    {
        id_van = _idVan;
        nro_acientos = nro_aciento;
        cilindrada = _cilindrad;
        motor = _motor;

    }
Y el main principal
#include <iostream>
#include <string>
#include "carro_van.cpp"
using namespace std;

int main(){

    CarroVan carro_van(1,16,"1500 cc","2.0 petrolero",1,"Van",2024,"Rosa","Hyundai");
    cout<<carro_van.getModelo();

    cout<<carro_van.getAñoFabricacion();
    
    return 0;
}
