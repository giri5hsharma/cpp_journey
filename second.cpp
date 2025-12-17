#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "please enter base and height of traingel" << endl;
    cin >> a >> b;

    int c = (float)(a * b) / 2;

    cout << "the area of triangle with specifications; base " << a << " and height " << b << " is: " << c << endl;

    // SUM UPTO N NATURAL NUMBERS
    cout << "enter which number u want to find till: " << endl;
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << "sum is " << sum << endl;

    return 0;
}