#include <iostream>
using namespace std;
int great(int num1,int num2,int num3);
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
int result =  great( num1, num2, num3);
cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<result;
}
int great(int num1,int num2,int num3)
{
    if(num1>num2)
    {
        if(num1>num3)
        {return num1;}
    }
     if(num2>num1)
    {
        if(num2>num3)
        {return num2;}
    }
     if(num3>num2)
    {
        if(num3>num1)
        {return num3;}
    }



}