#include <iostream>
using namespace std;
main()
{
    cout<<"Enter the size of the array: ";
    int no;
    bool ans=true;
    cin>>no;
    int array[no];
   cout << "Enter " << no << " elements of the array: " << endl;
    for (int i = 0; i < no; i++)
    {
        cin >> array[i];
    }
    for (int j = 0; j < no; j++)
    {
        if(j%2==0)
        {
          if(array[j]%2!=0)
        ans=false;
        break;
        }
        
        if(j%2!=0)
        {
          if(array[j]%2==0)
        ans=false;
        break;
        }
    }
    if (ans==false)
    {cout<<"The array is not special";}
if (ans==true)
    {cout<<"The array is special";}



}