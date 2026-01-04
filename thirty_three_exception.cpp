#include <iostream>
using namespace std;

int divide(int x, int y)
{
    if (y == 0)
    {
        // throw exception(); // using exception
        throw 10;
    }
    return x / y;
}

int main()
{
    int x = 10, y = 0;

    try
    {
        int z = divide(x, y);
        cout << z << endl;
    }
    // catch (exception e)
    catch (int e)
    {
        cout << "denominator cant be zero!" << endl;
    }

    cout << "Bye" << endl;
}