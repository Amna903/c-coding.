#include <iostream>
using namespace std;

bool check(int no, int array[]);

int main()
{
    int no;
    cout << "Enter the length of the array: ";
    cin >> no;
    int array[no];

    bool result = check(no, array);
    cout << "Can be arranged: " << result ;
}

bool check(int no, int array[])
{
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < no; i++)
    {
        cin >> array[i];
    }

    
    for (int i = 0; i < no; i++)
    {
        for (int j = i + 1; j < no; j++)
        {
            if (array[i] == array[j])
            {
                return false;
            }
        }
    }

    
    int min = array[0];
    for (int i = 1; i < no; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }


    for (int i = 0; i < no; i++)
    {
        int count = 0;
        for (int j = 0; j < no; j++)
        {
            if (array[j] == min + i)
            {
                count++;
            }
        }
        if (count != 1)
        {
            return false;
        }
    }

    return true;
}
