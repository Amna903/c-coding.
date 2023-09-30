#include <iostream>
using namespace std;
main ()
{
	float Mb, mb, kb;
	kb= 1024*8;
	cout<< "Enter the size in megabytes (MB): ";
	cin>> Mb;
	mb= Mb*1024*kb;
	cout<< Mb <<" MB is equivalent to "<< mb << " bits.";
	system ("pause");
	return 0;
}

