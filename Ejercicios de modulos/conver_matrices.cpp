#include <iostream>
#include <string>

using namespace std;

int main()
{
    int matrix_int[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    float matrix_float[3][2];

    to_matrix(matrix_int, matrix_float, 3, 2);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix_float[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void to_matrix(const int *matrix_int, float *matrix_float, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix_float[i * cols + j] = static_cast<float>(matrix_int[i * cols + j]); // Conversión explícita
        }
    }
}
