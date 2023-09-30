#include <iostream>
using namespace std;
main()
{
	float v;
	float a;
	float t;
	float f;
	cout<< "Enter Initial Velocity (m/s): ";
	cin>> v;
	cout<< "Enter Acceleration (m/s^2): ";
	cin>> a;
	cout<< "Enter Time (s): ";
	cin>> t;
	f= (a*t)+v;
	cout<< "Final Velocity (m/s): "<<f;

	system("pause");
	return 0;
	
}