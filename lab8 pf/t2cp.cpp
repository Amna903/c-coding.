#include<iostream>
using namespace std;
void generateFibonacci(int num);
main()
{
    cout<<"Enter the length of the Fibonacci series: ";
    int num;
    cin>>num;
     generateFibonacci( num);
}
void generateFibonacci(int num)
{
int num1=0;
int num2=1;
int num3= num;
int res;
if(num3==1)
{cout<<num1;}
if(num3>1){
cout<<num1<<", ";
cout<<num2;
}
for(int x=2; x<(num3); x++ )
{
    res=num1+num2;
    num1=num2;
    num2=res;
    cout<<", "<<res ;

}

}