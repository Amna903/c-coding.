#include <iostream>
using namespace std;
int progress(int saturday[], int number);
main()
{
    int number;
    cout << "Enter the number of Saturdays: ";
    cin >> number;
    int saturday[number];
    int ans = progress(saturday, number);
    cout << "Total progress days: " << ans;
}

int progress(int saturday[], int number)
{
    int count = 0;
    for (int i = 0; i < number; i++)
    {
        cout << "Enter miles run for Saturday "<<i+1<<": ";
        cin >> saturday[i];
    }
    for (int i = 0; i < number-1; i++)
    {
        if (saturday[i] < saturday[i + 1])
        {
            count++;
        }
    }
    return count;
}