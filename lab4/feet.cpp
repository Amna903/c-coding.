#include <iostream>
using namespace std;
void foot(float inch);
main()
{
	float inch;
	cout<< "Enter the measurement in inches: ";
	cin>>inch;
	foot(inch);
	system ("pause");
	return 0;
}

void foot(float inch)
{
	float feet;
	feet=inch/12;
	cout<< "Equivalent in feet: "<<feet;

}