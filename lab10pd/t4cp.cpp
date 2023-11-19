#include <iostream>
using namespace std;
int volume(int box, int array[]);
main()
{
    int box;
    cout << "Enter the number of boxes: ";
    cin >> box;
    box = box * 3;
    int array[box];
    int ans= volume( box,  array);
    cout<<"Total volume of all boxes: "<<ans;
}

int volume(int box, int array[])
{
    int sum = 0;
    int ans = 1;
    int count1 = 0;
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;
    for(int i=0;i<box;i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < box; i++)
    {
        ans = ans * array[i];
        count1++;
        if (count1 % 3 == 0)
        {
            sum = sum + ans;
            ans=1;
        }
    }
    return sum;
}