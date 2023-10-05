#include <iostream>
#include <cmath>
using namespace std;
void time(int con, int val,int hr, int min);
main()
{
	int hr,min,con,val;
	cout<<"Enter Hours: ";
	cin>>hr;
	cout<<"Enter Minutes: ";
	cin>>min;
	time( con,  val, hr,  min);

}

void time(int con, int val,int hr, int min)
{
	con= min+15;
	if(con>60)
	{
	val=con-60;
	hr++;
		if(hr>23)
		{
		hr=0;
		}
	cout<<hr<<":"<<val;
	}
	if(con<60)
	{
	val=con;
	cout<<hr<<":"<<val;
	}
}