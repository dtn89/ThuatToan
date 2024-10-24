/*
    Write a C++ program to implement a class called Circle
    that has private member variables for radius.
    Include member functions to calculate the circle's area and circumstance
 */

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;  // Define the value of PI as a constant

class Circle
{
    private:
        double radius;
    
    public:
        // Constructor to initialize the Circle object with a radius
        Circle(double rad) : radius(rad) {}

        double calculateArea()
        {
            return PI * pow(radius, 2);
        }

        double calculateCircumference()
        {
            return 2 * PI * radius;
        }
};

int main()
{
    double radius;
    cout << "Input the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);  // Create a Circle object with the given radius

    // Calculate and display the area of the circle
    double area = circle.calculateArea();
    cout << "Area: " << area << endl;

    // Calculate and display the circumference of the Circle
    double circumference = circle.calculateCircumference();
    cout << "Circumference: " << circumference << endl;
    
    return 0;
}