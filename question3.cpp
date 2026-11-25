#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayDetails() {
    }
};

class Bike : public Vehicle {
public:
    void displayDetails() {
        cout << "Vehicle: Bike" << endl;
        cout << "Brand: Honda" << endl;
        cout << "Model: Shine" << endl;
    }
};

class Car : public Vehicle {
public:
    void displayDetails() {
        cout << "Vehicle: Car" << endl;
        cout << "Brand: Hyundai" << endl;
        cout << "Model: i20" << endl;
    }
};

class Bus : public Vehicle {
public:
    void displayDetails() {
        cout << "Vehicle: Bus" << endl;
        cout << "Brand: Volvo" << endl;
        cout << "Model: Express" << endl;
    }
};

int main() {
    Vehicle *v;

    Bike b;

    v = &b;

    v->displayDetails();

    return 0;
}