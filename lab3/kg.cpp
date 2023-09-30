#include <iostream>
using namespace std;
main ()
{
	float vegperkg; 
	float frperkg;
	float kgfr;
	float kgveg; 
	float c;
	c=1.94;	
	float rup;
	cout<<"Enter vegetable price per kilogram (in coins): ";
 	cin>>vegperkg;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>frperkg;
	cout<<"Enter total kilograms of vegetables: "; 
	cin>>kgveg;
	cout<<"Enter total kilograms of fruits: ";
	cin>>kgfr;
	rup=(vegperkg/c)*kgveg+(frperkg/c)*kgfr;
	cout<<"Total earnings in Rupees (Rps): "<<rup;


}