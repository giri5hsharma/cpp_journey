#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A;

    cout << *p << endl;

    p++;
    cout << *p << endl;
    p++;
    p++;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;

    p = p - 3;
    cout << *p << endl;
    

    int *q = &A[4];

    cout << q - p << endl; // tells difference between the pointers
}