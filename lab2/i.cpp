#include <iostream>
using namespace std;
main()
{
	float Q, T, I;
	cout<< "enter the charge (Q) in Coulombs: ";
	cin>> Q;
	cout<< "enter the time (t) in seconds: ";
	cin>> T;
	I=Q/T;
	cout<< "the current (I) is: "<<I<< " Amperes.";

system("pause");
return 0;

}