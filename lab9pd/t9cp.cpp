#include <iostream>
using namespace std;
string longest(string words[], int size);
main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;

    cout << "Enter the words, one by one: " << endl;
    ;
    string words[size];
    for (int i = 0; i < size; i++)
    {
        cin >> words[i];
    }
    string ans = longest(words, size);
    cout << "Longest 7-segment word: " << ans;
}

string longest(string words[], int size)
{
    string result;
    int length = 0;

    for (int i = 0; i < size; i++)
    {
        bool check = true;
        string word = words[i];
        int j = 0;
        int count = 0;

        while (word[j] != '\0')
        {
            if (word[j] == 'k' || word[j] == 'm' || word[j] == 'v' || word[j] == 'w' || word[j] == 'x')
            {
                check = false;
            }
            count++;

            j++;
        }

        if (check == true && count > length)
        {
            result = word;
            length = count;
        }
    }

    return result;
}