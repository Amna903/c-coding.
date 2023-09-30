#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void maze();
void gt(int, int);
void mvfr(int ,int);
void gto(int w, int z);
void mvbg(int w,int z);
main()
{
	int x, y,w,z;
	x=2;
	w=18;
	y=4;
	z=4;
	system("cls");
	maze();
	while(true){
	while(x<=18)
        {
	mvfr(x,y);
	x++;
	
 	}
	w=x;
	while(w>=2)
	{
	mvbg(w,z);
	w--;

	}
	x=w;


	
	}
	
	
gt(0,10);
return 0;
	

}


void gt(int x, int y)
{
        

	COORD coordinates;
	coordinates.X= x;
	coordinates.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void gto(int w, int z)
{
      

	COORD coordinates;
	coordinates.X= w;
	coordinates.Y= z;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


void mvfr(int x,int y)
{	gt(x,y);
	cout<<"p";
	Sleep(400);
	gt(x,y);
	cout<<" ";
}
void mvbg(int w,int z)
{	gto(w,z);
	cout<<"q";
	Sleep(400);
	gto(w,z);
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