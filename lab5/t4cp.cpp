#include<iostream>
using namespace std;
void sp(double speed);
main()
{
	double speed;
	cout<<"Speed: ";
	cin>>speed;
	 sp( speed);
	return 0;


}
void sp(double speed)
{
	if(speed>100)
{
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";

}
	if(speed<=100)
{
	cout<<"Perfect! You're going good.";
}

}