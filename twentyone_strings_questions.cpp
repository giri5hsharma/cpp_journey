#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hhelo WoEld";
    string::iterator it;
    int count = 0;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }

    cout << "lenght of string is : " << count << endl;

    int length = str.length();

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }

    cout << "uppercase is: " << str << endl;
    // count number of vovels, consonats, etc.

    string sample = " yasu    ./da janam hoya";
    length = sample.length();

    int vowel = 0, consonant = 0, word = 0;

    for (int i = 0; i < length; i++)
    {

        // NEED TO KEEP WORD DETECTION LOGIC
        if (sample[i] != ' ' && (i == 0 || sample[i - 1] == ' '))
        {
            word++;
        }

        if (sample[i] == 'A' || sample[i] == 'E' || sample[i] == 'I' || sample[i] == 'O' || sample[i] == 'U' || sample[i] == 'a' || sample[i] == 'e' || sample[i] == 'i' || sample[i] == 'o' || sample[i] == 'u')
        {
            vowel++;
        }
        else if ((sample[i] >= 97 && sample[i] <= 122) || (sample[i] >= 65 && sample[i] <= 90))
        {
            consonant++;
        }
    }

    cout << "vowel: " << vowel << endl;
    cout << "consonant: " << consonant << endl;
    cout << "word: " << word << endl;

    // PALINDROME
    string first = "hehe";
    string rev;

    string::reverse_iterator it3;

    for (it3 = first.rbegin(); it3 != first.rend(); it3++)
    {
        rev.push_back(*it3);
    }

    if (first == rev)
    {
        cout << "palindrome " << first << " " << rev << endl;
    }
    else
    {
        cout << "not palindrome" << first << " " << rev << endl;
    }
}
