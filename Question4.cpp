#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    Box() {
        length = 1;
        breadth = 1;
        height = 1;
    }


    Box(double side) {
        length = breadth = height = side;
    }

   
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    
    double volume() {
        return length * breadth * height;
    }

    
    void displayVolume() {
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
   
    Box box1;          
    Box box2(5);       
    Box box3(2, 3, 4);  

   
    cout << "Box 1 : ";
    box1.displayVolume();

    cout << "Box 2 : ";
    box2.displayVolume();

    cout << "Box 3 : ";
    box3.displayVolume();

    return 0;
}
