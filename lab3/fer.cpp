#include <iostream>
using namespace std;
main ()
{
	float p, c, a, fp, fs;
	cout<< "Enter the size of the fertilizer bag in pounds: ";
	cin>> p;
	cout<<"Enter the cost of the bag: $";
	cin>>c;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>a;
	fp=c/p;
	cout<< "Cost of fertilizer per pound: $"<<fp<<endl;
	fs=c/a;
	cout<< "Cost of fertilizing per square foot: $"<<fs;	
	system("pause");
	return 0;



}