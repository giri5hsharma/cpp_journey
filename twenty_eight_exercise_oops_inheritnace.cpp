#include <iostream>
using namespace std;

class Employee
{
private:
    int eid;
    string name;

public:
    Employee(int e, string n)
    {
        eid = e;
        name = n;
    }

    void setEid(int x)
    {
        eid = x;
    }

    void setName(int n)
    {
        name = n;
    }

    int getEid()
    {
        return eid;
    }

    string getName()
    {
        return name;
    }
};

class PartTimeEmployee : public Employee
{
private:
    double perhour;

public:
    PartTimeEmployee(int e, string n, int h) : Employee(e, n)
    {
        perhour = h;
    }

    int display()
    {
        return perhour;
    }
};

class FullTimeEmployee : public Employee
{
private:
    double pay;

public:
    FullTimeEmployee(int e, string n, int p) : Employee(e, n)
    {
        pay = p;
    }

    int display()
    {

        return pay;
    }
};

int main()
{

    FullTimeEmployee e1(1, "Girish", 55500000);
    PartTimeEmployee e2(2, "Arnav", 1000);

    cout << "the salary of " << e1.getName() << "is " << e1.display() << endl;
    cout << "the salary of " << e2.getName() << "is " << e2.display() << endl;
}