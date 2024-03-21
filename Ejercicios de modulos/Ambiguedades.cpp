#include <iostream>
using namespace std;
namespace Geometry
{
    class Point
    {
    public:
        int x, y;

        Point(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
    };
}

namespace Graphics
{
    class Point
    {
    public:
        int x, y;
        int color;

        Point(int x, int y, int color)
        {
            this->x = x;
            this->y = y;
            this->color = color;
        }
    };
}

int main()
{
    // Se usa el prefijo completo para evitar ambigüedades
    Geometry::Point p1(1, 2);
    Graphics::Point p2(3, 4, 0xFF0000);

    cout << "Punto 1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "Punto 2: (" << p2.x << ", " << p2.y << ", " << p2.color << ")" << endl;

    return 0;
}
