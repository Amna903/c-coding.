#include <iostream>
using namespace std;
void fuel(float distance);
main()
{
	float distance;
	cout<< "Enter the distance: ";
	cin>> distance;
	fuel(distance);
	system ("pause");
	return 0;
}

void fuel(float distance)
{
float fuel=10*distance;
cout<< "Fuel needed: "<<fuel<<endl;
}