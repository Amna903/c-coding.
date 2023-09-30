#include <iostream>
using namespace std;
int main()
{
	int dollar,rupees;
	rupees = 200;
	cout << "$1=" << rupees << "rupees";
	int inputvalue;
	cin >> inputvalue;
	int convertedvalue;
	convertedvalue= rupees*inputvalue;
	cout<< convertedvalue <<endl;
	system ("pause");
	return 0;	

}