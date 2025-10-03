
//CHAPTER 6
// EXERCISE 6.5
#include <iostream>

using namespace std;

class Test {
    int code;
    static int count;

public:
    Test() {
        code = ++count;
    }

    void showCode() const {
        cout << "Object number: " << code << "\n";
    }

    static void showCount() {
        cout << "Count: " << count << "\n";
    }
};

int Test::count = 0;

int main() {
    Test t1, t2;

    Test::showCount();

    Test t3;

    Test::showCount();

    t1.showCode();
    t2.showCode();
    t3.showCode();

    return 0;
}

