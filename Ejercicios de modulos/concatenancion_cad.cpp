#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str1[] = "Hola";
    char str2[] = " mundo!";
    char str3[20];

    char *p1 = str1;
    char *p2 = str2;
    char *p3 = str3;

    while (*p1 != '\0')
    {
        *p3 = *p1;
        p1++;
        p3++;
    }

    while (*p2 != '\0')
    {
        *p3 = *p2;
        p2++;
        p3++;
    }

    *p3 = '\0';

    cout << str3 << endl;

    return 0;
}
