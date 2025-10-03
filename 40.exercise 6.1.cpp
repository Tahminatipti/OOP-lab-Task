
//chapter 6
// exercise 6.1
#include<bits/stdc++.h>

using namespace std;

class Item {
    int number;
    float cost;

public:
    Item(int a, float b);
    void putdata(void);
};

Item::Item(int a, float b) {
    number = a;
    cost = b;
}

void Item::putdata(void) {
    cout << "Number: " << number << "\n";
    cout << "Cost: " << cost << "\n";
}

int main() {
    Item x(100,200.10);
    cout << "An object x:\n";
    x.putdata();

    Item y(200, 300.20);
    cout << "\nObject y:\n";
    y.putdata();

    return 0;
}
