#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    double price;

public:
  
    Car(string b, double p) {
        brand = b;
        price = p;
    }

   
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
   
    Car car1("Scorpio", 25000);
    Car car2("BMW", 55000);

    cout << "Car 1 Details:" << endl;
    car1.displayDetails();
    cout << endl;

    cout << "Car 2 Details:" << endl;
    car2.displayDetails();

    return 0;
}
