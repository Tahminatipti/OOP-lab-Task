
//chapter 6
//
#include <iostream>
using namespace std;

class matrix {
    int **p;
    int d1, d2;

public:
    matrix(int x, int y);
    ~matrix();
    void get_element(int i, int j, int value);
    int &put_element(int i, int j);
};

matrix::matrix(int x, int y) {
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for (int i = 0; i < d1; i++) {
        p[i] = new int[d2];
    }
}

matrix::~matrix() {
    for (int i = 0; i < d1; i++) {
        delete[] p[i];
    }
    delete[] p;
}

void matrix::get_element(int i, int j, int value) {
    p[i][j] = value;
}

int &matrix::put_element(int i, int j) {
    return p[i][j];
}

int main() {
    int m, n;
    cout << "Enter size: ";
    cin >> m >> n;
    matrix A(m, n);
    cout << "Enter elements:" << endl;
    int i, j, value;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> value;
            A.get_element(i, j, value);
        }
    }
    cout << "\n";
    cout << A.put_element(1, 2);
    return 0;
}
