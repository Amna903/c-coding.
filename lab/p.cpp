#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void maze();
void gt(int, int);
void mvfr(int ,int);
main()
{
	int x, y;
	x=2;
	y=4;
	system("cls");
	maze();
	while(true){
	while(x<=18)
        {
	mvfr(x,y);
	x++;
	
 	}
	while(x>=2)
	{
	mvfr(x,y);
	x--;

	}
	
	}
	
	cout<<"p";
	gt(1,10);
	

}


void gt(int x, int y)
{

	COORD coordinates;
	coordinates.X= x;
	coordinates.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void mvfr(int x,int y)
{	gt(x,y);
	cout<<"p";
	Sleep(400);
	gt(x,y);
	cout<<" ";
}



void maze()
{
	cout<< "#####################" <<endl;
	cout<< "#                   #" <<endl;
	cout<< "#                   #" <<endl;
	cout<< "#                   #" <<endl;
	cout<< "#                   #" <<endl;
	cout<< "#                   #" <<endl;
	cout<< "#                   #" <<endl;
	cout<< "#                   #" <<endl;
	cout<< "#                   #" <<endl;
	cout<< "#####################" <<endl;
}