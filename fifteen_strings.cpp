#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // strlen
    char one[10] = "hey there";
    cout << strlen(one);

    // using a pointer

    char *s = new char[50];
    cout << "enter string ";
    cin >> s;
    cout << s << endl;
    delete[] s;

    char first[50];
    char second[50];

    cout << "enter first" << endl;
    cin.getline(first, 50);
    cout << first << endl;

    // cin.ignore();
    // cin.ignore();

    cout << "enter second" << endl;
    cin.getline(second, 50);

    cout << second << endl;
}