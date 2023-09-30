#include <iostream>
using namespace std;
void total(int redrose, int whiterose, int tulip);
main()
{
	int redrose,whiterose,tulip;
	cout<<"Red Rose: ";
	cin>>redrose;
	cout<<"White Rose: ";
	cin>>whiterose;
	cout<<"Tulips: ";
	cin>>tulip;	

	
	 total( redrose,  whiterose,  tulip);
	return 0;
}

void total(int redrose, int whiterose, int tulip)
{
	float apr, apw, apt;
	apr=2.00*redrose;
	apw=4.10*whiterose;
	apt=2.50*tulip;
	float totalam;
	totalam= apr+apw+apt;
	cout<<"Original Price: $"<<totalam<<endl;
	if(totalam>200)
	{cout<<"Price after Discount: $"<<totalam-(totalam*20.0/100);}
	if(totalam<=200)
	{
	cout<<"No discount applied." ;
	}



} 