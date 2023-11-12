#include <iostream>
using namespace std;
main()
{
    int no;
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> no;
    if (no == 2)
    {
        int array[2];
        cout << "Enter 2 elements for the first array, one per line: " << endl;
        cin >> array[0];
        cin >> array[1];
        int num;
        cout << "Enter the number of elements for the second array: ";
        cin >> num;
        int array1[num];
        cout << "Enter " << num << " elements for the second array, one per line: " << endl;
        for (int i = 0; i < num; i++)
        {
            cin >> array1[i];
        }
        cout << "Resulting array: [" << array[0] << ", ";
        for (int i = 0; i < num; i++)
        {
            cout << array1[i] << ", ";
        }
        cout << array[1] << "]";
    }
}