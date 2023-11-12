#include <iostream>
using namespace std;

int main ()
{
    int no;
    cout << "Enter the number of elements: ";
    cin >> no;
    int array[no];
    cout << "Enter " << no << " numbers, one per line: "<<endl;
    for(int i = 0; i < no; i++)
    {
        cin >> array[i];
        bool alreadyEntered = false;
        for(int j = 0; j < i; j++)
        {
            if(array[j] == array[i])
            {
                alreadyEntered = true;
                break;
            }
        }
        if(alreadyEntered)
        {
            cout << "Already Entered: "<< array[i] << endl;
        }
    }
    cout << "Unique numbers entered: ";
    for(int i = 0; i < no; i++)
    {
        bool alreadyPrinted = false;
        for(int j = 0; j < i; j++)
        {
            if(array[j] == array[i])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if(!alreadyPrinted)
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;
    return 0;
}

