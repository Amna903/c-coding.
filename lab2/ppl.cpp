#include <iostream>
using namespace std;
main()
{
	int p,b,d,c;
	cout<< "enter the current world population: ";
	cin>>p;
	cout<< "enter the monthly birth rate (number of births per month): ";
	cin>>b;
	c=b*30*12;
	d=p+c;
	cout<<"the population in three decades will be: "<<d;
	system ("pause");
	return 0;
}