#include <iostream>
using namespace std;

int main()
{
    char s[50];
    cout << "enter name: ";
    cin.get(s, 50);
    cout << s << endl;
    char a[30];
    cin.ignore();
    cout << "enter name again";
    cin.get(a, 30);
    cout << a << endl;

    // STRINGS FUNCTIONS
}