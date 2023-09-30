#include <iostream>
using namespace std;
main()
{
	int c ;
	float i,p;
	cout<< "Enter Imposter Count: ";
	cin>> i ;
	cout<< "Enter Player Count: ";
	cin>> p ;
	c=100*(i/p);	
	cout<< "Chance of being an imposter: "<<c<<"%";

	system("pause");
	return 0;
}