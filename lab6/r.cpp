#include <iostream>
#include<cmath>
using namespace std;
main()
{
	float a;
	cout<<"Enter the value of a: ";
	cin>>a;
	float b,c;
	cout<<"Enter the value of b: ";
	cin>>b;
	
	cout<<"Enter the value of c: ";
	cin>>c;

float disc=b*b -(4*a*c);
if (disc<0)
{
float root=(-b/(2*a));
float img= sqrt(-disc)/(2*a);
cout<<"Complex Solutions: x = "<<root<<" + "<<img<<"i "<<"and x = "<<root<<" - "<<img<<"i";
}

if(disc==0)
{
float root = (-b/(2*a));
cout<<"Solution: x = "<<root;

}
if(disc>0)
{
float root1=(-b +sqrt(disc))/(2*a);
float root2=(-b -sqrt(disc))/(2*a);
cout<<"Solutions: x = "<<root1<<" and x = "<<root2;
}
}