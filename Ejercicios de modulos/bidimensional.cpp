#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Ingrese el numero de filas: ";
    cin >> rows;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    int **matrix = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Ingrese el elemento (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }
    cout << "La suma de todos los elementos es: " << sum << endl;
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
