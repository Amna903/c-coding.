#include <iostream>
using namespace std;
void fill(int v,int p, int pp, float n);
main()
{
	int v,p;
	
	cout<<"Enter volume of the pool in liters: ";
	cin>>v;
	
	cout<<"Enter flow rate of the first pipe per hour: ";
	cin>>p;
	int pp;
	
	cout<<"Enter flow rate of the second pipe per hour:";
	cin>>pp;
	float n;
	
	cout<<"Enter hours that the worker is absent: ";
	cin>>n;
	fill( v, p,  pp,  n);

}

void fill(int v,int p, int pp, float n)
{
	if(v<=10000,p<=5000,pp<=5000,n<=24.00)
	{float of,over;
	int perp,perpp;
	int perof;
	float pipe= p+pp;
	of=pipe*n;
	over=of-v;
	if(of<v)
{
	perof=of/v*100;
	perp=p/pipe*100;
	perpp=pp/pipe*100;
	
	cout<<"The pool is "<<perof<<"%"<<" full."<<" Pipe 1: "<<perp<<"%."<<" Pipe 2: "<<perpp<<"%."; 	
}
	if(of>=v)
{	cout<<"For "<<n<<" hours, the pool overflows with "<<over<< " liters.";
}

}

}