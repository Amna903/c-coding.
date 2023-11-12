#include <iostream>
using namespace std;

void ans(string array[])
{
    int count = 0;
    for (int i = 0; i < array[0].size(); i++)
    {
        for (int j = 0; j < array[1].size(); j++)
        {
            if (array[0][i] == array[1][j])
            {
                count++;
                array[1][j] = ' '; 
                break;
            }
        }
    }
    cout << "Number of common characters: " << count;
}

int main()
{
    string array[2];
    cout << "Enter the first string: ";
    cin >> array[0];
    cout << "Enter the second string: ";
    cin >> array[1];
    ans(array);
}
