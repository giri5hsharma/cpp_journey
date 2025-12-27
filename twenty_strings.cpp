#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "HEllo world"; // str is object belong to class str
    // cout << "endter a string" << endl;
    // getline(cin, str);
    // cout << str << endl;

    // STRING FUNCTIONS
    cout << str.length() << endl;
    cout << str.size() << endl;
    cout << str.capacity() << endl;
    str.resize(30);
    cout << str.capacity() << endl;
    cout << str.max_size() << endl;
    str = "";
    cout << str.empty() << endl;
    cout << str.capacity() << " " << str.length() << endl;

    // APEND
    str.append("noppepeeeeeenoppepeeeeeenoppepeeeeeenoppepeeeeeenoppepeeeeee");
    cout << str.capacity() << " " << str.length() << endl;
}