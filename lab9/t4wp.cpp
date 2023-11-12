
#include <iostream>
using namespace std;
main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter no:";
        cin >> num[i];
    }

    cout << "The 1st element is: " << num[0] << endl;
    cout << "The last element is: " << num[4] << endl;
}