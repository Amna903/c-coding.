#include <iostream>
using namespace std;
void hh(int ppl, int tp);
main()
{
	int ppl;
	cout<<"Number of people in the household: ";
	cin>>ppl;
	int tp;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	hh(ppl,tp);
	return 0;
}

void hh(int ppl, int tp)
{
	int t;
	t=tp*500;
	int p;
	p=ppl*57;
	int day;
	day=t/p;
	if(day>=14)
	{cout<<"Your TP will last "<<day<< " days, no need to panic!";
	}
	if(day<14)
	{cout<<"Your TP will only last "<<day<< " days, buy more!";
	}

}