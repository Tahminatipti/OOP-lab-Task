
//capture-7
// 49..Exercise-7.5
//define two class Polar and Rectangle to represent points in the polar and rectangle system.Use conversion routines to convert from one system to the other

#include <iostream>
#include <cmath>

class Polar; // Forward declaration

class Rectangle {
private:
    double x, y;

public:
    // Constructor for Rectangle class
    Rectangle(double xCoord = 0, double yCoord = 0) : x(xCoord), y(yCoord) {}

    // Method to display rectangular coordinates
    void display() const {
        std::cout << "Rectangle Coordinates: (x: " << x << ", y: " << y << ")" << std::endl;
    }

    // Friend function to convert from Polar to Rectangle
    friend Rectangle polarToRectangle(const Polar& p);

    // Getters for x and y (optional)
    double getX() const { return x; }
    double getY() const { return y; }
};

class Polar {
private:
    double r, theta; // r: radius, theta: angle in radians

public:
    // Constructor for Polar class
    Polar(double radius = 0, double angle = 0) : r(radius), theta(angle) {}

    // Method to display polar coordinates
    void display() const {
        std::cout << "Polar Coordinates: (r: " << r << ", θ: " << theta << " radians)" << std::endl;
    }

    // Friend function to convert from Rectangle to Polar
    friend Polar rectangleToPolar(const Rectangle& rect);

    // Getters for r and theta (optional)
    double getRadius() const { return r; }
    double getTheta() const { return theta; }
};

// Conversion function: Polar to Rectangle
Rectangle polarToRectangle(const Polar& p) {
    double x = p.r * cos(p.theta);
    double y = p.r * sin(p.theta);
    return Rectangle(x, y);
}

// Conversion function: Rectangle to Polar
Polar rectangleToPolar(const Rectangle& rect) {
    double r = sqrt(rect.getX() * rect.getX() + rect.getY() * rect.getY());
    double theta = atan2(rect.getY(), rect.getX()); // atan2 handles the quadrant correctly
    return Polar(r, theta);
}

int main() {
    // Create a Polar point
    Polar p(5.0, M_PI / 4); // r = 5, θ = π/4 (45 degrees)
    p.display();

    // Convert Polar to Rectangle
    Rectangle rect = polarToRectangle(p);
    rect.display();

    // Convert Rectangle back to Polar
    Polar p2 = rectangleToPolar(rect);
    p2.display();

    return 0;
}
