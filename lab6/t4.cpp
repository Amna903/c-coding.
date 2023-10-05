#include <iostream>
#include <cmath>
using namespace std;

float h(float feet,float deg);
main()
{
	float feet, deg, rad, ans;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>feet;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>deg;
	
	ans= h( feet, deg);
	cout<<"The height of the tree is: "<<ans<<" feet";
}

float h(float feet,float deg)
{
	float he= feet*tan(deg/57.2958);
	
	return he;

}