#include<iostream>
using namespace std;
double ans(double len, double wid, double hei,string unit);
main()
{
	double len,wid,hei;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>>len;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>wid;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>>hei;
	string unit;
	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>>unit;
	double result= ans( len,  wid,  hei, unit);
	cout<<"The volume of the pyramid is: " <<result<<" cubic "<<unit;	

}

double ans(double len, double wid, double hei,string unit)
{

	double vol;
	vol=(len*hei*wid)/3;
	double res;
	if(unit=="kilometers")
	{
	res=vol/(1000*1000*1000);
	}
	if(unit=="meters")
	{
	res=vol;
	}
	if(unit=="centimeters")
	{
	res=vol*100*100*100;
	}
	if(unit=="millimeters")
	{
	res=vol*100*10*100*10*100*10;
	}
	return res;
}