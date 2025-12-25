#include <iostream>
#include <cstring> //needed for strlen
using namespace std;

int main()
{
    // STRLEN
    char s[10] = "Hello";
    cout << strlen(s);

    char *ptr = new char[100];
    cin.getline(ptr, 100);
    cout << "lenght: " << strlen(ptr) << endl;

    // CONCATENATE STRINGS
    char s1[20] = "Good";
    char s2[20] = "Morning";

    strcat(s1, s2);
    cout << s1 << endl;
    // COPY STRINGS
    strcpy(s2, s1);
    cout << s2 << endl;

    // OCCURENCE OF STRING IN STRING
    char first[20] = "good morning";
    char second[20] = "q";

    if (strstr(first, second) != NULL)
    {
        cout << strstr(first, second) << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    // OCCURENCE OF CHARACTER IN STRING

    
}