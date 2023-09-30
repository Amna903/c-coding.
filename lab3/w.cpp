#include <iostream>
using namespace std;
main()
{
	string n;
	float kg;
	float d;
	cout<< "Enter the Name of the Person: ";
	cin>>n;
	cout<< "Enter the target weight loss in kilograms: ";
	cin>>kg;
	d=kg*15;
	cout<< n <<" will need "<< d << " days to lose " <<kg<< " kg of weight by following the doctor's suggestions";
	
	system("pause");
	return 0;
}
