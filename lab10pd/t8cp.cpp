#include <iostream>
using namespace std;
main()
{ int count=0;
int result=0;
    cout<<"Enter the length of the array: ";
    int no;
    cin>>no;
    string array[no];
    cout<<"Enter the elements of the array (\"left\" or \"right\"): "<<endl;
    for(int i=0;i<no;i++)
    {
        cin>>array[i];
        if(array[i]=="right")
        {
            count++;
        }
        if(array[i]=="left")
        {
            count--;
        }

        
       
    }
     result = abs(count / 4);
   
    cout<<"Number of full rotations: "<<result;
}   