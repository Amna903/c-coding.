#include <iostream>
#include <cmath>
using namespace std;
float m(float num, float sq);
main()
{
	float sq,num,ans;
	cout<< "Enter a number: ";
	cin>>num;
	
	ans=m( num,  sq);
	cout<<"The square root of "<<num<<" is: "<<ans;
	

}

float m(float num, float sq)
{
	float x=sqrt(num);
	return x;

}