#include <iostream>
using namespace std;
main()
{
	float a,d,c;
	cout << "enter your age in years: ";
	cin >> a;
	d=365;
	c=a*d;
	cout << "your age in days is approximately "<< c<< " days.";
	system ("pause");
	return 0;

}