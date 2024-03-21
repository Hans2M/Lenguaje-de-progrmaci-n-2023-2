#include <iostream>

using namespace std;
namespace hogwarts
{
    int troll = 1;
}
namespace mordor
{
    int troll = 2;
}
int main(void)
{
    {
        using namespace hogwarts;
        cout << troll << " ";
    }
    {
        using namespace mordor;
        cout << troll << endl;
    }
    return 0;
}
