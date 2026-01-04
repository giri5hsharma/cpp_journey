#include <iostream>
using namespace std;

class Car // GENERLAISATION
{
public:
    virtual void start() = 0;
};

class Innova : public Car
{
public:
    void start()
    {
        cout << "Innova started" << endl;
    }
};

class Swift : public Car
{
public:
    void start()
    {
        cout << "Swift Started" << endl;
    }
};

int main()
{
    Car *ptr = new Innova();
    ptr->start();
    ptr = new Swift();
    ptr->start();
}