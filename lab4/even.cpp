#include<iostream>
using namespace std;
void odd(int no);
void even(int no);
main()
{
	int no;
	cout<<"Enter a number: ";
	cin>>no;
 	even(no);
	odd(no);
system ("pause");
	return 0;
}

void even(int no)
{
	if(no%2==0)
	cout<<"Number "<<no<< " is even";

}

void odd(int no)
{
	if(no%2!=0)
	cout<<"Number "<<no<< " is odd";

}


