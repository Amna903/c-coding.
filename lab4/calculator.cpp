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
	cout<< "Enter 1st number: ";
	cin>>a;
	cout<< "Enter 2nd number: ";
	cin>>b;
	cout<<"Enter an operator (+, -, *, /): ";
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
 system("pause");
return 0;
}


void sub(float a, float b)
{
	float sub;
	sub=a-b;
	cout<<"Subtraction: "<<sub<<endl;

}

void div(float a, float b)
{
	float div;
	div=a/b;
	cout<<"Division: "<<div<<endl;

}

void multiply(float a, float b)
{
	float mul;
	mul=a*b;
	cout<<"Multiplication: "<<mul<<endl;

}
void sum(float a, float b)
{
	float sum;
	sum=a+b;
	cout<<"Addition: "<<sum<<endl;

}