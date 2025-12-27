#include <iostream>
using namespace std;

class Rectangle
{

public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1, r2;

    // accessing via variable name
    r1.length = 50;
    r2.length = 20;
    r1.breadth = 100;
    r2.breadth = 100;

    cout << " Area of r1 is : " << r1.area() << endl;
    cout << " Area of r2 is : " << r2.area() << endl;
    cout << "perimeter of r1 is: " << r1.perimeter() << endl;
    cout << "perimeter of r2 is: " << r2.perimeter() << endl;

    // pointer to an object
    Rectangle r3;
    Rectangle r4;

    Rectangle *p;
    Rectangle *p2;

    p = &r3;
    p2 = &r4;

    p2->length = 35;
    p2->breadth = 24;

    p->length = 10;
    p->breadth = 20;

    cout << p->area() << endl;
    cout << p->perimeter() << endl;

    cout << p2->area() << endl;
    cout << p2->perimeter() << endl;
}