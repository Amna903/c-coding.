#include <iostream>
#include <windows.h>
using namespace std;
void gt(int x, int y);
main()
{
	system("cls");
	gt(85,25);
	cout<<"AMNA ATIQ";
	return 0;


}


void gt(int x, int y)
{
        

	COORD coordinates;
	coordinates.X= x;
	coordinates.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

