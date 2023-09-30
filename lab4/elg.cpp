#include<iostream>
using namespace std;

void nelig(int age);
void elig(int age);
main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	elig(age);
	nelig(age);
system ("pause");
	return 0;
}

void elig(int age)
{
	if(age>=18)
	cout<<"You are eligible to vote.";
}

void nelig(int age)
{
	if(age<18)
	cout<<"You are not eligible to vote.";
}
