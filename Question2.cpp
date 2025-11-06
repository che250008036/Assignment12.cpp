#include <iostream>
using namespace std;

class Complex {
private:
    double real, imaginary;

public:
   
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(double r) {
        real = r;
        imaginary = 0;
    }

    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }
    void display() {
        cout << real;
        if (imaginary >= 0)
            cout << " + " << imaginary << "i" << endl;
        else
            cout << " - " << -imaginary << "i" << endl;
    }
};

int main() {
    Complex c1; 
    Complex c2(5); 
    Complex c3(3, 4);
    cout << "Complex number c1: ";
    c1.display(); 

    cout << "Complex number c2: ";
    c2.display(); 

    cout << "Complex number c3: ";
    c3.display(); 
    return 0;
}
