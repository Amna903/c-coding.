<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int a,b,c,d,e,f;
	cout<<"Enter a three-digit number: ";
	cin>>a;
	b=a%100;
	c=b%10;
	e=a/100;
	f=b/10;
	
	if (c == e)
	{
	cout<<"The number is symmetrical.";
	}
	if (c != e)
	{
	cout<<"The number is not symmetrical.";
	}

=======
#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int a,b,c,d,e,f;
	cout<<"Enter a three-digit number: ";
	cin>>a;
	b=a%100;
	c=b%10;
	e=a/100;
	f=b/10;
	
	if (c == e)
	{
	cout<<"The number is symmetrical.";
	}
	if (c != e)
	{
	cout<<"The number is not symmetrical.";
	}

>>>>>>> 59a99099cc90783050668e1917db1ccaa6057ce1
}