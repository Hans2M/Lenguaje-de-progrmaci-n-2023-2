#include <iostream>
using namespace std;
namespace Math
{
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
}

namespace Physics
{
    int force(int mass, int acceleration) { return mass * acceleration; }
    int energy(int mass, int velocity) { return 0.5 * mass * velocity * velocity; }
}

int main()
{
    using namespace Math;
    int sum = add(2, 3);
    int difference = subtract(5, 2);

    using namespace Physics;
    int f = force(10, 2);
    int e = energy(10, 5);

    cout << "Suma: " << sum << endl;
    cout << "Diferencia: " << difference << endl;
    cout << "Fuerza: " << f << endl;
    cout << "Energia: " << e << endl;

    return 0;
}
