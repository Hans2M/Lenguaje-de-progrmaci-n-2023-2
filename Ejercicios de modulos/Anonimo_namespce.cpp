#include <iostream>

int main()
{
    namespace
    { // Namespace anónimo
        int x = 10;
        void print() { cout << "x = " << x << endl; }
    }

    // x e print solo son accesibles dentro del bloque
    print();

    return 0;
}
