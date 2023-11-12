#include <iostream>
using namespace std;
main()
{
    int no;
    cout<<"Enter the number of elements: ";
    cin>>no;
    int array[no];
    cout << "Enter " << no << " numbers, one per line: " << endl;
    for (int i = 0; i < no; i++)
    {
        cin >> array[i];
 }
 int maxno= array[0];
 for (int j = 0; j < no; j++)
    {
       if(maxno<array[j])
       {maxno=array[j];}
 }
 cout<<"The largest number entered is: "<<maxno;


}