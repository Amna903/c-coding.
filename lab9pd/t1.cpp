#include <iostream>
using namespace std;
bool trueorfalsle(int result);
main()
{
    string word;
    cout << "Enter a String: ";
    cin >> word;
    int result = 0;
    while (word[result] != '\0')
    {
        result++;
    }
    bool ans = trueorfalsle(result);
    cout << ans;
}
bool trueorfalsle(int result)
{
    if (result % 2 == 0)
    {
        return true;
    }
    if (result % 2 != 0)
    {
        return false;
    }
}