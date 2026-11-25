#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
    }
};

class Developer : public Employee {
    int basic, bonus;

public:
    Developer(int b, int x) {
        basic = b;
        bonus = x;
    }

    void calculateSalary() {
        cout << "Total Salary = " << basic + bonus;
    }
};

class Manager : public Employee {
    int basic, allowance;

public:
    Manager(int b, int a) {
        basic = b;
        allowance = a;
    }

    void calculateSalary() {
        cout << "Total Salary = " << basic + allowance;
    }
};

int main() {
    Employee *e;

    Developer d(30000, 5000);

    e = &d;

    e->calculateSalary();

    return 0;
}