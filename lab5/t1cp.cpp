#include <iostream>
using namespace std;
void tf(double firstn, double secondn);
main()
{
	double firstn,secondn;
	cout<<"Enter the first number: ";
	cin>>firstn;
	cout<<"Enter the second number: ";
	cin>>secondn;
	tf( firstn, secondn);
	system("pause");
	return 0;

}

void tf(double firstn, double secondn)
{
	if(firstn==secondn)
	{cout<<"true";}
	if(firstn!=secondn)
	{cout<<"false";}

}