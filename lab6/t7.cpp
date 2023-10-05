#include <iostream>
using namespace std;
void a(char al);
main()
{
	char al,b;
	cout<<"Enter a character (A/a): ";
	cin>>al;
	 a( al);


}
void a(char al)
{
	if(al=='a')
{cout<<"You have entered small a";}
	if(al=='A')
{cout<<"You have entered Capital A";}


}