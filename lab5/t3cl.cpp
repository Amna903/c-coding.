#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void maze();
void gt(int, int);
main()
{
	system("cls");
	maze();
	gt(3,4);
	cout<<"P";
	gt(1,11);
	system ("pause");
	return 0;
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