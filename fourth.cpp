#include <iostream>
using namespace std;

int main()
{

    // SWITCH SHIT
    int x;

    cin >> x;

    switch (x)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuwsday";
        break;
    default:
        cout << "damn";
    }

    cout << "please enter menu option: 1. add\n 2. sub\n3. mul\n4. divide ";
    int a;
    cin >> a;
    int b, c;
    cout << "enter two numbers: ";
    cin >> b >> c;

    switch (a)
    {
    case 1:
        cout << b + c;
        break;
    case 2:
        cout << b - c;
        break;
    case 3:
        cout << b * c;
        break;
    case 4:
        cout << b / c;
        break;
    default:
        cout << "invalid";
    }
}