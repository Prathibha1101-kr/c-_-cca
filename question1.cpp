#include <iostream>
#include <cstdio>
using namespace std;

class Shape {
public:
    virtual void area() {
    }
};

class Circle : public Shape {
    float r;

public:
    Circle(float x) {
        r = x;
    }

    void area() {
        printf("Area of Circle = %.2f", 3.14 * r * r);
    }
};

class Rectangle : public Shape {
    float l, b;

public:
    Rectangle(float x, float y) {
        l = x;
        b = y;
    }

    void area() {
        cout << "Area of Rectangle = " << l * b;
    }
};

int main() {
    Shape *s;

    Circle c(5);
    Rectangle r(4, 5);

    s = &c;
    s->area();

    return 0;
}