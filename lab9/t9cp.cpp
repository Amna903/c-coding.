#include <iostream>
using namespace std;
main()
{
    float array[3],due=0,sum=0;
    cout<<"Enter quarters: ";
    cin>>array[0];
    array[0]=array[0]*0.25;
    cout<<"Enter dimes: ";
    cin>>array[1];
    array[1]=array[1]*0.10;
     cout<<"Enter nickels: ";
    cin>>array[2];
    array[2]=array[2]*0.05;
     cout<<"Enter pennies: ";
    cin>>array[3];
    array[3]=array[3]*0.01;
    sum=array[0]+array[1]+array[2]+array[3];
     cout<<"Enter the total amount due: $";
    cin>>due;
    cout<<"Can you pay the amount? ";
    if(due<sum || due==sum)
    cout<<"Yes";
    if(due>sum)
    cout<<"No";



}