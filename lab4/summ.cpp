#include <iostream>
using namespace std;
void sum(float a, float b);
main()
{
	float a,b;
	char op;
	cout<< "Enter Number1: ";
	cin>>a;
	cout<< "Enter Number2: ";
	cin>>b;
	cout<<"Enter Operator(+,-,/,*): ";
	cin>>op;
	if(op=='+')
{
	sum(a,b);
}	

}

void sum(float a, float b)
{
	float sum;
	sum=a+b;
	cout<<"Sum: "<<sum;

}