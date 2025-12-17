#include <iostream>

using namespace std;

int main()
{
    int A[5] = {2, 4, 8, 10, 6};

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    // ALTERNATE METHOD TO LOOP IS FOR EACH LOOP
    for (int x : A)
    {
        cout << x << endl;
    }

    float B[] = {2.8f, 3.4f, 9.2f, 9, 4, 5};

    for (auto x : B)
    {
        cout << x << endl;
    }

    // ADDING ELEMENTS OF AN ARRAY

    int sum = 0;

    for (auto x : A)
    {
        sum += x;
    }

    cout << "sum of array A is : " << sum;

    // MAX ELEMENT IN ARRAY

    int temp = 0;

    for (auto x : A)
    {
        if (temp > x)
        {
            continue;
        }
        else
        {
            temp = x;
        }
    }
    cout << "max elemnt in array is: " << temp;
}