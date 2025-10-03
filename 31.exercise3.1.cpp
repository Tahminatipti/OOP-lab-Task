
//chapter-3(Exercise 3.1)
//31.write a function using reference variables as arguments to swap the values of a pair of integers

 #include <iostream>


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;


    swap(x, y);

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}
