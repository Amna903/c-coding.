#include <iostream>
using namespace std;
void fuel(float distance);
main()
{
	float distance;
	cout<< "Enter the distance: ";
	cin>> distance;
	fuel(distance);
	 system("pause");
return 0;
}

void fuel(float distance)
{
int f=100;
float fuel=10*distance;
if(fuel>=100)
{cout<< "Fuel needed: "<<fuel<<endl;}
if(fuel<100)
cout<< "Fuel needed: "<<f<<endl;

}