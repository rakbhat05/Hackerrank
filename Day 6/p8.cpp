//Arrays 2D - Matrix Multiplication
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // Declare static arrays for matrices
    int a[100][100], b[100][100], c[100][100] = {0}; // Assuming max dimension is 100x100

    // Input for first matrix
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    // Input for second matrix
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> b[i][j];
        }
    }

    // Matrix multiplication
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the result matrix
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
