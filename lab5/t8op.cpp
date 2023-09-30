#include <iostream>
#include <windows.h>
using namespace std;
void aggregate(string name, double matricm, double interm , double ecatm, double agg );
void cmark(string st1, string st2, double emst1, double emst2);
void menu();
void gt(int x, int y);
main()
{
	system("cls");
	menu();
	string opt;
	string name ,st1 ,st2;
	double matricm, interm, ecatm, agg, emst1, emst2;
	cout<<"you want to compare marks or calculate aggregate?"<<endl;
	cin>>opt;
	if(opt=="aggregate")
	{aggregate( name, matricm, interm , ecatm, agg );}
	if(opt=="comparemarks")
	{cmark( st1,  st2,  emst1, emst2);}
	system("pause");
	return 0;
}

void gt(int x, int y)
{
       

	COORD coordinates;
	coordinates.X= x;
	coordinates.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


void menu()
{
	gt(50,1);
	cout<<"UNIVERSITY OF ENGINEERING AND TECHNOLOGY"<<endl;
	cout<<endl;

}

void aggregate(string name, double matricm, double interm , double ecatm, double agg )
{
	
	cout<<"Enter student's name: ";
	cin>> name;
	
	cout<<"Enter matric marks(out of 1100): ";
	cin>> matricm;
	
	cout<<"Enter intermediate marks(out of 550): ";
	cin>> interm; 
 	
	cout<<"Enter ecat marks(out of 400): ";
	cin>> ecatm; 

	agg=(matricm/1100)*30+(interm/550)*30+(ecatm/400)*40;
	cout<<"Your aggregate is: "<<agg <<"%";

}

void cmark(string st1, string st2, double emst1, double emst2)
{
	cout<<"Enter your name: "<<endl;
	cin>>st1;
	cout<<"Enter your ecat no. : ";
	cin>>emst1;
	cout<<"Enter your name: "<<endl;
	cin>>st2;
	cout<<"Enter your ecat no. : ";
	cin>>emst2;		
	if(emst1>emst2)
	{cout<<"1."<<st1<<endl;
	cout<<"2."<<st2;  }
	if(emst1<emst2)
	{cout<<"1."<<st2<<endl;
	cout<<"2."<<st1;  }		


}