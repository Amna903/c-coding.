#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void name();
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);
void maze();
void player();
void eraseplayer();
void robot(int rx,int ry);
void eraserobot(int ra,int rb);
void moverobo(int rx,int ry,int ra,int rb);
void erasetank(int x,int y);
void tank(int x,int y);
void plane(int ex,int ey);
void movetank(int x, int y,int a,int b);
void gotoab(int a, int b);
void eraseplane(int ea,int eb);
void moveplane(int ea,int eb,int ex,int ey);
void robot1(int r1x,int r1y);
void eraserobot1(int r1a,int r1b);
void moverobo1(int r1x,int r1y,int r1a,int r1b);
void plane1(int ex1,int ey1);
void eraseplane1(int ea1, int eb1);
void moveplane1(int ex1,int ey1,int ea1, int eb1);
void tank1(int x1, int y1);
void erasetank1(int a1,int b1);
void moveplayerleft();
void moveplayerright();
void moveplayerup();
void moveplayerdown();
 int p=8; int q=17;
main()
{
    system("cls");
  name();
   int opt;
   gotoxy(1,9);cout<<"1.start"<<endl;
   gotoxy(1,10);cout<<"2.Exit"<<endl;
   gotoxy(1,11);cout<<"enter option no...."<<endl;
   cin>>opt;
  
   if (opt==1){system("cls");
    int x=7; int x1=70;
    int y=1; int y1=1;
    int a=7; int a1=70;
    int b=1; int b1=1;
    int ea=1;
    int eb=2;
    int ex=1;
    int ey=2;
    int ea1=1;
    int eb1=2;
    int ex1=1;
    int ey1=2;
    int ra=8; int r1a=23;
    int rx=8; int r1x=23;
    int ry=7; int r1y=7;
    int rb=7; int r1b=7;
    
    maze();
    name();
    player();
    plane(1,2);
    tank(7,1);
    robot(8,7);
    while(true)
        
    {  
        if(GetAsyncKeyState(VK_LEFT))
        {moveplayerleft( );}
        if(GetAsyncKeyState(VK_RIGHT))
        {moveplayerright( );}
        if(GetAsyncKeyState(VK_UP))
        {moveplayerup( );}
        if(GetAsyncKeyState(VK_DOWN))
        {moveplayerdown( );}
            
            //plane
       if(ey<=20 && ey==eb)
        {eraseplane(ea,eb);
        ++ey;
        ++eb;
        plane(ex,ey);
        Sleep(50);
        ey1=ey; eb1=eb;
        }
        
        if(ey > 20 && ey1 >= 2 && ey1 == eb1)
        {
           eraseplane1(ea1,eb1);
            --ey1;  --eb1;
            plane1(ex1,ey1);   
            Sleep(50);
            
          
        }
    if(ey1 == 1 && ey==21)
        {
            ey = ey1;
            eb = eb1;
        }

        //plane

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

        //tank
         if(x <=65  && a == x)
        { erasetank(a,b);
            ++a;
            ++x;
               tank(x,y); 
            Sleep(50);
            x1=x; a1=a;
        }
          
        if(x > 65 && x1 >= 7 && a1 == x1)
        {
           erasetank1(a1,b1);
            --x1;
            --a1;
            tank1(x1,y1);
              Sleep(50);
        }
        if(x == 66 && x1==6)
        {
            x = x1;
            a = a1;
        }
    
        //tank
    }}
    if (opt==2)
    {
   system("pause");
   return 0; }
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
void moverobo1(int r1x,int r1y,int r1a,int r1b)
{
 
    eraserobot1(r1a,r1b);
    robot1(r1x,r1y);

}
void movetank(int x,int y,int a,int b)
{
 
    erasetank(a,b);
    tank(x,y);

}
void tank(int x,int y)
{
    gotoxy(x,y);
    cout<<"|_________|"<<endl;;
    gotoxy(x,y+1);
    cout<<"  | |*| |"<<endl;
    gotoxy(x,y+2);
    cout<<"    '|'"<<endl;

}
void erasetank(int a,int b)
{    
    gotoxy(a,b);
     cout<<"           "<<endl;
    gotoxy(a,b+1);
     cout<<"         "<<endl;
    gotoxy(a,b+2); 
    cout<<"        "<<endl;
}
void tank1(int x1, int y1)

{
    gotoxy(x1,y1);
    cout<<"|_________|"<<endl;;
    gotoxy(x1,y1+1);
    cout<<"  | |*| |"<<endl;
    gotoxy(x1,y1+2);
    cout<<"    '|'"<<endl;

}
void erasetank1(int a1,int b1)
{   
      
    gotoxy(a1,b1);
     cout<<"           "<<endl;
    gotoxy(a1,b1+1);
     cout<<"         "<<endl;
    gotoxy(a1,b1+2); 
    cout<<"        "<<endl;

}
void moveplayerleft()
{if (getCharAtxy(p-1,q) == ' ')
    {eraseplayer();
      --p;
    player();}  
}
void moveplayerright()
{if (getCharAtxy(p+14,q)== ' ' )
    {eraseplayer();
      ++p;
    player();  }
}
void moveplayerup()
{if (getCharAtxy(p,q-1) == ' ')
    {eraseplayer();
      --q;
    player();}  
}
void moveplayerdown()
{if (getCharAtxy(p,q+7) == ' ' )
    {eraseplayer();
      ++q;
    player();  }
}

void player()
{
    gotoxy(p,q);
    cout<<" .''''''''."<<endl;
    gotoxy(p,q+1);
    cout<<"(| 0 , 0  |)"<<endl;
    gotoxy(p,q+2);
    cout<<" '. '-'  .'"<<endl;
     gotoxy(p,q+3);
    cout<<"  ,*''''*,"<<endl;
     gotoxy(p,q+4);
    cout<<" ()|____|()"<<endl;
     gotoxy(p,q+5);
    cout<<"   |_||_|"<<endl;
     gotoxy(p,q+6);
    cout<<"   (_)(_)"<<endl;
    
}
void eraseplayer()
{ 
    gotoxy(p,q);
    cout<<"           "<<endl;
    gotoxy(p,q+1);
    cout<<"            "<<endl;
    gotoxy(p,q+2);
    cout<<"           "<<endl;
    gotoxy(p,q+3);
    cout<<"          "<<endl;
    gotoxy(p,q+4);
    cout<<"           "<<endl;
    gotoxy(p,q+5);
    cout<<"         "<<endl;
    gotoxy(p,q+6);
    cout<<"         "<<endl;


}
void moveplane(int ex,int ey,int ea,int eb)
{   
eraseplane(ea, eb);
plane( ex, ey);
}
void plane(int ex, int ey)
{
    gotoxy(ex,ey);
    cout<<"  |\\"<<endl;
    gotoxy(ex,ey+1);
    cout<<"-:===>"<<endl;
    gotoxy(ex,ey+2);
     cout<<"  |/"<<endl;
    
}
void eraseplane(int ea,int eb)
{
    gotoxy(ea,eb);
    cout<<"      "<<endl;
    gotoxy(ea,eb+1);
    cout<<"       "<<endl;
    gotoxy(ea,eb+2);
    cout<<"       "<<endl;
}
void plane1(int ex1,int ey1)
{
    
    gotoxy(ex1,ey1);
    cout<<"  |\\"<<endl;
    gotoxy(ex1,ey1+1);
    cout<<"-:===>"<<endl;
    gotoxy(ex1,ey1+2);
     cout<<"  |/"<<endl;
    
}
void eraseplane1(int ea1, int eb1)
{
    gotoxy(ea1,eb1);
    cout<<"      "<<endl;
    gotoxy(ea1,eb1+1);
    cout<<"       "<<endl;
    gotoxy(ea1,eb1+2);
    cout<<"       "<<endl;
}
void moveplane1(int ex1,int ey1,int ea1, int eb1)

{   
eraseplane1(ea1, eb1);
plane1( ex1, ey1);
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
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

void name()
{
gotoxy(82,1);cout<<"*****     ||          "<<endl;
gotoxy(82,2);cout<<"*    *    ||             "<<endl;
gotoxy(82,3);cout<<"*****     ||           "<<endl;
gotoxy(82,4);cout<<"*    *    ||             "<<endl;
gotoxy(82,5);cout<<"*     *   ||             "<<endl;
gotoxy(82,6);cout<<"****** |  ||        "<<endl;
gotoxy(82,7);cout<<"*    * |  ||               "<<endl;
gotoxy(82,8);cout<<"*    * |  ||           "<<endl;
gotoxy(82,9);cout<<"*    * |  ||           "<<endl;
gotoxy(82,10);cout<<"****** *_____             "<<endl;
gotoxy(82,11);cout<<"******  --*--        "             <<endl;
gotoxy(82,12);cout<<"*     *   |          "<<endl;
gotoxy(82,13);cout<<"******    |          "<<endl;
gotoxy(82,14);cout<<"*     *   |           "<<endl;
gotoxy(82,15);cout<<"******  --*--             "<<endl;
gotoxy(82,16);cout<<"****** _____"<<endl;
gotoxy(82,17);cout<<"*    * |             "<<endl;
gotoxy(82,18);cout<<"*    * |____      "<<endl;
gotoxy(82,19);cout<<"*    * |            "<<endl;
gotoxy(82,20);cout<<"****** |             "        <<endl;
gotoxy(82,21);cout<<"  ||   _____ "<<endl;
gotoxy(82,22);cout<<"  ||   |    "<<endl;
gotoxy(82,23);cout<<"  ||   |____     "<<endl;
gotoxy(82,24);cout<<"  ||   |     "<<endl;
gotoxy(82,25);cout<<"  ||   |____ "<<endl;
}