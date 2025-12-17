#include <iostream>
using namespace std;

int main()
{

    // FOR LOOP  for (initialisation, condition, updation){
    //}

    // WHILE while(condition){
    // }

    // DO WHILE do {
    // } while(condition)

    // while and do while almost same shit

    // MULTIPLICATION

    cout << "enter whicho number u wanrt table of: ";
    int a;
    cin >> a;

    for (int i = 1; i <= 10; i++)
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }

    cout << "enter the number u want to find sum till ";
    int b;
    cin >> b;
    int sum = 0;

    for (int i = 1; i <= b; i++)
    {
        sum += i;
    }

    cout << "sum is " << sum << endl;

    cout << "factorial of : ";
    int c;
    cin >> c;
    int fact = 1;

    for (int i = 1; i <= c; i++)
    {
        fact *= i;
    }

    cout << "factorial is " << fact << endl;

    cout << "enter number you want to find factors of: ";
    int d;
    cin >> d;
    cout << "the factors are: ";

    for (int i = d; i > 0; i--)
    {
        if (d % i == 0)
        {
            cout << i << endl;
        }
        else
        {
            continue;
        }
    }

    cout << "enter perfect number to check: ";
    int e;
    cin >> e;
    sum = 0;

    for (int i = e - 1; i > 0; i--)
    {
        if (e % i == 0)
        {
            sum += i;
        }
    }
    if (sum == e)
    {
        cout << "entered number " << e << " is a perfect number!" << endl;
    }
    else
    {
        cout << "not a perfect number" << endl;
    }

    cout << "Enter prime number to check!";
    int f;
    cin >> f;
    sum = 0;

    for (int i = 1; i < f; i++)
    {
        if (f % i == 0)
        {
            sum += i;
        }
    }

    if (sum == 1)
    {
        cout << "given number is prime" << endl;
    }
    else
    {
        cout << "not a prime number!";
    }
}