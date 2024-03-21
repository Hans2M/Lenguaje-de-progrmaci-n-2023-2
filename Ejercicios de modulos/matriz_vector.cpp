#include <iostream>
#include <vector>

using namespace std;

int main() {
  int matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  int rows = 3, cols = 2;

  vector<int> vec = to_vector(matrix, rows, cols);

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  return 0;
}

vector<int> to_vector(const int* matrix, int rows, int cols) {
  vector<int> vec;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      vec.push_back(matrix[i * cols + j]); 
    }
  }
  return vec;
}
