#include <iostream>
using namespace std;
main()
{
	float kgs;
	int lb;
	kgs=0.45;
 	
	cout<< "enter weight in pounds: ";
	cin>> lb;
	int convertedvalue;
	convertedvalue= 0.45*lb;
	cout<< lb << " pounds is equal to " << convertedvalue << " kilograms." <<endl; 	


	system("pause");
	return 0;



}