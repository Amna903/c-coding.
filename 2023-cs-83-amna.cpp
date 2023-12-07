#include <iostream>
#include <windows.h>

using namespace std;
void fire(string array2d[]);
void printboard(string array2d[]);
void moveennmeny1(int enemy1row,
                  int &enemy1column, char &directionofenemy1, string array2d[]);
void moveennmeny2(int &enemy2row,
                  int enemy2column, char &directionofenemy2, string array2d[]);
void moveplayerright(string array2d[], int playerow,
                     int &playercolumn);
void moveplayerleft(string array2d[], int playerow,
                    int &playercolumn);
void moveplayerdown(string array2d[], int &playerow, int playercolumn);

void moveplayerup(string array2d[], int &playerow, int playercolumn);
int main()
{
    string array2d[20] = {
        "############################################################",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "#                                                          #",
        "############################################################"};
    int playerow = 18;
    int playercolumn = 20;
    int enemy1row = 1;
    int enemy1column = 1;
    int enemy2row = 1;
    int enemy2column = 58;
    char directionofenemy1 = 'R';
    char directionofenemy2 = 'D';
    int bulletCooldown1 = 0;
    int bulletCooldown2 = 0;
    const int bulletCooldownMax = 10; // Adjust the value to control bullet firing speed

    array2d[playerow][playercolumn] = 'P';
    array2d[enemy1row][enemy1column] = 'E';
    array2d[enemy2row][enemy2column] = 'E';

    while (true)
    {
        moveennmeny1(enemy1row, enemy1column, directionofenemy1, array2d);
        moveennmeny2(enemy2row, enemy2column, directionofenemy2, array2d);
        printboard(array2d);
        Sleep(200);
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveplayerright(array2d, playerow,
                            playercolumn);
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveplayerleft(array2d, playerow,
                           playercolumn);
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveplayerup(array2d, playerow,
                         playercolumn);
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveplayerdown(array2d, playerow,
                           playercolumn);
        }
        if (GetAsyncKeyState(VK_SPACE))
        {

            array2d[playerow - 1][playercolumn] = '*';
        }
        bulletCooldown1++;
        if (bulletCooldown1 >= bulletCooldownMax)
        {
            array2d[enemy1row + 1][enemy1column] = '+';
            bulletCooldown1 = 0; // Reset the cooldown
        }

        // Enemy 2 firing
        bulletCooldown2++;
        if (bulletCooldown2 >= bulletCooldownMax)
        {
            array2d[enemy2row][enemy2column - 1] = '-';
            bulletCooldown2 = 0; // Reset the cooldown
        }
        fire(array2d);

        system("cls");
    }
}
/////////functions///////////////
void printboard(string array2d[])
{
    for (int i = 0; i < 20; i++)
    {
        cout << array2d[i] << endl;
    }
}
void moveplayerup(string array2d[], int &playerow, int playercolumn)
{
    if (playerow > 1)
    {
        array2d[playerow][playercolumn] = ' ';
        playerow--;
        array2d[playerow][playercolumn] = 'P';
    }
}

void moveplayerdown(string array2d[], int &playerow, int playercolumn)
{
    if (playerow < 18)
    {
        array2d[playerow][playercolumn] = ' ';
        playerow++;
        array2d[playerow][playercolumn] = 'P';
    }
}

void moveplayerright(string array2d[], int playerow,
                     int &playercolumn)
{
    if (playercolumn < 58)
    {

        array2d[playerow][playercolumn] = ' ';
        playercolumn++;
        array2d[playerow][playercolumn] = 'P';
    }
}
void moveplayerleft(string array2d[], int playerow,
                    int &playercolumn)
{
    if (playercolumn > 1)
    {

        array2d[playerow][playercolumn] = ' ';
        playercolumn--;
        array2d[playerow][playercolumn] = 'P';
    }
}

void moveennmeny1(int enemy1row,
                  int &enemy1column, char &directionofenemy1, string array2d[])
{
    if (enemy1column < 58 && directionofenemy1 == 'R')
    {
        array2d[enemy1row][enemy1column] = ' ';
        enemy1column++;
        array2d[enemy1row][enemy1column] = 'E';
        if (enemy1column == 58)
        {
            directionofenemy1 = 'L';
        }
    }
    else if (enemy1column > 2 && directionofenemy1 == 'L')
    {
        array2d[enemy1row][enemy1column] = ' ';
        enemy1column--;
        array2d[enemy1row][enemy1column] = 'E';
        if (enemy1column == 2)
        {
            directionofenemy1 = 'R';
        }
    }
}

void moveennmeny2(int &enemy2row,
                  int enemy2column, char &directionofenemy2, string array2d[])
{
    if (enemy2row < 18 && directionofenemy2 == 'D')
    {
        array2d[enemy2row][enemy2column] = ' ';
        enemy2row++;
        array2d[enemy2row][enemy2column] = 'E';
        if (enemy2row == 18)
        {
            directionofenemy2 = 'U';
        }
    }
    if (enemy2row > 1 && directionofenemy2 == 'U')
    {
        array2d[enemy2row][enemy2column] = ' ';
        enemy2row--;
        array2d[enemy2row][enemy2column] = 'E';
        if (enemy2row == 1)
        {
            directionofenemy2 = 'D';
        }
    }
}
void fire(string array2d[])
{

    for (int x = 1; x <= 18; x++)
    {
        for (int y = 0; y < 60; y++)
        {
            if (array2d[x][y] == '*' && array2d[x - 1][y] != '#')
            { 
                array2d[x][y] = ' ';
                array2d[x - 1][y] = '*';
               if (array2d[x-2][y] == '#')
                {
                    array2d[x-1 ][y] = ' ';
                }
            }
            
        }
    }
    for (int x = 18; x >= 1; x--)
    {
        for (int y = 0; y < 60; y++)
        {
            if (array2d[x][y] == '+' && array2d[x + 1][y] != '#')
            {
                array2d[x][y] = ' ';
                array2d[x + 1][y] = '+';

                if (array2d[x + 2][y] == '#')
                {
                    array2d[x + 1][y] = ' ';
                }
            }
        }
    }
    for (int y = 0; y < 60; y++)
    {
        for (int x = 1; x <= 18; x++)
        {

            if (array2d[x][y] == '-' && array2d[x][y - 1] != '#')
            {
                array2d[x][y] = ' ';
                array2d[x][y - 1] = '-';

                if (array2d[x][y - 2] == '#')
                {
                    array2d[x][y - 1] = ' ';
                }
            }
        }
    }
}
