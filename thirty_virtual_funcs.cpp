#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "base class" << endl;
    }

    virtual void fun2()
    {
        cout << "base class 2" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "derived class" << endl;
    }

    void fun3()
    {
        cout << "Derived Class 2" << endl;
    }
};

int main()
{

    Base *ptr = new Derived();
    ptr->fun(); // if i dont use virtual then
    ptr->fun2();
    // ptr->fun3(); // ts wont work
}