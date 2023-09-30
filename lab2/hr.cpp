#include <iostream>
using namespace std;
main ()
{
	int Hr,hr, min, sec;
	sec= 60;
	min= 60*sec;
	cout<< "enter the number of hours: ";
	cin>>Hr;
	hr= Hr*min;
	cout<< Hr<<" hours is equivalent to " << hr << " seconds.";
	
	system ("pause");
	return 0;


}

