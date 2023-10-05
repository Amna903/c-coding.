#include <iostream>
#include <cmath>
using namespace std;
float m(float num, float pw);
main()
{
	float pw,num,ans;
	cout<< "Enter the base number: ";
	cin>>num;
	cout<< "Enter the exponent: ";
	cin>>pw;

	ans=m( num,  pw);
	cout<<num<<" raised to the power "<<pw<<" is: "<<ans;
	

}

float m(float num, float pw)
{
	float x=pow(num,pw);
	return x;

}