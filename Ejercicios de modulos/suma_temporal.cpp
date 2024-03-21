#include <iostream>
#include <string>

using namespace std;

int main() {
  char str[] = "Hola mundo!";
  char sub [] = "mundo";
  char* p = str;
  char* q = sub;

  while (*p != '\0') {
    if (*p == *q) {
      
      bool encontrado = true;
      for (int i = 1; i < strlen(sub); i++) {
        if (*(p + i) != *(q + i)) {
          encontrado = false;
          break;
        }
      }

      if (encontrado) {
        cout << "La subcadena \"" << sub << "\" se encontro en la posicion " << (p - str) << endl;
        break;
      }
    }
    p++;
  }

  if (!encontrado) {
    cout << "La subcadena \"" << sub << "\" no se encontro" << endl;
  }

  return 0;
}
