#include <iostream>
#include <string>
using namespace std; // replace need to write std:: every time while outputting

int main()
{
    // int a, b, c;
    // cout << "please enter 2 numbers";
    // cin >> a >> b;

    // c = a + b;

    // cout << "the addition is " << c << endl; // endl pushes code onto next line

    // CANT RUN BOTH PROGRAMMES SOME BS HAPPENING

    string name;

    cout << "please enter your name ";
    getline(cin, name);
    cout << "welcome mr/ms " << name << endl;
    return 0;
}