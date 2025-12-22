#include <iostream>
using namespace std;

// CALL BY VALUE
// void swap(int a, int b) // PASS BY VALUE
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int x = 10, y = 20;
//     swap(x, y);
//     cout << x << " " << y << endl; // values dont change in swap when value of actual parameters
// }

// CALL BY ADDRESS

// int swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *b = *a;
//     *a = temp;
// }

// int main()
// {
//     int x = 10, y = 20;
//     swap(&x, &y);
//     cout << x << " " << y << endl; // VALUE CHANGES IN SWAP WHEN CALL BY ADDRESS
// }

// CALL BY REFERENCE

int swap(int &a, int &b) // the & is making them references
{
    cout << &a << " " << &b << endl; // gives same address as x and y
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y); // dont need to pass address
    cout << x << " " << y << endl;
    cout << &x << " " << &y << endl; // gives same address as a and b
}