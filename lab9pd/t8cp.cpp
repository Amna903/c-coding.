#include <iostream>
#include <string>
using namespace std;

string findBrokenKeys(string phrase, string line)
{
    string brokenKeys = "";
    for(int i = 0; i < phrase.length(); i++)
    {
        if(phrase[i] != line[i])
        {
           if(brokenKeys.find(phrase[i]) == string::npos) // Check if key is already in brokenKeys
            {
                brokenKeys += phrase[i];
            }


        }
    }
    return brokenKeys;
}

int main()
{
    cout << "Enter the correct phrase: ";
    string phrase;
    getline(cin, phrase);

    cout << "Enter what you actually typed: ";
    string line;
    getline(cin, line);

    string brokenKeys = findBrokenKeys(phrase, line);
    cout << "Broken keys: " << brokenKeys << endl;

    return 0;
}
