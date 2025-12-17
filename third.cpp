#include <iostream>
using namespace std;

int main()
{

    // BITWISE OPERATORS
    int x = 11, y = 5;
    int z = x & y;

    cout << z << endl;
    z = x | y;

    cout << z << endl;
    z = x ^ y;

    cout << z << endl;

    z = x << 1;

    cout << z << endl;

    // ENUM AND TYPEDEF
    enum day
    {
        mon = 1,
        tue,
        wed,
        thu,
        fri,
        sat,
        sun
    };

    day d;
    d = mon;

    cout << d << endl; // wil output 1

    d = wed;

    cout << d << endl;

    cout << mon;

    float basic_salary, percetin, percentout;
    cout << "enter basic salary ";
    cin >> basic_salary;
    cout << "enter percentage in allowed ";
    cin >> percetin;
    cout << "enter percentage out ";
    cin >> percentout;

    cout << basic_salary + basic_salary * (percetin / 100) - basic_salary * (percentout / 100);
}