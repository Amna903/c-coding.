#include<iostream>
using namespace std;
void sunday(string day, int amount);
void oday(string day, int amount);
main()
{
	string day;
	while(true){
	cout<<"Enter the day of purchase: ";
	cin>>day;
	int amount;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	sunday( day, amount);
	oday(day,amount);}
}

void sunday(string day, int amount)
{
	if(day=="Sunday")
	{
	int cv,da;
	cv=amount*10/100;
	da=amount-cv;
	cout<<"Payable Amount: $"<<da<<endl;}
}

void oday(string day, int amount)
{
	if(day!="Sunday")
	{
	int a,b;
	a=amount*5/100;
	b=amount-a;
	cout<<"Payable Amount: $"<<b<<endl;}
}

