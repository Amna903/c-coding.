#include <iostream>
using namespace std;
int result(int size, string array[]);
main()
{
    cout << "Enter the size of Array: ";
    int size;
    cin >> size;
    string array[size];
    int conclude = result(size, array);
    cout << "Time to color: " << conclude << " seconds";
}
int result(int size, string array[])
{
    int count = 0, ans = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
        ans = ans + 2;
    }
    if(size>1){
    for (int i = 1; i < size; i++)
    {
        if (array[i] != array[i - 1])
        {
            count = count + 1;
        }
    }}
    ans = ans + count;
    return ans;
}