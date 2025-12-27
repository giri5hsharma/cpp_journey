#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length = 0, breadth = 0;

public:
    // Rectangle()
    // {
    //     length = 0;
    //     breadth = 0;
    // }

    Rectangle(int l = 0, int b = 0)
    {
        selLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle(&r))
    {
        length = r.length;
        breadth = r.breadth;
    }

    int selLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }
    int setBreadth(int b)
    {
        if (b >= 0)
        {
            return breadth = b;
        }
        else
        {
            return breadth = 0;
        }
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return (length * breadth);
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{

    Rectangle r1;
    int l, b;
    cout << "enter length: " << endl;
    cin >> l;
    cout << "enter breadth: " << endl;
    cin >> b;
    r1.setBreadth(b);
    r1.selLength(l);
    cout << "area is " << r1.area() << endl;
    cout << "perimeter is " << r1.perimeter() << endl;

    Rectangle r2(l, b);
    // r2(l, b);
    cout << "area is " << r2.area() << endl;
    cout << "perimeter is " << r2.perimeter() << endl;
}