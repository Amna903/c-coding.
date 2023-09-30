#include <iostream>
using namespace std;
main()
{
	int a,b,c,d,e,f,g,h,i;
	cout<<"Enter a 4-digit number: ";
	cin>>a;
	b=a%1000;
	c=b%100;
	d=c%10;
	e=a/1000;
	f=b/100;
	g=c/10;
	h=d;
	i=e+f+g+h;
        cout<<"Sum of the individual digits: "<<i;
		system("pause");
	return 0;


}