#include <iostream>
using namespace std;
main()
{

 	int a,b,c,d,e,f,g,h,i,j;
	cout<<"Enter a five-digit number: ";
	cin>>a;
	b=a%10000;
	c=b%1000;
	d=c%100;
	e=d%10;
	f=a/10000;
	g=b/1000;
	h=c/100;
	i=d/10;
	j=e+f+g+h+i;
	if(j%2==1)
	{cout<<"Oddish";}
	if(j%2==0)
	{cout<<"Evenish";}
}