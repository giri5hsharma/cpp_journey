#include <iostream>
using namespace std;

int main()
{

    int A[2][2] = {{1, 2},
                   {3, 4}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    int B[2][3] = {3, 3, 3, 3, 3, 3};
    int C[2][3] = {1, 1, 1, 1, 1, 1};

    int D[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            D[i][j] = B[i][j] + C[i][j];
            cout << D[i][j] << " ";
        }
        cout << endl;
    }

    // AVERAGE ARRAY

    int E[100];

    cout << "enter length of array: ";
    int n;
    cin >> n;
    cout << "enter elemets of the array: ";

    for (int i = 0; i < n; i++)
    {
        cout << "index " << i << " : ";
        cin >> E[i];
    }
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += E[i];
    }

    int avg = (sum / n);

    cout << "average of the array is: " << avg;
}
