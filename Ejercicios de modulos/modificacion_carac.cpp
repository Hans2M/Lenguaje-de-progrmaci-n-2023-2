#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str[] = "Hola mundo!";
    char *p = str;
    *p = toupper(*p);

    cout << str << endl;

    return 0;
}
