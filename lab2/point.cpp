#include <iostream>
using namespace std;
main()
{
	int w,d,l,p,wi,dr,lo;
	string n;
	cout<< "enter the name of the cricket team: ";
	cin>>n;
	cout<< "enter the number of wins: ";
	cin>>w;
	cout<< "enter the number of draws: ";
	cin>>d;
	cout<< "enter the number of losses: ";
	cin>>l;
	wi= 3*w;
	dr= 1*d;
	lo= 0*l;
	p= wi+dr+lo;
	cout<< n <<" has obtained "<< p<< " points in the asia cup tournament.";

	system ("pause");
	return 0;




}