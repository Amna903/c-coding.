#include <iostream>
using namespace std;
main()
{
	float v,i,p;
	cout << "enter voltage (in volts): ";
	cin >> v;
	cout << "enter current (in amperes): ";
	cin >> i;
	p=v*i;
	cout << "the power is " << p << " watts."; 
	system ("pause");
	return 0;



}