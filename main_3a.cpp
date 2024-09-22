#include <iostream>
using namespace std;

// (i) Single-dimensional array
void singleDimensionalArrayExample() {
    int arr[5] = {10, 20, 30, 40, 50};  // Single-dimensional array of integers
    cout << "Single-dimensional array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// (ii) Multi-dimensional array (2D array)
void multiDimensionalArrayExample() {
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };  // 2D array of integers
    cout << "Multi-dimensional array (Matrix): " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Single-dimensional array demonstration
    singleDimensionalArrayExample();

    // Multi-dimensional array demonstration
    multiDimensionalArrayExample();

    return 0;
}
