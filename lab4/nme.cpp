#include <iostream>
using namespace std;
void nm(string a);
main()
{
	string a;
	cout<<"Enter your name: ";
	cin>>a;
	nm(a);

}

void nm(string a)
{
	if(a!="kaka")
	{
	while(a!="kaka")
{
	cout<<"Enter your name: ";
	cin>>a;
}
	}



	if(a=="kaka")
	{
	while(true)
{
	cout<<a<<endl;
}
	}


}