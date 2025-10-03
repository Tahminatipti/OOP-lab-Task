
//chapter 6
//exercise 6.3
#include <iostream>

using namespace std;

class Item {
    static int count;
    int number;

public:

    Item(int a = 0) : number(a) {
        count++;
    }

    void getData(int a) {
        number = a;
    }

    void showNumber() const {
        cout << "Number: " << number << "\n";
    }

    static void getCount() {
        cout << "Count: " << count << "\n";
    }
};


int Item::count = 0;

int main() {
    Item a(100), b(200), c(300);

    Item::getCount();

    a.showNumber();
    b.showNumber();
    c.showNumber();

    cout << "After reading data:\n";

    Item::getCount();

    return 0;
}

