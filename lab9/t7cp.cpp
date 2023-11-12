#include <iostream>
using namespace std;
main()
{
    int no;
    float sum = 0;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> no;
    float array[no];
    cout << "Enter the resistance values (in ohms) of the " << no << " resistors, one per line: " << endl;
    for (int i = 0; i < no; i++)
    {
        cin >> array[i];
        sum = sum + array[i];
    }
    cout << "The total resistance of the series circuit is " << sum << " ohms.";
}