#include<iostream>
using namespace std;
void pass(int score);
void fail(int score);
main()
{
 	int score;
	cout<<"Enter your score: ";
	cin>>score;
	pass(score);
	fail(score);
system ("pause");
	return 0;
}

void pass(int score)
{
	if(score>50)
	cout<<("Pass");
}

void fail(int score)
{
	if(score<=50)
	cout<<("Fail");
}



