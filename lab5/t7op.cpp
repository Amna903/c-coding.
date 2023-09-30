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
	x=6;
	y=2;
	system("cls");
	maze();
	while(true){
	while(y<=7)
        {
	mvfr(x,y);
	y++;
	
 	}
	while(y>=2)
	{
	mvfr(x,y);
	y--;

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