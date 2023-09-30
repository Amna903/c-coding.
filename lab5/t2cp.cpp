#include <iostream>
using namespace std;
void rev(string tf);
main()
{
	string tf;
	cout<<"Enter 'true' or 'false': ";
	cin>>tf;
	rev(tf);
	system("pause");
	return 0;
}

void rev(string tf)
{
	if(tf=="true")
	{cout<<"false";}
	if(tf=="false")
	{cout<<"true";}


}