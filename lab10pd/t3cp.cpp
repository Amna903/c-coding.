#include <iostream>
using namespace std;

bool ans(int length, int array[]);

int main()
{
    cout << "Enter the length of the array: ";
    int length;
    cin >> length;
    int array[length];

    bool result = ans(length, array);
    cout << "Output: "<<result;
}

bool ans(int length, int array[])
{
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }

    cout << "Enter the length of the cycle: ";
    int cycle;
    cin >> cycle;

    if (cycle > length)
    {
        return true;
    }

    for (int i = 0; i < length; i++)
    {
        if (array[i] != array[i % cycle])
        {
            return false;
        }
    }

    return true;
}
