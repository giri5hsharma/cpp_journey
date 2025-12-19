#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // strlen
    char one[10] = "hey there";
    cout << strlen(one);

    // using a pointer

    char *s;
    cout << "enter string ";
    cin >> (s);
    cout << strlen(s);
}