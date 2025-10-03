
//chapter 6
//exercise 6.2

#include <iostream>

using namespace std;

class Set {
    int m, n;

public:

    Set(int x = 0, int y = 0) : m(x), n(y) {}

    void input();
    void display();
    int largest();
};

int Set::largest() {
    if (m >= n)
        return m;
    else
        return n;
}

void Set::input() {
    cout << "Input values of m and n: ";
    cin >> m >> n;
}

void Set::display() {
    cout << "m = " << m << ", n = " << n << endl;
    cout << "Largest = " << largest() << endl;
}

int main() {

    Set s;


    s.input();
    s.display();

    return 0;
}

