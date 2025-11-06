#include <iostream>
using namespace std;

class Rectangle {
    double length;
    double breadth;

public:
    Rectangle() {
        length = 1;
        breadth = 1;
    }

    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of Rectangle: " << area() << endl;
    }
};

int main() {
    Rectangle rect1;

    Rectangle rect2(5, 3);

    cout << "Rectangle 1: ";
    rect1.displayArea(); 
    cout << "Rectangle 2: ";
    rect2.displayArea();  

    return 0;
}
