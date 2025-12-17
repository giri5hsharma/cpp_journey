#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, r;

    // while (x > 0)
    // {
    //     r = x % 10;
    //     x /= 10;
    //     cout << r << endl;
    // }

    // ARMSTRONG NUMBER
    // int arm = 0;
    // int temp = x;
    // while (x > 0)
    // {
    //     r = x % 10;
    //     x /= 10;
    //     arm += pow(r, 3);
    // }

    // if (arm == temp)
    // {
    //     cout << "armstrong number" << endl;
    // }
    // else
    // {
    //     cout << "not armstrong number";
    // }

    // REVERSE OF NUMBER
    // int temp = 0;
    // while (x > 0)
    // {
    //     temp += x % 10;
    //     x /= 10;
    //     if (x == 0)
    //     {
    //         break;
    //     }
    //     temp *= 10;
    // }

    // cout << "reversed is: " << temp;

    // GCD
    // cout << "enter two numbers to find gcd of: ";
    // int a, b;
    // cin >> a >> b;

    // while (a != b)
    // {
    //     if (a > b)
    //     {
    //         a = a - b;
    //     }
    //     else
    //     {
    //         b = b - a;
    //     }
    // }

    // cout << "greatest common divisor is: " << a << endl;

    // INTEGER PALINDROME

    cout << "enter number";
    cin >> x;
    r = x;
    int temp = 0;

    while (x > 0)
    {
        temp += x % 10;
        x /= 10;
        if (x == 0)
        {
            break;
        }
        temp *= 10;
    }

    if (r == temp)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
}