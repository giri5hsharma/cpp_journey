#include <iostream>
using namespace std;

void swap(int a, int b) // PASS BY VALUE
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << " " << y << endl; // values dont change in swap by value of actual parameters
}