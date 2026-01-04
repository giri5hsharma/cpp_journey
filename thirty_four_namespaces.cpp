#include <iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout << "damn" << endl;
    }
}

namespace Second
{
    void fun()
    {
        cout << "damndamn" << endl;
    }
}

using namespace First;

int main()
{
    // First::fun();
    fun();
    Second::fun();
}