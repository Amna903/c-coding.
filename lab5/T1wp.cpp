#include <iostream>
#include <windows.h>
void gt(int x, int y);
using namespace std;

int main()
{
	
	system("cls");
	cout <<"Test"<<endl;
	gt(15,15);
	cout<<"My name is Amna Atiq";
	system("pause");
	return 0;
	

}


void gt(int x, int y)
{

	COORD coordinates;
	coordinates.X= x;
	coordinates.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);}