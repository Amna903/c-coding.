#include <iostream>
using namespace std;
void dprice(float amount, string country, float price);
main()
{	
	
	string country;
	cout<<"Enter the country's name: ";
	cin>>country;
	float price;
	float amount;
	
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;
	dprice( amount,  country,  price);
	cout<<endl;
	return 0;		
}

void dprice(float amount, string country, float price)
{
	
	if(country=="Pakistan")
	{
	amount= price-(5.0/100)*price;
	cout<<"Final ticket price after discount: $"<<amount;
	}


	if(country=="Ireland")
	{
	amount= price-(10.0/100)*price;
	cout<<"Final ticket price after discount: $"<<amount;
	}	

	if(country=="India")
	{
	amount=price- (20.0/100)*price;
	cout<<"Final ticket price after discount: $"<<amount;
	}
	if(country=="England")
	{
	amount= price-(30.0/100)*price;
	cout<<"Final ticket price after discount: $"<<amount;
	}

	if(country=="Canada")
	{
	amount= price-(45.0/100)*price;
	cout<<"Final ticket price after discount: $"<<amount;
	}			
	

}