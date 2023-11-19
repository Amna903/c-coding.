#include <iostream>
using namespace std;
main()
{int count=0;

    cout<<"Enter the length of the array: ";
    int no;
    cin>>no;
    int arr[no];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<no;i++)
    {
        cin>>arr[i];
       
        if(arr[i]>0)
        {count++;}
    }
    if(count==0)
    {
        count=-1;
    }
    cout<<"Special value: "<<count;
}