#include <iostream>
using namespace std;
bool ans(int num1, int num2, int num3);

main()
{
    cout<<"Enter the first number: ";
    int num1;
    cin>>num1;
     cout<<"Enter the second number: ";
    int num2;
    cin>>num2;
     cout<<"Enter the third number: ";
    int num3;
    cin>>num3;
bool res = ans( num1,  num2,  num3);
cout<<res;

}
bool ans(int num1, int num2, int num3)
{
    bool ans;
    if(num1==num2 && num2==num3)
    {ans=true;}

    if(num1!=num2 || num2!=num3)
    {ans=false;}
return ans;

}