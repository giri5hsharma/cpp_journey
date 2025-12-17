#include <iostream>
using namespace std;

int main()
{

    // LINEAR SEARCH
    // int A[10], n = 10;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "enter " << i + 1 << " term of array!";
    //     cin >> A[i];
    // }

    // cout << "enter key to be found! ";
    // int key;
    // cin >> key;

    // for (int i = 0; i < n; i++)
    // {
    //     if (A[i] == key)
    //     {
    //         cout << "key foudn at : " << i << endl;
    //         return 0;
    //     }
    // }

    // cout << "key not in user defined array1";

    // BINARY SEARCH

    int B[10], b = 10;
    cout << "please enter array numbers: ";

    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
    }

    cout << "please enter key";
    int key;
    cin >> key;

    int low = 0;
    int high = 9;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (key == B[mid])
        {
            cout << "key found at index: " << mid << " key: " << B[mid];
            return 0;
        }
        else if (key > B[mid])
        {
            low = mid + 1;
        }
        else if (key < B[mid])
        {
            high = mid - 1;
        }
    }

    cout << "key not found";
}