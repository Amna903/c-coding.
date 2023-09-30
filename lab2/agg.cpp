#include <iostream>
using namespace std;
main()
{
	string name;
	cout<<"enter the student's name: ";
	cin>> name;
	float mm;
	cout<<"enter matriculation marks (out of 1100): ";
	cin>> mm;
	float im;
	cout<<"enter intermediate marks (out of 550): ";
	cin>> im;
	float ec;
	cout<< "enter ecat marks (out of 400): ";
    	cin>>ec;
	float agg;
	agg= 50*(ec/400) + 40*(im/550) + 10*(mm/1100);
	cout<< "aggregate score for "<<name<<" in UET is: "<<agg <<"%";

	system ("pause");
	return 0;


}