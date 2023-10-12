#include <iostream>
using namespace std;
int tru(int num1, int num2);
main()
{
int num1,num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
int res= tru( num1,  num2);
cout<<res;
}
int tru(int num1, int num2)
{int num;
    if(num1>num2)
    {num=1;}
    else
    {num=0;}
return num;
}