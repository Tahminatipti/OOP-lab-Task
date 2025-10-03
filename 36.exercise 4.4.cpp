
//chapter-4(Exercise 4.4)
//36.write a macro that obtain the largest of three number
#include <iostream>
using namespace std;
#define MAX_OF_THREE(a, b, c) ((a > b && a > c) ? a : (b > c ? b : c))

int main() {
    int x = 10, y = 25, z = 15;

    int largest = MAX_OF_THREE(x, y, z);

    cout << "The largest of " << x << ", " << y << ", and " << z << " is: " << largest << endl;

    return 0;
}
