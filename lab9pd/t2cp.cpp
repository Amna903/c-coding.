#include <iostream>
using namespace std;

bool ans(string array[], int size)
{
    bool result = false;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
        int length = 0;
        while(array[i][length] != '\0')
        {
            if(array[i][length] == '7')
            {
                result = true;
                break;
            }
            length++;
        }
    }
    return result;
}

int main()
{
    cout << "Enter the size of Array: ";
    int size;
    cin >> size;
    string array[size];
    bool result = ans(array, size);
    if(result == true)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "there is no 7 in the array";
    }
    return 0;
}
