#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int &y = x;

    x++;
    y++;
    cout << x << endl;

    cout << &x << " " << &y << endl;
}