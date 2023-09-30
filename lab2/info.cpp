#include <iostream>
using namespace std;
main()
{
	int rollno ;
	float aggregate;
	string name, section;
	cout<< "enter your name: ";
	cin>> name;
	cout<< "enter your roll number: " ;
	cin>> rollno;
	cout<< "enter your aggregate: " ;
	cin>> aggregate;
	cout<< "enter your section: " ;
	cin>> section;
	cout << "Student information:"<<endl;
	cout<< "name: " << name <<endl;
	cout<< "roll number: " << rollno<<endl;
	cout<< "aggregate: " << aggregate<<endl;
	cout<< "section: " << section<<endl;


	system("pause");
	return 0;
}