#include <iostream>
using namespace std;

void memory()
{
    int a = 10;
    int *p = new int[10]; //{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << "stack: " << &a << endl;
    cout << "heap: " << p << endl;

    // delete[] p; // rmeovig this line will lead to memory leak and new multiple addresses of heap
    // NOTE: HEAP p WILL GIVE SAME ADDRESS AS MEMORY BEING REUSED

    p = new int[100]; // reassigning poi-nters

    cout << "stack: " << &a << endl;
    cout << "heap: " << p << endl;

    // delete[] p;
}

int main()
{
    memory();
    memory();
    memory();
    memory();
    memory();
}