#include <iostream>

using namespace std;

int g = 5;

int fun()
{
    int g = 0;
    static int damn = 0;
    damn++;
    ::g++; //:: refers to the global variable
    cout << "damn: " << damn << endl;
    cout << "global g: " << ::g << endl;
}

int main()
{
    cout << g << endl;
    fun();
    fun();
    fun();
    cout << g << endl;
}