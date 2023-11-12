#include <iostream>
using namespace std;

bool ans(int size, string array[])
{
    bool result = true;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        if(array[i] != array[i+1])
        {
            result = false;
            break;
        }
    }
    return result;
}

int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string array[size];
    bool conclusion = ans(size, array);
cout<<conclusion;
}
