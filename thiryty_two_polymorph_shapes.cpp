#include <iostream>
using namespace std;

class Base
{
private:
    int length, breadth;

public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
};

class Square : public Base
{
private:
    int breadth, length;

public:
    Square(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

class Circle : public Base
{
private:
    int radius;

public:
    Circle(int r)
    {
        radius = r;
    }

    int area()
    {
        return 3.14 * radius * radius;
    }

    int perimeter()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    Base *ptr = new Square(5, 10);
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;
    ptr = new Circle(10);
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;
}