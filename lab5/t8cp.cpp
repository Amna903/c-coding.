#include <iostream>
#include <cmath>
using namespace std;
void sleep(int holiday);
main()
{
	int holiday;
	cout<<"Holidays: ";
	cin>>holiday;
	sleep( holiday);
	return 0;
}
void sleep(int holiday)
{
	int remday;
	remday=365-holiday;
	int tday;
	tday= remday*63 + holiday*127;
	int norm;
	if(tday>30000)
	{norm= tday-30000;
	float hr;
	hr=norm/60.0;
	int h;
	h=hr;
	int min;
	min=round((hr-h)*60);
	cout<<"Tom will run away"<<endl;
	cout<<h<< " hours and "<<min<<" minutes for play";}
	
	if(tday<30000)
	{norm=30000-tday;
	float hr;
	hr=norm/60.0;
	int h;
	h=hr;
	int min;
	min=round((hr-h)*60);
	cout<<"Tom sleeps well"<<endl;
	cout<<h<< " hours and "<<min<<" minutes less for play";}

}