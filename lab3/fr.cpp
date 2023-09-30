#include <iostream>
using namespace std;
main()
{
	int m,s,c;
	cout<< "Number of Minutes: ";
	cin>> m;
	cout<< "Frames per Second: ";
	cin>> s;
	c=(m*60)*s;
	cout<< "Total Number of Frames: "<<c;
	system ("pause");
	return 0;
}