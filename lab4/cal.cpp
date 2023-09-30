#include <iostream>
using namespace std;
void sum(float a, float b);
void sub(float a, float b);
void multiply(float a, float b);
void div(float a, float b);
main()
{
	float a,b;
	char op;
	while(true){
	cout<< "Enter 1st Number: ";
	cin>>a;
	cout<< "Enter 2nd Number: ";
	cin>>b;
	cout<<"Enter an operator(+,-,/,*): ";
	cin>>op;
	if(op=='+')
{
	sum(a,b);
}	
	if(op=='*')
{
	multiply( a, b);
}
	if(op=='/')
{
	div(a,b);
}		
	if(op=='-')
{
	sub(a,b);
}	
 }

  }


void sub(float a, float b)
{
	float sub;
	sub=a-b;
	cout<<"Subtraction: "<<sub;
cout<<endl;
}

void div(float a, float b)
{
	float div;
	div=a/b;
	cout<<"Division: "<<div;
cout<<endl;
}

void multiply(float a, float b)
{
	float mul;
	mul=a*b;
	cout<<"Multiplication: "<<mul;
cout<<endl;
}
void sum(float a, float b)
{
	float sum;
	sum=a+b;
	cout<<"Addition: "<<sum;
cout<<endl;
}