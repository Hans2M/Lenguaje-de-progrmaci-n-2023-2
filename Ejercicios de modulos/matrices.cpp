#include <iostream>
#include <string>

using namespace std;

int main() {
  char str[] = "Hola mundo!"; 

  for (int i = 0; i < strlen(str); i++) {
    cout << str[i];
  }

  cout << endl;

  return 0;
}
