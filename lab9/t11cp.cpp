#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);
    string result = "";
    for (int i = 0; i < line.length(); ++i) {
        char c = line[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    cout << "String with vowels removed: " << result << endl;
    return 0;
}
