#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length = 0;
    int breadth = 0;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }

    int setLength(int l);
    int setBreadth(int b);
    int perimeter();
    int getLength();
    int getBreadth();
    int area();
};

class Cuboid : public Rectangle
{
private:
    int height = 0;

public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        setHeight(h);
        setBreadth(b);
        setLength(l);
    }

    void setHeight(int h)
    {
        height = h;
    }

    int volume();
    int getHeight();
};

int main()
{
    Rectangle rect;
    rect.setBreadth(10);
    rect.setLength(10);
    cout << rect.perimeter() << endl;
    cout << rect.area() << endl;

    Cuboid cub;
    cub.setLength(10);
    cub.setBreadth(10);
    cub.setHeight(10);
    cout << cub.volume() << endl;
}

int Cuboid::volume()
{
    return getLength() * getBreadth() * height;
}

int Cuboid::getHeight()
{
    return height;
}

int Rectangle::setLength(int l)
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

int Rectangle::setBreadth(int b)
{
    if (b >= 0)
    {
        breadth = b;
    }
    else
    {
        breadth = 0;
    }
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::area()
{
    return (length * breadth);
}