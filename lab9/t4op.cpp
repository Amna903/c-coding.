#include <iostream>
using namespace std;
main()
{
    int no;
    cout << "Enter the number of elements: ";
    cin >> no;
    int number[no];
     if (no <= 0)
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    
    }
    if (no > 0)
    {
        cout << "Enter " << no << " numbers, one per line: " << endl;
        for (int i = 0; i < no; i++)
        {
            cin >> number[i];
        }
        cout << "Numbers in reverse order: ";
        for (int j = no - 1; j >= 0; j--)
        {
            cout << number[j] << " ";
        }
    }
   
}