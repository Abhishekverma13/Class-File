#include <iostream>
using namespace std;

class Rectangle {
private:
    int length; // Private attribute
    int breadth; // Private attribute

public:
    // Constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function to calculate the area of the rectangle
    int area() {
        return length * breadth;
    }
};

int main() {
    // Creating an instance of the Rectangle class
    Rectangle r(10, 5);

    // Accessing the member function area() of the Rectangle class
    cout << "Area of rectangle is " << r.area() << endl;

    return 0;
}

