#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};

class Rectangle
{
public:
    void fun1()
    {
        cout << "rectangle!" << endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void fun2()
    {
        cout << "cuboid" << endl;
    }
};

class BasicCar
{
public:
    void car1()
    {
        cout << "basic" << endl;
    }
};

class AdvanceCar : public BasicCar
{
public:
    void car2()
    {
        cout << "advanced" << endl;
    }
};

int main()
{
    // METHOD 1

    // Derived d;
    // Base *ptr = &d;

    // METHOD 2
    Base *ptr;
    ptr = new Derived();
    ptr->fun1();
    // ptr->fun2(); // SHOUDL GIVE ERROR

    // CLASS EXAMPLE 2
    Rectangle *ptr2;
    ptr2 = new Cuboid();
    ptr2->fun1();
    // ptr2->fun2(); //WILL NOT WORK

    // EXAMPLE 3
    AdvanceCar a;
    BasicCar *ptr3 = &a;
    ptr3->car1();
    // ptr3->car2(); //RETURNS ERROR
}