#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    void calculate() {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;

        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not possible" << endl;
    }
};

int main() {
    int x, y;

    cout << "Enter two values: ";
    cin >> x >> y;

    Calculator<int> c(x, y);
    c.calculate();

    return 0;
}