#include <iostream>
using namespace std;
main()
{
	int s,a;
	cout<< "Enter the number of sides of the polygon: ";
	cin>>s;
	a= (s-2)*180;
	cout<< "The sum of internal angles of a "<< s<<"-sided polygon is: "<< a <<" degrees";

	system("pause");
	return 0;
}