
//chapter-3(Exercise 3.2)
//33.write a program to print the following output using for loops
/* 1
   22
   333
   4444
   55555
   .............*/

 #include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {

        for (int j = 5; j < i; j--) {
            std::cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            std::cout << i;
        }

        std::cout << std::endl;
    }

    return 0;
}
