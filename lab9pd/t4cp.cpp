#include <iostream>
using namespace std;

void ans(int array[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    int no;
    cin >> no;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            array[i] = array[i] - (2 * no);
        }

        if (array[i] % 2 != 0)
        {
            array[i] = array[i] + (2 * no);
        }
    }
    cout << "[";
    for (int i = 0; i < size - 1; i++)
    {
        cout << array[i] << ", ";
    }
    cout << array[size - 1] << "]";
}

int main()
{
    cout << "Enter the size of Array: ";
    int size;
    cin >> size;
    int array[size];
    ans( array,  size);}
