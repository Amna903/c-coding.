#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>

using namespace std;

char maze[50][92] = {
    "__________________________________________________________________________________________ ",
    "|   91   |   92   |   93   |  94    |   95   |   96   |   97   |   9('')|  99    | winner |",
    "---------------------------------------------------------------------()-------------------",
    "|   81   |   82   |   83   |  84    |   85   |   86   |   87   |   88 ()|  89    |   90   |",
    "-----------('')--------------------------------------/------/----------()-----------------",
    "|   71   |   ()   |   73   |  74    |   75   |   76 / |   7/   |   78   () 79    |   80   |",
    "--------------()-----------------------------------/------/-------------()----------------",
    "|   61   |   62() |   63   |  64    |   65   |   6/   |  /67   |   68  ()  69    |   70   |",
    "----------------()-------------------------------/------/-------------()------------------",
    "|   51   |   52 ()|   53   |  54    |   55   |  /56   |/  57   |   58() |  59    |   60   |",
    "----------------()---------/-------/-----------/------/------------\\-----\\----------------",
    "|   41   |   42 ()|   43  /|  44  / |   45   |/  46   |   47   |() 4\\   | \\ 9    |   50   |",
    "----------------()-------/-------/------------------------------'----\\-----\\---------------",
    "|   31   |   32 ' |   33/  |  34/   |   35   |   36   |   37   |   38 \\ |  3\\    |   40   |",
    "-----------------------/-------/---------------------------------------\\-----\\------------",
    "|   21   |   22   |   /3   |  /4    |   25('')   26   |   27   |   28   \\  29 \\  |   30   |",
    "---------------------/-------/--------------()---------------------------\\-----\\-----------",
    "|   11   |   12   | / 13   |/ 14    |   15   ()  16   |   17   |   18   |  19    |   20   |",
    "-------------------/-------/------------------()------------------------------------------",
    "|    1   |    2   |    3   |   4    |    5   |  ' 6   |    7   |    8   |   9    |   10   |",
    "------------------------------------------------------------------------------------------",
    "__________________________________________________________________________________________ "};

char pl1 = 157;
char pl2 = 206;
int d = 114;
int t = 4;
void printmaze();
void player(int p1, int py);
void eplayer(int p, int q);
void enemy(int p1, int py);
void moveplayer(int &px, int &py, int num, int &plscore);
void movenemy(int &ex, int &ey, int num, int &elscore);
void gotoxy(int x, int y);
void printdice(int num);
int main()
{
    int px = 2;
    int py = 20;
    int ex = 6;
    int ey = 20;
    int elscore = 1;
    int count = 0, plscore = 1;

    printmaze();
    player(px, py);
    enemy(ex, ey);

    while (1)
    {
        int n = 0;
        count++;
        int num = rand() % 6;
        gotoxy(119, 2);
        cout << num;
        printdice(num);
        if (count % 2 == 0)
        {

            plscore += num;
            moveplayer(px, py, num, plscore);

            if (plscore > 100)
            {

                plscore = plscore - num;
            }
            Sleep(500);
        }

        if (count % 2 != 0)
        {
            Sleep(500);

            elscore += num;
            movenemy(ex, ey, num, elscore);
            if (elscore > 100)
            {
                elscore = elscore - num;
            }
            getch();
        }

        Sleep(70);
        if (elscore == 100)
        {
            gotoxy(115, 3);
            cout << "ENEMY WIN";
            gotoxy(115, 40);
            return 0;
        }
        if (plscore == 100)
        {
            gotoxy(115, 3);
            cout << "PLAYER WIN";
            gotoxy(115, 40);
            return 0;
        }
    }

    return 0;
}

void printmaze()
{
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 92; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}

void player(int p1, int py)
{
    gotoxy(p1, py);
    {
        maze[py][p1] = pl1;
        cout << maze[py][p1];
    }
}

void eplayer(int p, int q)
{
    gotoxy(p, q);
    {
        maze[q][p] = ' ';
        cout << maze[q][p];
    }
}

void enemy(int p1, int py)
{
    gotoxy(p1, py);
    {
        maze[py][p1] = pl2;
        cout << maze[py][p1];
    }
}

void moveplayer(int &px, int &py, int num, int &plscore)
{
    eplayer(px, py);

    if (plscore < 101)
    {
        px = px + (9 * num);
        if (plscore == 98)
        {
            plscore = 38;
            px = 83;
            py = py + 12;
        }
        else if (plscore == 82)
        {
            plscore = 32;
            px = 11;
            py = py + 10;
        }
        else if (plscore == 25)
        {
            plscore = 6;
            px = 45;
            py = py + 4;
        }
        if (plscore == 46)
        {
            plscore = 87;
            px = 56;
            py = py - 8;
        }
        else if (plscore == 19)
        {
            plscore = 58;
            px = 65;
            py = py - 8;
        }
        else if (plscore == 3)
        {
            plscore = 54;
            px = 29;
            py = py - 12;
        }

        if (px > 90)
        {
            if (py != 2)
            {
                px = px - 90;
                py = py - 2;
            }
        }
    }

    player(px, py);
}

void movenemy(int &ex, int &ey, int num, int &elscore)
{
    eplayer(ex, ey);

    if (elscore < 101)
    {
        ex = ex + (9 * num);
        if (elscore == 98)
        {
            elscore = 38;
            ex = 83;
            ey = ey + 12;
        }
        else if (elscore == 82)
        {
            elscore = 32;
            ex = 11;
            ey = ey + 10;
        }
        else if (elscore == 25)
        {
            elscore = 6;
            ex = 45;
            ey = ey + 4;
        }
        if (elscore == 46)
        {
            elscore = 87;
            ex = 56;
            ey = ey - 8;
        }
        else if (elscore == 19)
        {
            elscore = 58;
            ex = 65;
            ey = ey - 8;
        }
        else if (elscore == 3)
        {
            elscore = 54;
            ex = 29;
            ey = ey - 12;
        }

        if (ex > 90)
        {
            if (ey != 2)
            {
                ex = ex - 90;
                ey = ey - 2;
            }
        }
    }

    enemy(ex, ey);
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printdice(int num)
{
    if (num == 0)
    {
        gotoxy(d, t);
        cout << " _________\n";
        gotoxy(d, t + 1);
        cout << "|         |\n";
        gotoxy(d, t + 2);
        cout << "|         |\n";
        gotoxy(d, t + 3);
        cout << "|         |\n";
        gotoxy(d, t + 4);
        cout << " ---------\n";
    }

    if (num == 1)
    {
        gotoxy(d, t);
        cout << " _________\n";
        gotoxy(d, t + 1);
        cout << "|         |\n";
        gotoxy(d, t + 2);
        cout << "|    o    |\n";
        gotoxy(d, t + 3);
        cout << "|         |\n";
        gotoxy(d, t + 4);
        cout << " ---------\n";
    }

    if (num == 2)
    {
        gotoxy(d, t);
        cout << " _________\n";
        gotoxy(d, t + 1);
        cout << "|         |\n";
        gotoxy(d, t + 2);
        cout << "|  o   o  |\n";
        gotoxy(d, t + 3);
        cout << "|         |\n";
        gotoxy(d, t + 4);
        cout << " ---------\n";
    }
    if (num == 3)
    {
        gotoxy(d, t);
        cout << " _________\n";
        gotoxy(d, t + 1);
        cout << "| o     o |\n";
        gotoxy(d, t + 2);
        cout << "|         |\n";
        gotoxy(d, t + 3);
        cout << "|    o    |\n";
        gotoxy(d, t + 4);
        cout << " ---------\n";
    }
    if (num == 4)
    {
        gotoxy(d, t);
        cout << " _________\n";
        gotoxy(d, t + 1);
        cout << "|  o   o  |\n";
        gotoxy(d, t + 2);
        cout << "|         |\n";
        gotoxy(d, t + 3);
        cout << "|  o   o  |\n";
        gotoxy(d, t + 4);
        cout << " ---------\n";
    }
    if (num == 5)
    {
        gotoxy(d, t);
        cout << " _________\n";
        gotoxy(d, t + 1);
        cout << "|  o   o  |\n";
        gotoxy(d, t + 2);
        cout << "|    o    |\n";
        gotoxy(d, t + 3);
        cout << "|  o   o  |\n";
        gotoxy(d, t + 4);
        cout << " ---------\n";
    }
    if (num == 6)
    {
        gotoxy(d, t);
        cout << " _________\n";
        gotoxy(d, t + 1);
        cout << "|  o   o  |\n";
        gotoxy(d, t + 2);
        cout << "|  o   o  |\n";
        gotoxy(d, t + 3);
        cout << "|  o   o  |\n";
        gotoxy(d, t + 4);
        cout << " ---------\n";
    }
}