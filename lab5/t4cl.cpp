#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void maze();
void movefr(int,int );
void gt(int, int);
main()
{
	int x=2;
	int y=5;
	system("cls");
	maze();
	while(true)
	{
	movefr(x,y);
	x++;
	
	if(x>18)
	{
	x=4;
	}
		}

	gt(1,11);
	system ("pause");
	return 0;
}

void movefr(int x,int y)
{
	gt(x,y);
	cout<<"p";
	Sleep(200);
	gt(x,y);
	cout<<" ";

}


void gt(int x, int y)
{

	COORD coordinates;
	coordinates.X= x;
	coordinates.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

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