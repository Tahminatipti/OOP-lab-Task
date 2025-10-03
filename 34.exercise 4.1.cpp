
//chapter-4(Exercise 4.1)
//34.Write a function to read a matrix of size m*n from the keyboard
#include <iostream>
using namespace std;

void readMatrix(int matrix[][100], int m, int n) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

int main() {
    int m, n;


    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;


    int matrix[100][100];


    readMatrix(matrix, m, n);


    cout << "The matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
