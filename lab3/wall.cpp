#include <iostream>
using namespace std;
main()
{
	int paint;
	cout<<"Number of square meters you can paint: ";
	cin>>paint;
	int width;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	int height;
	cout<<"Height of the single wall (in meters): ";
	cin>>height;
	int wall;
	wall=paint/(width*height);
	cout<<"Number of walls you can paint: "<< wall;
	








	system("pause");
	return 0;

}