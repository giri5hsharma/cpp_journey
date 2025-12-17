#include <iostream>
using namespace std;

int main()
{
    // PATTERNS
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (i > j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j >= 0; j--)
        {
            if (j > i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    // PYRAMID

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= (4 - i - 1); j++) // loop for spaces
        {
            cout << " ";
        }
        for (int j = (4 - i); j < 5; j++) // loop for left side stars
        {
            cout << "*";
        }

        for (int j = i; j > 0; j--) // loop for right side stars
        {
            cout << "*";
        }

        cout << endl;
    }

    // HOLLOW PYRAMID

    for (int i = 0; i < 5; i++) // going ahead loop
    {
        for (int j = 0; j < 5 - i - 1; j++) // first spaces
        {
            cout << " ";
        }

        cout << "*";                                  // first star
        for (int j = 0; j < (1 + (2 * (i - 1))); j++) // spaces between each star
        {
            cout << " ";
        }
        if (i > 0) // second star only after second row
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++) // spaces
        {
            cout << " ";
        }

        cout << "*";

        for (int j = 0; j < ((2 * ((3 - i))) - 1); j++)
        {
            cout << " ";
        }

        if (i < 3)
        {
            cout << "*";
        }

        cout << endl;
    }
}