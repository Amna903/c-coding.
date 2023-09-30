#include <iostream>
using namespace std;
void tf(int yp, int f, int a);
main()
{
	int yp,f,a;
	cout<<"Enter your position: ";
	cin>>yp;
	cout<<"Enter your friend's position: ";
	cin>>f;
	tf( yp,f,a);
	return 0;
}

void tf(int yp, int f ,int a)
{
 	a=f-yp;
	if(a<=6)
	{cout<<"true";}
	if(a>6)
	{cout<<"false";}


}