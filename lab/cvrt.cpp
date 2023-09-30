#include <iostream>
using namespace std;
main()
{
	float kgs;
	int lb;
	kgs=0.45;
 	cout<< "1lb=" <<kgs <<"kgs"<<endl;
	cout<< "enter lb:";
	cin>> lb;
	int convertedvalue;
	convertedvalue= 0.45*lb;
	cout<< lb << "pounds is equal to " << convertedvalue << " kilograms" <<endl; 	




	system ("pause");
	return 0;
}