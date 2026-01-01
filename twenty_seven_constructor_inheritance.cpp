#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "non param ofbase" << endl;
    }

    Base(int x)
    {
        cout << "param of base" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "non param of derived" << endl;
    }

    Derived(int y)
    {
        cout << "param of derived" << endl;
    }

    Derived(int x, int y) : Base(x)
    { // calling base class param constructor from derived
        cout << "param of derived" << endl;
    }
};

int main()
{
    Derived d; // return non param of base -> non param of derived
    Derived a(5, 10);
}