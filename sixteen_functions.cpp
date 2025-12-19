#include <iostream>
using namespace std;

template <class T> // TEMPLATE FUNCTION
T Min(T a, T b)
{
    return a < b ? a : b; // TERNARY FUNCTIN
}
int sum(int a, int b, int c = 0, int d = 0) // DEFAULT PARAMETERS
{
    return a + b + c + d;
}

int main()
{
    cout << Min(10, 2) << endl;

    cout << sum(10, 5) << endl;
    cout << sum(10, 5, 7) << endl;
    cout << sum(10, 5, 7, 10) << endl;
}