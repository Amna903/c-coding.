#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void maze();
void gotoxy(int x, int y);
void robot(int rx,int ry);
void eraserobot(int ra,int rb);
void moverobo(int rx,int ry,int ra,int rb);

void gotoab(int a, int b);

void robot1(int r1x,int r1y);
void eraserobot1(int r1a,int r1b);
void moverobo1(int r1x,int r1y,int r1a,int r1b);

 int p=8; int q=17;
 main()
{
    system("cls");

    int ra=8; int r1a=23;
    int rx=8; int r1x=23;
    int ry=7; int r1y=7;
    int rb=7; int r1b=7;
    
    maze();
    
    robot(8,7);
    while(true)
        
    {  
     
     

        //robot
        if(rx <= 22 && ra == rx)
        { eraserobot(ra,rb);
            ++rx;
            ++ra;
            robot(rx,ry);
             Sleep(50);
            r1x=rx; r1a=ra;
        }
          
        if(rx > 22 && r1x >= 8 && r1a == r1x)
        {
            eraserobot1(r1a,r1b);
            --r1x;
            --r1a;
             robot1(r1x,r1y);
              Sleep(50);
        }
    

        if(r1x == 7 && rx==23)
        {
            rx = r1x;
            ra = r1a;
        }
        //robot

       
    }
   system("pause");
   return 0; 
}

void robot1(int r1x,int r1y)
{
    gotoxy(r1x,r1y);cout<<"  (___)"<<endl;
    gotoxy(r1x,r1y+1);cout<<"  \\_0_/"<<endl;
    gotoxy(r1x,r1y+2);cout<<",'{#_#}',"<<endl;
    gotoxy(r1x,r1y+3);cout<<"   1 1"<<endl;
    
}
void eraserobot1(int r1a,int r1b)
{
    gotoxy(r1a,r1b);cout<<"         "<<endl;
    gotoxy(r1a,r1b+1);cout<<"         "<<endl;
    gotoxy(r1a,r1b+2);cout<<"          "<<endl;
    gotoxy(r1a,r1b+3);cout<<"       "<<endl;
}
void maze()
{
    cout<<"._____________________________________________________________________________."<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|        ___________________________                                          |"<<endl;
    cout<<"|       [___________________________]                                         |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                  __________________________ |"<<endl;
    cout<<"|                                                 [__________________________]|"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl; 
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|                                                                             |"<<endl;
    cout<<"|_____________________________________________________________________________|"<<endl;
    cout<<"|_____________________________________________________________________________|"<<endl;
}
void moverobo(int rx,int ry,int ra,int rb)
{
 
    eraserobot(ra,rb);
    robot(rx,ry);

}
void robot(int rx,int ry)
{
    gotoxy(rx,ry);cout<<"  (___)"<<endl;
    gotoxy(rx,ry+1);cout<<"  \\_0_/"<<endl;
    gotoxy(rx,ry+2);cout<<",'{#_#}',"<<endl;
    gotoxy(rx,ry+3);cout<<"   1 1"<<endl;
    
}
void eraserobot(int ra,int rb)
{
    gotoxy(ra,rb);cout<<"         "<<endl;
    gotoxy(ra,rb+1);cout<<"         "<<endl;
    gotoxy(ra,rb+2);cout<<"          "<<endl;
    gotoxy(ra,rb+3);cout<<"       "<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void gotoab(int a, int b)
{
COORD coordinates;
coordinates.X = a;
coordinates.Y = b;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}