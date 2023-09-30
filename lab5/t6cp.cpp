#include <iostream>
using namespace std;
void lt(int hr, int min);
main()
{
	int hr,min;
	cout<<"Enter the number of hours: ";
	cin>>hr;
	cout<<"Enter the number of minutes: ";
	cin>>min;
	lt( hr,  min);
	return 0;
}

void lt(int hr, int min)
{
	int a;
	a=hr*60;
	if(a>min)
	{cout<<hr;}
	if(a<min)
	{cout<<min;}

}