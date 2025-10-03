
 //capture-2(Exercise 2.5)
 //30.write a c++ program that will ask for a temperature in Fahrenheit and display it in celsius

 #include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}

