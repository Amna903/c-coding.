#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of chords: ";
    int no;
    cin >> no;
    string array[no];
    cout << "Enter " << no << " chords, one per line: " << endl;
    for (int i = 0; i < no; i++)
    {
        cin >> array[i];
    }

    cout << "Jazzified chords: [";
    for (int k = 0; k < no; k++)
    {
        int length = 0;
        while (array[k][length] != '\0')
        {
            length++;
        }
        if (array[k][length - 1] != '7')
        {
            cout << array[k] << "7";
        }
        else
        {
            cout << array[k];
        }
        if (k != no - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
    return 0;
}
