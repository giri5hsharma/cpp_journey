#include <iostream>

using namespace std;

int main()
{

    int a = 'a';
    int *p = &a; // declaration and initialise

    cout << a << endl;
    cout << &a << endl;

    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl; // deferencing

    // int *p;
    p = new int[15];
    p[2] = 10;
    cout << *p << endl;
    cout << p[2] << endl;

    delete[] p;
    p = nullptr;

    // DYNAMIC ARRAY REALOCATION
    int *z = new int[5];

    cout << "enter the array of 5: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> z[i];
    }

    cout << "lets modify the array to fully of 10 length!" << endl;

    int *b = new int[10];

    for (int i = 0; i < 5; i++)
    {
        b[i] = z[i];
    }

    delete[] z; // good practice
    z = b;

    for (int i = 0; i < 10; i++)
    {
        cout << z[i];
    }
    cout << endl;
    // POINTER ARTIHMATIC
}