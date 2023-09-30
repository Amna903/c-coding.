#include <iostream>
using namespace std;
main()
{
	string m;
	cout<< "Enter the movie name: ";
	cin>> m;
	float a,c,at,ct,p;
	cout<< "Enter the adult ticket price: $";
	cin>> a;
	cout<< "Enter the child ticket price: $";
	cin>> c;
	cout<< "Enter the number of adult tickets sold: ";
	cin>> at;
	cout<< "Enter the number of child tickets sold: ";
	cin>> ct;
	cout<< "Enter the percentage of the amount to be donated to charity: ";
	cin>> p;
	cout<<endl;
	cout<< "Movie: "<<m<<endl;
	float amountgen, charity, remamount;
	amountgen= (at*a)+(ct*c);
	cout<<"Total amount generated from ticket sales: $"<<amountgen<<endl;
	charity=(p/100)*amountgen;
	cout<<"Donation to charity ("<<p<<"%): $"<<charity<<endl;
	remamount=amountgen-charity;
	cout<<"Remaining amount after donation: $"<<remamount<<endl;
		
	system("pause");
	return 0;

}