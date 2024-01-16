/////////////////libraries//////////////////////////
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include <stdexcept>
#include <fstream>
using namespace std;
/////////////////////////////////////////////////////

///////////for goto func//////////////////
int x = 0;
int y = 0;
////////////////////////////////////////////

////////////cursor hide/////////////////////
void cursor_hide()
{
    /*
        For Removing Blinking Cursor on Screen
    */
    HANDLE hStdOut = NULL;
    CONSOLE_CURSOR_INFO curInfo;

    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hStdOut, &curInfo);
    curInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &curInfo);
}
////////////////////////////////////////////////

/////////////////////////////////////gotoxy//////////////////////////////////////

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
/////////////////////////////////////////////////////////////////////

///////////////////////////forcolors////////////////////////////////////
string setcolor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}
////////////////////////////////////////////////////////////////////

//////////////////functions for sign//////////
int signup(string username[100], string role[100], string password[100], int &number);                                       ////sign up purpose
void signupheader();                                                                                                         /////sign up headings such as usename etc
string signin(string username[100], string password[100], int number, int logup, string role[], string &user, string &pass); /// sign in purpose it matches usename exist or not plus contain user dara for account viewing purpose
void signinheader();                                                                                                         //////////sign in headings
////////////////////////////////////////////////
void accountedit(string username[], string password[], string customername[],
                 string customernumber[],
                 string customerid[],
                 string customeraddress[],
                 string customeremail[], int number); /////////for user to edit account
void mainname();                                      //////main display page containing loading etc
void animationcake();                                 /////after order display page
void border2();                                       ///////border for tables
void usermenuheader();                                ///////user menu headings such as cart remove food from cart
void cls2();                                          //////containg bg items for tables
void changestofoodmenuheader();                       ///////giving opt of which catagory you wanna change
void adminmenuheader();                               //////////containing elements of admin menu such as add food remove food
void border();                                        ////////////containg border for menus
void signinupexit();                                  ///////main menu elements
void cls();                                           /////bg items for non table menus
void name();                                          ///////basic header
int bg(int x, int y);                                 ///////returning opt to sign in up or exit
string adminmenu();                                   ///////return opt of admin choice
string usermenu(int total);                           //////return opt acc to users choice
string employemenu();                                 ////////return opt acc to employee choice
void viewfood(
    string optfood[], int opprice[], int optntax[], int counter);                            ////for admin to view all food items
string changestofoodmenu();                                                                  ///////deciding catagory asian thai in wj=hich you wanna change
void addfood(string food1[], int priceadmin[], int &counter, int taxadmin[], fstream &data); ////////adding food in menu
void removefood(string food1[], int priceadmin[], int &counter, int taxadmin[]);             ///////////removing food in menu

void updateprice(string food2[], int price_admin[], int counter); ////////////updating price in menu
void updatetax(string food3[], int tax3_admin[], int counter);    /////////updating tax in menu
void reqforjob(string employeename[], string employeenumber[], string employeespecial[], string employeeage[], string employeeid[], string employeeaddress[],
               string employeeemail[], int employee); /////////admin viewing candidates for job
void accept(string employeename[], int employee, string employename[], int &appointedemployee,
            string employeenumber[],
            string employeespecial[],
            string employeeage[],
            string employeeid[],
            string employeeaddress[],
            string employeeemail[],
            string employenumber[],
            string employespecial[],
            string employeage[],
            string employeid[],
            string employeaddress[],
            string employeemail[], fstream &employe); // accepting one of them
void loadEmployeeData(string employename[], string employenumber[], string employespecial[], string employeage[], string employeid[], string employeaddress[], string employeemail[], int &appointedemployee);
void loadDataInArray(int &count, string Uname[], string role[], string Password[]);
void storeFoodData(int &count, string asianfood[], int asianprice[], int asiantax[], fstream &data);
void loadFoodDataInArray(int &count, string asianfood[], int asianprice[], int asiantax[], fstream &data);
void loadCustomerData(string customername[], string customernumber[], string customerid[], string customeraddress[], string customeremail[], int customertotal[], string customerequirement[], string customerratings[], int &customer);
void loadEmployeeDataInArray(int &employee, string employeename[], string employeenumber[], string employeespecial[], string employeeage[], string employeeid[], string employeeaddress[], string employeeemail[], fstream &data);
void adminratecheck(string customeratings[], string customername[], int customer); ////checking rates given to app by customer
void customerhistory(string customername[], string customernumber[], string customerid[],
                     string customeraddress[], string customeremail[], int customer, int customertotal[], string customerequirement[]); //////customer history
void request(string employeename[], string employeenumber[], string employeespecial[], string employeeage[], string employeeid[], string employeeaddress[],
             string employeeemail[], int &employee, fstream &employe); ///////employee application system
void delreq(string employeename[], string employeenumber[], string employeespecial[], string employeeage[], string employeeid[], string employeeaddress[],
            string employeeemail[], int &employee, fstream &employe);  //////////employee can del his req
void selectedornot(string employename[100], int appointedemployee);    ///////check admin has selected him or not
int displayMenu(string food[], int price[], int counter, float total); //////users food menu to select food
void updateCart(string food[], int price[], int tax[], float &total, int quantity[], int &cart, int i, string optfood[], int optprice[], int opttax[]);
void cart_(string food[], int tax[], int price[], int quantity[], int cart, float total); ///////ading food to cart
void rating_(string customerrating[], int customer);                                      ////////////app rating system
string order(string customername[],
             string customernumber[],
             string customerid[],
             string customeraddress[],
             string customeremail[],
             int customer, int customertotal[], float total, string customerequirement[]);   ////////order time
void remove(string food[], int tax[], int price[], int quantity[], int &cart, float &total); ////removal of item from cart
void viewacc(
    string user,
    string pass); ////user can view his acc
void employehistory(string employename[], int appointedemployee,
                    string employenumber[],
                    string employespecial[],
                    string employeage[],
                    string employeid[],
                    string employeaddress[],
                    string employeemail[]);

void foodrequirement(string customerequirement[], int counterforreq);
void loadCustomereq(string customerequirement[], int counterforreq);
void adminfoodcheck(string customerequirement[], int counterforreq);
void chatbox(string user, string asianfood[],string japanfood[],string italyfood[],string francefood[],string thaifood[],int asianprice[],int japanprice[],int italyprice[],int franceprice[],int thaiprice[],int asiantax[],int japantax[],int francetax[],int thaitax[],int italytax[],int counterforasia,int counterforjapan,int counterforitaly,int counterforfrance,int counterforthai )
;void notice();
void bella();
//////main/////////////////////////////////////////////////////////////////////////////////////////////
main()
{
    cursor_hide();
    int counterforasia = 32;   ///////////for counting asia
    int counterforjapan = 40;  ///////////for counting japan
    int counterforitaly = 40;  ///////////for counting italy
    int counterforfrance = 40; ///////////for counting france
    int counterforthai = 40;   ///////////for counting thai
    int counterforreq = 0;
    /////////for asian food arrays///////////

    fstream asiandata;
    fstream japandata;
    fstream thaidata;
    fstream italydata;
    fstream francedata;
    // Open file for writing and erase existing content
    asiandata.open("asiamenu.txt", ios::in);
    string asianfood[400] = {"Papdi Chaat", "Sev Puri", "Biryani", "Butter Chicken", "Palak Paneer", "Rogan Josh", "Tandoori Chicken", "Chole Bhature", "Nihari", "Haleem", "Samosa", "Pani Puri", "Gulab Jamun", "Jalebi", "Barfi", "Rasgulla", "Kheer", "Halwa", "Laddu", "Rasmalai", "Peda", "Kulfi", "Chai", "Lassi", "Rooh Afza", "Sugarcane Juice", "Falooda", "Aam Panna", "Jal Jeera", "Masala Soda", "Thandai", "Sharbat", "Sabz Chai"};
    int asianprice[400] = {105, 100, 200, 250, 150, 300, 350, 100, 400, 450, 50, 75, 100, 50, 60, 50, 120, 50, 150, 100, 90, 80, 100, 120, 130, 140, 150, 160, 170, 180, 190, 100, 50};
    int asiantax[400] = {19, 10, 20, 25, 15, 30, 35, 10, 40, 45, 5, 7, 10, 10, 20, 5, 10, 15, 10, 13, 12, 10, 10, 12, 5, 10, 15, 10, 13, 12, 10, 10, 12};
    storeFoodData(counterforasia, asianfood, asianprice, asiantax, asiandata);

    ///////////////////////////////////////////
    /////////////////////////////////for japanese food///////////////////////
    japandata.open("japanmenu.txt", ios::in);
    string japanfood[400] = {"Green Tea", "Sake", "Matcha", "Amazake", "Shochu", "Umeshu", "Genmaicha", "Hojicha", "Mugicha", "Calpis", "Mochi", "Dorayaki", "Anmitsu", "Daifuku", "Matcha Ice Cream", "Castella", "Taiyaki", "Dango", "Yokan", "Warabimochi", "Sushi", "Ramen", "Tempura", "Okonomiyaki", "Sashimi", "Udon", "Yakitori", "Onigiri", "Miso Soup", "Tonkatsu", "Edamame", "Takoyaki", "Senbei", "Wasabi Peas", "Rice Crackers", "Nori Maki Arare", "Karinto", "Kaki No Tane", "Pretz", "Umaibo", "Chawanmushi"};
    int japanprice[400] = {100, 120, 130, 140, 150, 160, 170, 180, 190, 100, 200, 250, 150, 300, 350, 100, 400, 450, 50, 75, 111, 133, 234, 321, 41, 50, 115, 125, 135, 145, 155, 165, 175, 185, 195, 105, 500, 400, 300, 200, 100};
    int japantax[400] = {10, 12, 13, 14, 15, 16, 17, 18, 19, 10, 20, 25, 15, 30, 35, 10, 40, 45, 5, 7, 11, 10, 9, 8, 7, 6, 5, 12, 13, 14, 15, 16, 17, 18, 19, 10, 5, 10, 12, 13, 14};
    storeFoodData(counterforjapan, japanfood, japanprice, japantax, japandata);
    /////////////////////////////////////////////////////////////////////////
    ////////////////////////for italian food///////////////////////////////////////////
    italydata.open("italymenu.txt", ios::in);
    string italyfood[400] = {"Espresso", "Cappuccino", "Latte", "Macchiato", "Americano", "Negroni", "Bellini", "Aperol Spritz", "Limoncello", "Grappa", "Pizza", "Pasta", "Lasagna", "Risotto", "Polenta", "Osso Buco alla Milanese", "Saltimbocca", "Pesto", "Ribollita", "Tortellini", "Ossobuco", "Carbonara", "Bruschetta", "Caprese Salad", "Panzanella", "Arancini", "Prosciutto", "Bruschetta", "Olives", "Caprese Skewers", "Focaccia", "Antipasto", "Crostini", "Caponata", "Tramezzini", "Tiramisu", "Cannoli", "Panna Cotta", "Gelato", "Zabaglione", "Biscotti"};
    int italyprice[400] = {100, 120, 130, 140, 150, 160, 170, 180, 170, 180, 190, 100, 200, 250, 190, 100, 200, 300, 240, 310, 320, 340, 250, 150, 300, 350, 100, 400, 450, 50, 75, 115, 125, 135, 145, 155, 165, 175, 185, 195, 105};
    int italytax[400] = {10, 12, 13, 14, 15, 16, 17, 18, 19, 18, 19, 10, 20, 25, 15, 10, 20, 25, 15, 30, 40, 39, 38, 37, 36, 35, 10, 40, 45, 5, 7, 11, 12, 13, 14, 15, 16, 17, 18, 19, 10};
    storeFoodData(counterforitaly, italyfood, italyprice, italytax, italydata);

    ////////////////////////////////////////////////////////////////
    ////////////////////french food////////////////
    francedata.open("francemenu.txt", ios::in);
    string francefood[400] = {"Wine", "Champagne", "Cognac", "Pastis", "Coffee", "Orangina", "Chartreuse", "Kir", "Absinthe", "Calvados", "Coq au Vin", "Ratatouille", "Bouillabaisse", "Quiche", "Escargot", "Foie Gras", "Croque Monsieur", "Cassoulet", "Beef Bourguignon", "Duck Confit", "Cheese", "Baguette", "Croissant", "Pain au Chocolat", "Brioche", "Crepes", "Galettes", "Tarte Flambée", "Rillettes", "Pissaladière", "Tarte Tatin", "Crème Brûlée", "Macarons", "Éclair", "Profiterole", "Madeleines", "Croquembouche", "Mille-Feuille", "Opera Cake", "Clafoutis", "Baguette"};
    int franceprice[400] = {100, 120, 130, 140, 150, 160, 170, 170, 180, 190, 100, 200, 250, 150, 300, 350, 100, 400, 450, 50, 75, 115, 125, 135, 145, 155, 165, 175, 185, 195, 105, 100, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    int francetax[400] = {10, 12, 13, 14, 15, 16, 17, 18, 15, 19, 10, 20, 25, 15, 30, 35, 10, 40, 45, 5, 7, 11, 12, 13, 14, 15, 16, 17, 18, 19, 10, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    storeFoodData(counterforfrance, francefood, franceprice, francetax, francedata);
    /////////////////////////////////////////////
    thaidata.open("thaimenu.txt", ios::in);
    string thaifood[400] = {"Thai Iced Tea", "Thai Iced Coffee", "Cha Manao", "Nam Manao", "Krating Daeng", "Satho", "Oliang", "Nam Dok Anchan", "Butterfly Pea Tea", "Roselle Juice", "Pad Thai", "Tom Yum Goong", "Som Tum", "Massaman Curry", "Green Curry", "Khao Pad", "Pad Krapow Moo Saap", "Gaeng Keow Wan Kai", "Yam Nua", "Kai Med Ma Muang", "Satay", "Spring Rolls", "Tod Man Pla", "Khao Kha Mu", "Sai Krok Isan", "Miang Kham", "Khanom Buang", "Khanom Tom", "Khanom Khrok", "Khanom Bueang Yuan", "Mango Sticky Rice", "Thai Coconut Ice Cream", "Khanom Chan", "Foy Thong", "Thong Yip", "Thong Yod", "Luk Chup", "Sangkhaya", "Khanom Buang", "Khanom Krok", "Green Curry"};
    int thaiprice[400] = {100, 120, 221, 130, 140, 150, 160, 170, 180, 190, 100, 200, 250, 150, 300, 350, 100, 400, 450, 50, 75, 115, 125, 135, 145, 155, 165, 175, 185, 195, 105, 100, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    int thaitax[400] = {10, 12, 13, 22, 14, 15, 16, 17, 18, 19, 10, 20, 25, 15, 30, 35, 10, 40, 45, 5, 7, 11, 12, 13, 14, 15, 16, 17, 18, 19, 10, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    storeFoodData(counterforthai, thaifood, thaiprice, thaitax, thaidata);
    ////////////////////////////////////////////////////////////////////////////
    ////////////////////////for request purpose////////////////////////////////////
    string employeename[100];
    string employeenumber[100];
    string employeespecial[100];
    string employeeage[100];
    string employeeid[100];
    string employeeaddress[100];
    string employeeemail[100];
    int employee = 0;        ///////////////w8ing purpose
    string employename[100]; ///////////selecion purpose
    string employenumber[100];
    string employespecial[100];
    string employeage[100];
    string employeid[100];
    string employeaddress[100];
    string employeemail[100];
    int appointedemployee = 0;
    ///////////////////////////////////////////////////////////////////////////
    ////////////////for customer order////////////
    string customername[100];
    string customernumber[100];
    string customerid[100];
    string customeraddress[100];
    string customeremail[100];
    string customerequirement[100];
    int customer = 0;
    string customeratings[100];
    string food[100];
    int price[100];
    int tax[100];
    float total = 0;
    int quantity[100];
    int cart = 0;
    int customertotal[100];
    fstream employe;
    fstream select;
    ////////////////////////////////////////////
    string user = "";
    string pass = "";
    string adminchoice = "";
    int logup = 0;
    string login = "";
    string username[100]; ////for sign up purpose
    string role[100];     /////getting role of use
    string password[100]; ////////////getting password of use
    int number = 0;       ////////storing numbers of username
    mainname();
    asiandata.open("asiamenu.txt", ios::in);
    loadFoodDataInArray(counterforasia, asianfood, asianprice, asiantax, asiandata);
    asiandata.close();
    japandata.open("japanmenu.txt", ios::in);
    loadFoodDataInArray(counterforjapan, japanfood, japanprice, japantax, japandata);
    japandata.close();
    italydata.open("italymenu.txt", ios::in);
    loadFoodDataInArray(counterforitaly, italyfood, italyprice, italytax, italydata);
    italydata.close();
    francedata.open("francemenu.txt", ios::in);
    loadFoodDataInArray(counterforfrance, francefood, franceprice, francetax, francedata);
    francedata.close();
    thaidata.open("thaimenu.txt", ios::in);
    loadFoodDataInArray(counterforthai, thaifood, thaiprice, thaitax, thaidata);
    thaidata.close();
    loadEmployeeDataInArray(employee, employeename, employeenumber, employeespecial, employeeage, employeeid, employeeaddress, employeeemail, employe);
    loadEmployeeData(employename, employenumber, employespecial, employeage, employeid, employeaddress, employeemail, appointedemployee);
    loadCustomerData(customername, customernumber, customerid, customeraddress, customeremail, customertotal, customerequirement, customeratings, customer);
    loadCustomereq(customerequirement, counterforreq);
    loadDataInArray(number, username, role, password);

    while (true) ///////main while
    {
        int sign = bg(x, y); ///////login logup exit page
        if (sign == 2)
        {
            logup = signup(username, role, password, number); ///////signup page
        }
        if (sign == 1)
        {
            total = 0;
            login = signin(username, password, number, logup, role,
                           user,
                           pass); /////////signin page
            if (login == "admin")
            {
                bool mainpageofadmin = true;
                while (mainpageofadmin == true)
                {
                    adminchoice = adminmenu();
                    if (adminchoice == "1") //////to add food
                    {
                        bool adding = true;
                        while (adding == true)
                        {
                            string add_food = changestofoodmenu();
                            if (add_food == "1")
                            {
                                asiandata.open("asiamenu.txt", ios::out);

                                addfood(asianfood, asianprice, counterforasia, asiantax, asiandata); //////adding food in asian
                                for (int i = 0; i <= counterforasia; i++)
                                {
                                    asiandata << asianfood[i] << ',' << asianprice[i] << ',' << asiantax[i] << '\n';
                                }
                                asiandata.close();
                            }
                            else if (add_food == "2")
                            {
                                japandata.open("japanmenu.txt", ios::out);
                                addfood(japanfood, japanprice, counterforjapan, japantax, japandata); ////////ading food in japanese
                                for (int i = 0; i <= counterforjapan; i++)
                                {
                                    japandata << japanfood[i] << ',' << japanprice[i] << ',' << japantax[i] << '\n';
                                }
                                japandata.close();
                            }
                            else if (add_food == "3")
                            {
                                italydata.open("italymenu.txt", ios::out);
                                addfood(italyfood, italyprice, counterforitaly, italytax, italydata); /////////adding food in italian
                                for (int i = 0; i <= counterforitaly; i++)
                                {
                                    italydata << italyfood[i] << ',' << italyprice[i] << ',' << italytax[i] << '\n';
                                }
                                italydata.close();
                            }
                            else if (add_food == "4")
                            {
                                francedata.open("francemenu.txt", ios::out);
                                addfood(francefood, franceprice, counterforfrance, francetax, francedata); /////////adding food in french
                                for (int i = 0; i <= counterforfrance; i++)
                                {
                                    francedata << francefood[i] << ',' << franceprice[i] << ',' << francetax[i] << '\n';
                                }
                                francedata.close();
                            }
                            else if (add_food == "5")
                            {
                                thaidata.open("thaimenu.txt", ios::out);
                                addfood(thaifood, thaiprice, counterforthai, thaitax, thaidata); ////////////adding food in thai
                                for (int i = 0; i <= counterforthai; i++)
                                {
                                    thaidata << thaifood[i] << ',' << thaiprice[i] << ',' << thaitax[i] << '\n';
                                }
                                thaidata.close();
                            }
                            else if (add_food == "6") /// for back
                            {
                                adding = false;
                            }
                            else
                            {
                                gotoxy(73, 18);
                                cout << "Invalid Input";
                                getch();
                            }
                        }
                    }

                    else if (adminchoice == "2") ///////to remove food
                    {
                        bool removingchoice = true;
                        while (removingchoice == true)
                        {
                            string remove_food = changestofoodmenu();
                            if (remove_food == "1")
                            {
                                asiandata.open("asiamenu.txt", ios::out);
                                removefood(asianfood, asianprice, counterforasia, asiantax); /// remove from asia
                                for (int i = 0; i <= counterforasia; i++)
                                {
                                    asiandata << asianfood[i] << ',' << asianprice[i] << ',' << asiantax[i] << '\n';
                                }
                                asiandata.close();
                            }
                            if (remove_food == "2")
                            {
                                japandata.open("japanmenu.txt", ios::out);
                                removefood(japanfood, japanprice, counterforjapan, japantax); ////////remove from japan
                                for (int i = 0; i <= counterforjapan; i++)
                                {
                                    japandata << japanfood[i] << ',' << japanprice[i] << ',' << japantax[i] << '\n';
                                }
                                japandata.close();
                            }
                            if (remove_food == "3")
                            {
                                italydata.open("italymenu.txt", ios::out);

                                removefood(italyfood, italyprice, counterforitaly, italytax); ///////////////remove from italy
                                for (int i = 0; i <= counterforitaly; i++)
                                {
                                    italydata << italyfood[i] << ',' << italyprice[i] << ',' << italytax[i] << '\n';
                                }
                                italydata.close();
                            }
                            if (remove_food == "4")
                            {
                                francedata.open("francemenu.txt", ios::out);

                                removefood(francefood, franceprice, counterforfrance, francetax); ///////remove from french
                                for (int i = 0; i <= counterforfrance; i++)
                                {
                                    francedata << francefood[i] << ',' << franceprice[i] << ',' << francetax[i] << '\n';
                                }
                                francedata.close();
                            }
                            if (remove_food == "5")
                            {
                                thaidata.open("thaimenu.txt", ios::out);

                                removefood(thaifood, thaiprice, counterforthai, thaitax); //////////remove from thai
                                for (int i = 0; i <= counterforthai; i++)
                                {
                                    thaidata << thaifood[i] << ',' << thaiprice[i] << ',' << thaitax[i] << '\n';
                                }
                                thaidata.close();
                            }
                            if (remove_food == "6") ////////////for back
                            {
                                removingchoice = false;
                            }
                        }
                    }
                    else if (adminchoice == "3") /// to view food
                    {
                        bool viewchoice = true;
                        while (viewchoice == true)
                        {
                            string view_food = changestofoodmenu();
                            if (view_food == "1")
                            {
                                viewfood(asianfood, asianprice, asiantax, counterforasia); /// view from asia
                            }
                            if (view_food == "2")
                            {
                                viewfood(japanfood, japanprice, japantax, counterforjapan); ////////view from japan
                            }
                            if (view_food == "3")
                            {
                                viewfood(italyfood, italyprice, italytax, counterforitaly); ///////////////view from italy
                            }
                            if (view_food == "4")
                            {
                                viewfood(francefood, franceprice, francetax, counterforfrance); ///////view from french
                            }
                            if (view_food == "5")
                            {
                                viewfood(thaifood, thaiprice, thaitax, counterforthai); //////////view from thai
                            }
                            if (view_food == "6") ////////////for back
                            {
                                viewchoice = false;
                            }
                        }
                    }
                    else if (adminchoice == "4")
                    {
                        bool changeofprice = true;
                        while (changeofprice == true) ////////////changing price
                        {
                            string changeprice = changestofoodmenu();
                            if (changeprice == "1")
                            {
                                asiandata.open("asiamenu.txt", ios::out);
                                updateprice(asianfood, asianprice, counterforasia);
                                for (int i = 0; i <= counterforasia; i++)
                                {
                                    asiandata << asianfood[i] << ',' << asianprice[i] << ',' << asiantax[i] << '\n';
                                }
                                asiandata.close();
                            }
                            if (changeprice == "2")
                            {
                                japandata.open("japanmenu.txt", ios::out);
                                updateprice(japanfood, japanprice, counterforjapan);
                                for (int i = 0; i <= counterforjapan; i++)
                                {
                                    japandata << japanfood[i] << ',' << japanprice[i] << ',' << japantax[i] << '\n';
                                }
                                japandata.close();
                            }
                            if (changeprice == "3")
                            {
                                italydata.open("italymenu.txt", ios::out);
                                updateprice(italyfood, italyprice, counterforitaly);
                                for (int i = 0; i <= counterforitaly; i++)
                                {
                                    italydata << italyfood[i] << ',' << italyprice[i] << ',' << italytax[i] << '\n';
                                }
                                italydata.close();
                            }
                            if (changeprice == "4")
                            {
                                francedata.open("francemenu.txt", ios::out);

                                updateprice(francefood, franceprice, counterforfrance);
                                for (int i = 0; i <= counterforfrance; i++)
                                {
                                    francedata << francefood[i] << ',' << franceprice[i] << ',' << francetax[i] << '\n';
                                }
                                francedata.close();
                            }
                            if (changeprice == "5")
                            {
                                thaidata.open("thaimenu.txt", ios::out);
                                updateprice(thaifood, thaiprice, counterforthai);
                                for (int i = 0; i <= counterforthai; i++)
                                {
                                    thaidata << thaifood[i] << ',' << thaiprice[i] << ',' << thaitax[i] << '\n';
                                }
                                thaidata.close();
                            }
                            if (changeprice == "6")
                            {
                                changeofprice = false;
                            }
                        }
                    }
                    else if (adminchoice == "5") //////changing tax
                    {
                        bool changeoftax = true;
                        while (changeoftax == true)
                        {
                            string changetax = changestofoodmenu();
                            if (changetax == "1")
                            {
                                asiandata.open("asiamenu.txt", ios::out);
                                updatetax(asianfood, asiantax, counterforasia);
                                for (int i = 0; i <= counterforasia; i++)
                                {
                                    asiandata << asianfood[i] << ',' << asianprice[i] << ',' << asiantax[i] << '\n';
                                }
                                asiandata.close();
                            }
                            if (changetax == "2")
                            {
                                japandata.open("japanmenu.txt", ios::out);
                                updatetax(japanfood, japantax, counterforjapan);
                                for (int i = 0; i <= counterforjapan; i++)
                                {
                                    japandata << japanfood[i] << ',' << japanprice[i] << ',' << japantax[i] << '\n';
                                }
                                japandata.close();
                            }
                            if (changetax == "3")
                            {
                                italydata.open("italymenu.txt", ios::out);
                                updatetax(italyfood, italytax, counterforitaly);
                                for (int i = 0; i <= counterforitaly; i++)
                                {
                                    italydata << italyfood[i] << ',' << italyprice[i] << ',' << italytax[i] << '\n';
                                }
                                italydata.close();
                            }
                            if (changetax == "4")
                            {
                                francedata.open("francemenu.txt", ios::out);

                                updatetax(francefood, francetax, counterforfrance);
                                for (int i = 0; i <= counterforfrance; i++)
                                {
                                    francedata << francefood[i] << ',' << franceprice[i] << ',' << francetax[i] << '\n';
                                }
                                francedata.close();
                            }
                            if (changetax == "5")
                            {
                                thaidata.open("thaimenu.txt", ios::out);
                                updatetax(thaifood, thaitax, counterforthai);
                                for (int i = 0; i <= counterforthai; i++)
                                {
                                    thaidata << thaifood[i] << ',' << thaiprice[i] << ',' << thaitax[i] << '\n';
                                }
                                thaidata.close();
                            }
                            if (changetax == "6")
                            {
                                changeoftax = false;
                            }
                        }
                    }
                    else if (adminchoice == "6") /// view requests
                    {
                        reqforjob(employeename, employeenumber, employeespecial, employeeage, employeeid, employeeaddress,
                                  employeeemail, employee);
                    }
                    else if (adminchoice == "7") /// accept req
                    {
                        employe.open("employee.txt", ios::out);
                        select.open("selectemp.txt", ios::app);
                        accept(employeename, employee, employename, appointedemployee, employeenumber, employeespecial, employeeage, employeeid, employeeaddress, employeeemail, employenumber, employespecial, employeage, employeid, employeaddress, employeemail, employe);
                        employe.close();
                        select << employename[appointedemployee - 1] << "," << employenumber[appointedemployee - 1] << "," << employespecial[appointedemployee - 1] << "," << employeage[appointedemployee - 1] << "," << employeid[appointedemployee - 1] << "," << employeaddress[appointedemployee - 1] << "," << employeemail[appointedemployee - 1] << endl;
                        select.close();
                    }
                    else if (adminchoice == "8") ////////all info of the customer who made an order
                    {

                        customerhistory(customername, customernumber, customerid,
                                        customeraddress, customeremail, customer, customertotal, customerequirement);
                    }
                    else if (adminchoice == "9")
                    {
                        adminratecheck(customeratings, customername, customer);
                    }
                    else if (adminchoice == "10") ////for checking employees
                    {
                        employehistory(employename, appointedemployee,
                                       employenumber,
                                       employespecial,
                                       employeage,
                                       employeid,
                                       employeaddress,
                                       employeemail);
                    }
                    else if (adminchoice == "11")
                    {

                        adminfoodcheck(customerequirement, counterforreq);
                    }
                    else if (adminchoice == "0") ////for back
                    {
                        mainpageofadmin = false;
                    }
                    else
                    {
                        gotoxy(73, 22);
                        cout << "Invalid Output";
                        getch();
                    }
                }
            }
            if (login == "user")
            {
                int ans = 0;
                bool mainpageofuser = true;
                while (mainpageofuser == true)
                {
                    adminchoice = usermenu(total);
                    if (adminchoice == "1") /////////asian menu
                    {
                        while (true)
                        {
                            ans = displayMenu(asianfood, asianprice, counterforasia, total);
                            for (int i = 1; i <= counterforasia; i++)
                            {
                                if (ans == i)
                                {
                                    updateCart(food, price, tax, total, quantity, cart, i, asianfood, asianprice, asiantax);
                                }
                            }
                            if (ans == 0)
                            {
                                break;
                            }
                        }
                    }
                    else if (adminchoice == "2") /////////////japanese menu
                    {
                        while (true)
                        {
                            ans = displayMenu(japanfood, japanprice, counterforjapan, total);
                            for (int i = 1; i <= counterforjapan; i++)
                            {
                                if (ans == i)
                                {
                                    updateCart(food, price, tax, total, quantity, cart, i, japanfood, japanprice, japantax);
                                }
                            }
                            if (ans == 0)
                            {
                                break;
                            }
                        }
                    }
                    else if (adminchoice == "3") /////italian menu
                    {
                        while (true)
                        {
                            ans = displayMenu(italyfood, italyprice, counterforitaly, total);
                            for (int i = 1; i <= counterforitaly; i++)
                            {
                                if (ans == i)
                                {
                                    updateCart(food, price, tax, total, quantity, cart, i, italyfood, italyprice, italytax);
                                }
                            }
                            if (ans == 0)
                            {
                                break;
                            }
                        }
                    }
                    else if (adminchoice == "4") //////french menu
                    {
                        while (true)
                        {
                            ans = displayMenu(francefood, franceprice, counterforfrance, total);
                            for (int i = 1; i <= counterforfrance; i++)
                            {
                                if (ans == i)
                                {
                                    updateCart(food, price, tax, total, quantity, cart, i, francefood, franceprice, francetax);
                                }
                            }
                            if (ans == 0)
                            {
                                break;
                            }
                        }
                    }
                    else if (adminchoice == "5") ///////thai menu
                    {
                        while (true)
                        {
                            ans = displayMenu(thaifood, thaiprice, counterforthai, total);
                            for (int i = 1; i <= counterforthai; i++)
                            {
                                if (ans == i)
                                {
                                    updateCart(food, price, tax, total, quantity, cart, i, thaifood, thaiprice, thaitax);
                                }
                            }
                            if (ans == 0)
                            {
                                break;
                            }
                        }
                    }

                    else if (adminchoice == "6") ////////////adding food in cart
                    {
                        cart_(food, tax, price, quantity, cart, total);
                    }
                    else if (adminchoice == "7") /////////////removal of food from cart
                    {
                        remove(food, tax, price, quantity, cart, total);
                    }
                    else if (adminchoice == "8") ////rating section
                    {
                        rating_(customeratings, customer);
                    }
                    else if (adminchoice == "13") ////for back
                    {
                        mainpageofuser = false;
                    }
                    else if (adminchoice == "12")
                    {
                        foodrequirement(customerequirement, counterforreq);
                    }
else if(adminchoice=="14")
{bella();
 chatbox( user, asianfood, japanfood, italyfood, francefood, thaifood, asianprice, japanprice, italyprice, franceprice, thaiprice, asiantax, japantax, francetax, thaitax, italytax, counterforasia, counterforjapan, counterforitaly, counterforfrance, counterforthai )
;
}
                    else if (adminchoice == "9") ///////order placed!!!
                    {
                        string order_ = order(customername, customernumber, customerid, customeraddress, customeremail, customer, customertotal, total, customerequirement);
                        if (order_ == "y")
                        {
                            fstream data;
                            data.open("customer.txt", ios::app);
                            data << customername[customer] << "," << customernumber[customer] << "," << customerid[customer] << "," << customeraddress[customer] << "," << customeremail[customer] << "," << customertotal[customer] << "," << customeratings[customer]<<endl;
                            data.close();
                            animationcake();
                            customer++;
                            mainpageofuser = false;
                        }
                        else if (order_ == "n")
                        {
                            continue;
                        }
                    }

                    else if (adminchoice == "10") ////for account
                    {
                        viewacc(
                            user,
                            pass);
                    }
                    else if (adminchoice == "11")
                    {
                        fstream data;
fstream data1;
                        accountedit(username, password, customername,
                                    customernumber,
                                    customerid,
                                    customeraddress,
                                    customeremail, number);
                        data.open("villa.txt", ios::out);
                        for (int i = 0; i < number; i++)
                        {
                            data << username[i] << "," << role[i] << "," << password[i] << endl;
                        }
                        data1.close();
                        data1.open("customer.txt", ios::out);
                        for (int i = 0; i < customer; i++)
                        {
                            data << customername[i] << "," << customernumber[i] << "," << customerid[i] << "," << customeraddress[i] << "," << customeremail[i] << "," << customertotal[i] << "," << customeratings[i];
                        }

                        data1.close();
                    }

                    else
                    {
                        gotoxy(51, 27);
                        cout << "Invalid Output";
                    }
                }
            }
            if (login == "employe") ///////employe interface
            {
                bool mainpageofemploye = true;
                while (mainpageofemploye == true)
                {

                    adminchoice = employemenu();
                    if (adminchoice == "1") ///////make req
                    {
                        employe.open("employee.txt", ios::app);
                        request(employeename, employeenumber, employeespecial, employeeage, employeeid, employeeaddress,
                                employeeemail, employee, employe);
                        employe.close();
                    }
                    else if (adminchoice == "2") ////////incase employee want to delete his req
                    {
                        employe.open("employee.txt", ios::out);
                        delreq(employeename, employeenumber, employeespecial, employeeage, employeeid, employeeaddress,
                               employeeemail, employee, employe);
                        employe.close();
                    }
                    else if (adminchoice == "3") /////////////selection
                    {
                        selectedornot(employename, appointedemployee);
                    }
                    else if (adminchoice == "4") /// forback
                    {
                        mainpageofemploye = false;
                    }

                    else
                    {
                        gotoxy(51, 18);
                        cout << "Invalid Input";
                        getch();
                    }
                }
            }
        }

        if (sign == 3)
        {
            break; //////exit button
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////sign up page/////////////////
int signup(string username[100], string role[100], string password[100], int &number)
{
    signupheader();
    password[number] = "";
    int b = 0;
    setcolor(5);
    int ans = 0;
    do
    {
        gotoxy(55, 11);
        cout << " ___ ___                                             __ \n";
        gotoxy(55, 12);
        cout << "|   Y   .-----.-----.----.-----.---.-.--------.-----|__|\n";
        gotoxy(55, 13);
        cout << "|.  |   |__ --|  -__|   _|     |  _  |        |  -__|__ \n";
        gotoxy(55, 14);
        cout << "|.  |   |_____|_____|__| |__|__|___._|__|__|__|_____|__|\n";
        gotoxy(55, 15);
        cout << "|:  1   |                                               \n";
        gotoxy(55, 16);
        cout << "|::.. . |                                               \n";
        gotoxy(55, 17);
        cout << "`-------'                                               \n";

        gotoxy(60, 19);
        getline(cin, username[number]);
        b++;
        if (b == 1 && username[number].empty())
        {
            gotoxy(60, 20);
            cout << "if u press enter 5 times u will be back";
            getch();
            gotoxy(60, 20);
            cout << "                                       ";
        }
    } while (username[number].empty() && b < 5);
    if (b == 5)
    {
        return 0;
    }
    signupheader();
    setcolor(7);
    int a = 0;
    do
    {
        gotoxy(55, 11);
        cout << " _______                                          __ __ \n";
        gotoxy(55, 12);
        cout << "|   _   .---.-.-----.-----.--.--.--.-----.----.--|  |__|\n";
        gotoxy(55, 13);
        cout << "|.  1   |  _  |__ --|__ --|  |  |  |  _  |   _|  _  |__ \n";
        gotoxy(55, 14);
        cout << "|.  ____|___._|_____|_____|________|_____|__| |_____|__|\n";
        gotoxy(55, 15);
        cout << "|:  |                                                   \n";
        gotoxy(55, 16);
        cout << "|::.|          ( it should be 8 charactors)             \n";
        gotoxy(55, 17);
        cout << "`---'                                                   \n";
        gotoxy(60, 19);

        char ch;
        int i = 0;
        while (1)
        {
            ch = _getch();
            if (ch == 13) // Enter key
                break;
            else if (ch == 8) // Backspace
            {
                if (i > 0)
                {
                    cout << "\b \b";
                    i--;
                }
            }
            else
            {
                password[number] += ch;
                cout << '*';
                i++;
            }
        };
        a++;
    } while (password[number].empty() && a < 5);

    setcolor(7);
    signupheader();
    do
    {
        gotoxy(55, 11);
        cout << " _______       __       __ \n";
        gotoxy(55, 12);
        cout << "|   _   .-----|  .-----|__|\n";
        gotoxy(55, 13);
        cout << "|.  l   |  _  |  |  -__|__ \n";
        gotoxy(55, 14);
        cout << "|.  _   |_____|__|_____|__|\n";
        gotoxy(55, 15);
        cout << "|:  |   |   1.Admin        \n";
        gotoxy(55, 16);
        cout << "|::.|:. |   2.User         \n";
        gotoxy(55, 17);
        cout << "`--- ---'   3.Employee     \n";
        gotoxy(60, 19);
        setcolor(7);
        getline(cin, role[number]);
    } while (role[number].empty());
    if (role[number] == "1" || role[number] == "2" || role[number] == "3")
    {
        ans = stoi(role[number]);
    }

    for (int i = 0; i < number; i++)
    {
        if (username[number] == username[i])
        {
            password[number] = "0";
            username[number] = "0";
            gotoxy(60, 19);
            cout << "Invalid input: username is already taken.";
            getch();
            return 0;
        }
    }

    if (password[number].length() != 8 || password[number].find_first_not_of("0123456789") != std::string::npos)
    {
        password[number] = "0";
        username[number] = "0";
        gotoxy(60, 19);
        cout << "Invalid input: password should be 8 numeric characters.";
        getch();
        return 0;
    }

    if (ans != 1 && ans != 2 && ans != 3)
    {
        password[number] = "0";
        username[number] = "0";
        gotoxy(60, 19);
        cout << "Invalid input: role should be Admin/User/Employee.";
        getch();
        return 0;
    }
    gotoxy(60, 20);
    cout << "Registration completed.";
    fstream data;
    data.open("villa.txt", ios::app);

    data << username[number] << ',' << role[number] << ',' << password[number] << '\n';

    data.close();
    ++number;

    getch();
    return ans;
}

/////////////////////////////////////////
////////////////////sign in//////////////////////////////
string signin(string username[100], string password[100],
              int number, int logup, string role[],
              string &user,
              string &pass)
{
    int c = 0;
    pass = "";
    signinheader();
    setcolor(9);
    do
    {
        gotoxy(55, 11);
        cout << " ___ ___                                             __ \n";
        gotoxy(55, 12);
        cout << "|   Y   .-----.-----.----.-----.---.-.--------.-----|__|\n";
        gotoxy(55, 13);
        cout << "|.  |   |__ --|  -__|   _|     |  _  |        |  -__|__ \n";
        gotoxy(55, 14);
        cout << "|.  |   |_____|_____|__| |__|__|___._|__|__|__|_____|__|\n";
        gotoxy(55, 15);
        cout << "|:  1   |                                               \n";
        gotoxy(55, 16);
        cout << "|::.. . |                                               \n";
        gotoxy(55, 17);
        cout << "`-------'                                               \n";

        gotoxy(60, 19);

        getline(cin, user);
        c++;
        if (c == 1 && user.empty())
        {
            gotoxy(60, 20);
            cout << "Enter something plz incase u press enter 4 times u will be back";
        }
    } while (user.empty() && c < 4);
    if (c == 4)
    {
        gotoxy(60, 21);
        cout << "You aren't entering anyhting for 4 times";
        getch();
        return "0";
    }
    signinheader();
    setcolor(8);
    int a = 0;
    do
    {
        gotoxy(55, 11);
        cout << " _______                                          __ __ \n";
        gotoxy(55, 12);
        cout << "|   _   .---.-.-----.-----.--.--.--.-----.----.--|  |__|\n";
        gotoxy(55, 13);
        cout << "|.  1   |  _  |__ --|__ --|  |  |  |  _  |   _|  _  |__ \n";
        gotoxy(55, 14);
        cout << "|.  ____|___._|_____|_____|________|_____|__| |_____|__|\n";
        gotoxy(55, 15);
        cout << "|:  |                                                   \n";
        gotoxy(55, 16);
        cout << "|::.|          ( it should be 8 charactors)             \n";
        gotoxy(55, 17);
        cout << "`---'                                                   \n";
        gotoxy(60, 19);
        char ch;
        int i = 0;
        while (1)
        {
            ch = _getch();
            if (ch == 13) // Enter key
                break;
            else if (ch == 8) // Backspace
            {
                if (i > 0)
                {
                    cout << "\b \b";
                    i--;
                }
            }
            else
            {
                pass += ch;
                cout << '*';
                i++;
            }
        }
        a++;
        if (a == 1 && pass.empty())
        {
            gotoxy(60, 20);
            cout << "Enter something plz";
            getch();
            gotoxy(60, 20);
            cout << "                    ";
        }
    } while (pass.empty() && a < 4);

    for (int i = 0; i < number; i++)
    {
        if (user == username[i] && pass == password[i])
        {
            gotoxy(60, 21);
            cout << "Welcome back, " << username[i];
            getch();
            if (role[i] == "1")
            {
                return "admin";
            }
            else if (role[i] == "2")
            {
                return "user";
            }
            else if (role[i] == "3")
            {
                return "employe";
            }
        }
    }
    gotoxy(60, 19);
    cout << "Invalid username or password." << endl;
    getch();
    return "0";
}

///////////////////////////////////////////////////////////////

/////////////////////bg page//////////////////////////////////////////////////////////////

int bg(int x, int y)
{
    signinupexit();
    setcolor(7);
    string optionno;
    gotoxy(110, 22);

    getline(cin, optionno);

    if (!optionno.empty() && (optionno == "1" || optionno == "2" || optionno == "3"))
    {
        int ans = stoi(optionno);
        return ans;
    }
    else
    {
        gotoxy(110, 22);
        cout << "Invalid input; please re-enter.\n";
        getch();
    }
}

///////////////////////////

//////////////////////////////header/////////////////////////////////////////////////////////////////////////////////
void name()
{

    gotoxy(50, 0);
    setcolor(8);
    cout << "   . .       . .       . .       . .          .    . .       .         .         . .    \n";
    gotoxy(50, 1);
    setcolor(8);
    cout << ".+'|=|`+. .+'|=|`+. .+'|=|`+. .+'|=|`+.    .+'|  .'| |`+. .+'|      .+'|      .+'|=|`+. \n";
    gotoxy(50, 2);
    setcolor(7);
    cout << "|  | `+.| |  | |  | |  | |  | |  | `+ |    |  |  | | |  | |  |      |  |      |  | |  | \n";
    gotoxy(50, 3);
    setcolor(7);
    cout << "|  |=|`.  |  | |  | |  | |  | |  |  | |    |  |  | | |  | |  |      |  |      |  |=|  | \n";
    gotoxy(50, 4);
    setcolor(7);
    cout << "|  | `.|  |  | |  | |  | |  | |  |  | |    |  |  | | |  | |  |      |  |      |  | |  | \n";
    gotoxy(50, 5);
    setcolor(7);
    cout << "|  |      |  | |  | |  | |  | |  |  | |    |  |  | | |  | |  |    . |  |    . |  | |  | \n";
    gotoxy(50, 6);
    setcolor(8);
    cout << "|  |      |  | |  | |  | |  | |  | .+ |    |  | .+ | |  | |  | .+'| |  | .+'| |  | |  | \n";
    gotoxy(50, 7);
    setcolor(8);
    cout << "`+.|      `+.|=|.+' `+.|=|.+' `+.|=|.+'    `+.|=|.+' |.+' `+.|=|.+' `+.|=|.+' `+.| |..| \n";
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////screen header///////////////";//////////////////////////////
void cls()
{
    system("cls");
    border();
    name();
}
///////////////////////////////////////////////////////////////////

///////////////////////admin's main page/////////////////////////////////////
string adminmenu()
{
    adminmenuheader();
    string option;

    gotoxy(75, 23);
    getline(cin, option);
    return option;
}
/////////////////////////////////////////////////////////////////////

/////////////////////////users mainmenu//////////////////
string usermenu(int total)
{
    string option;
    gotoxy(80, 60);
    cout << "Total: " << total << endl;
    usermenuheader();
    gotoxy(80, 24);
    getline(cin, option);
    cout << option;

    return option;
}

///////////////////////////////////////////////////
string employemenu()
{
    cls();
    setcolor(8);
    gotoxy(51, 11);
    cout << "Here you can request for your job we will \n";
    gotoxy(51, 12);
    cout << " let you know your request is accepted or not...\n";
    gotoxy(51, 13);
    cout << "1.Make Request \n";
    gotoxy(51, 14);
    cout << "2.Delete Request\n";
    gotoxy(51, 15);
    cout << "3.Check you are appointed or not\n";
    gotoxy(51, 16);
    cout << "4.Back\n";
    gotoxy(51, 17);
    cout << "Enter your choice: ";
    setcolor(1);
    cout << R"(
        
                                             _..._       .-'''-.                                         
                                 .---.    .-'_..._''.   '   _    \                                       
                   __.....__     |   |  .' .'      '.\/   /` '.   \  __  __   ___         __.....__      
       _     _ .-''         '.   |   | / .'          .   |     \  ' |  |/  `.'   `.   .-''         '.    
 /\    \\   ///     .-''"'-.  `. |   |. '            |   '      |  '|   .-.  .-.   ' /     .-''"'-.  `.  
 `\\  //\\ ///     /________\   \|   || |            \    \     / / |  |  |  |  |  |/     /________\   \ 
   \`//  \'/ |                  ||   || |             `.   ` ..' /  |  |  |  |  |  ||                  | 
    \|   |/  \    .-------------'|   |. '                '-...-'`   |  |  |  |  |  |\    .-------------' 
     '        \    '-.____...---.|   | \ '.          .              |  |  |  |  |  | \    '-.____...---. 
               `.             .' |   |  '. `._____.-'/              |__|  |__|  |__|  `.             .'  
                 `''-...... -'   '---'    `-.______ /                                   `''-...... -'    
                                                   `                                                     
                                                                                                         

    )";
    string choice;
    do
    {
        gotoxy(70, 17);
        getline(cin, choice);
    } while (choice.empty());
    return choice;
}

///////////////////viewfood//////////////////////////////////////
void viewfood(
    string optfood[], int opprice[], int optntax[], int counter)
{
    cls2();
    cout << left << setw(30) << "Food" << setw(30) << "Price" << setw(30) << "Tax" << endl;
    for (int i = 0; i <= counter; i++)
    {
        if (optfood[i] != "")
        {
            cout << left << setw(30) << optfood[i] << setw(30) << opprice[i] << setw(30) << optntax[i] << endl;
        }
    }

    getch();
}
////////////////////////////////////////////////////////////////

///////////////////////////////changes to food menu/////////////////////////
string changestofoodmenu()
{
    changestofoodmenuheader();
    setcolor(7);
    string option;
    gotoxy(73, 18);
    getline(cin, option);
    return option;
}
//////////////////////////////////////////////////////////////

////////////adingfood////////////////////
void addfoodmenu()
{
    cls();
    setcolor(7);
    gotoxy(51, 11);
    cout << "Enter food name: ";
    gotoxy(51, 12);
    cout << "Enter food price: ";
    gotoxy(51, 13);
    cout << "Enter food tax: ";
}
void addfood(string food1[], int priceadmin[], int &counter, int taxadmin[], fstream &data)

{
    int num = 0;
    int num1 = 0;
    string food_admin;
    string price_admin;
    string tax_admin;
    addfoodmenu();
    int x = 0;
    do
    {
        gotoxy(70, 11);
        getline(cin, food_admin);
        x++;
        if (x == 1 && food_admin.empty())
        {
            gotoxy(70, 11);
            cout << "If u press enter 3 times u will be back to menu";
            getch();
            gotoxy(70, 11);
            cout << "                                               ";
        }
    } while (food_admin.empty() && x < 3);
    if (x == 3)
    {
        return;
    }
    for (int i = 0; i <= counter; i++)
    {
        if (food_admin == food1[i])
        {
            food_admin = "0";
            gotoxy(51, 14);
            cout << "Invalid input: food name is already taken.";
            getch();
            return;
        }
    }

    do
    {
        gotoxy(70, 12);
        getline(cin, price_admin);
    } while (price_admin.empty());
    if (price_admin.find_first_not_of("0123456789") == std::string::npos)
    {
        num = stoi(price_admin);
    }
    else
    {
        gotoxy(51, 14);
        cout << "invalid input";
        getch();
        return;
    }

    do
    {
        gotoxy(70, 13);
        getline(cin, tax_admin);
    } while (tax_admin.empty());
    if (tax_admin.find_first_not_of("0123456789") == std::string::npos)
    {
        num1 = stoi(tax_admin);
    }
    else
    {
        gotoxy(51, 14);
        cout << "invalid input";
        getch();
        return;
    }
    counter++;
    food1[counter] = food_admin;
    priceadmin[counter] = num;
    taxadmin[counter] = num1;

    gotoxy(51, 14);
    cout << "Food added successfully.";
    getch();
}
/////////////////////////////////////////////////////////////

//////////////////removefood//////////////////////////////
void removefood(
    string food1[],
    int priceadmin[],
    int &counter,
    int taxadmin[])
{
    string food;
    cls();
    int x = 0;
    gotoxy(51, 11);
    cout << "Enter food name: ";
    do
    {
        gotoxy(70, 11);
        getline(cin, food);
        x++;
        if (x == 1 && food.empty())
        {
            gotoxy(70, 11);
            cout << "If u press enter 3 times u will be back to menu";
            getch();
            gotoxy(70, 11);
            cout << "                                                   ";
        }
    } while (food.empty() && x < 3);
    if (x == 3)
    {
        return;
    }
    for (int i = 0; i <= counter; i++)
    {
        if (food == food1[i])
        {
            for (int j = i; j < counter; j++)
            {
                food1[j] = food1[j + 1];
                priceadmin[j] = priceadmin[j + 1];
                taxadmin[j] = taxadmin[j + 1];
            }
            food1[counter] = "0";
            priceadmin[counter] = 0;
            taxadmin[counter] = 0;
            gotoxy(51, 12);
            cout << "Food removed successfully.";
            getch();
            counter--;
            return;
        }
    }
}
////////////////////////////////////////////////////////
///////////////////////////update price///////////////////////

void updateprice(string food2[], int price_admin[], int counter)
{
    cls();
    gotoxy(51, 11);
    cout << "Enter food name: ";
    string food;
    string price1_admin;
    int x = 0;
    do
    {
        gotoxy(70, 11);
        getline(cin, food);
        x++;
        if (x == 1 && food.empty())
        {
            gotoxy(70, 11);
            cout << "If u press enter 3 times u will be back to menu";
            getch();
            gotoxy(70, 11);
            cout << "                                                   ";
        }
    } while (food.empty() && x < 3);
    if (x == 3)
    {
        return;
    }
    for (int i = 0; i <= counter; i++)
    {
        if (food == food2[i])
        {
            gotoxy(51, 12);
            cout << "Enter new price: ";
            getline(cin, price1_admin);
            if (price1_admin.find_first_not_of("0123456789") == std::string::npos)
            {
                int num = stoi(price1_admin);
                price_admin[i] = num;
            }
            else
            {
                gotoxy(51, 13);
                cout << "invalid input";
                getch();
            }
            gotoxy(51, 13);
            cout << "Price updated successfully.";
            getch();
        }
    }
}
////////////////////////////////////////////////////////////////

/////////update tax/////////////////////////////

void updatetax(string food3[], int tax3_admin[], int counter)
{
    cls();
    gotoxy(51, 11);
    cout << "Enter food name: ";

    string food;
    string tax1_admin;
    int x = 0;
    do
    {
        gotoxy(70, 11);
        getline(cin, food);
        x++;
        if (x == 1 && food.empty())
        {
            gotoxy(70, 11);
            cout << "If u press enter 3 times u will be back to menu";
            getch();
            gotoxy(70, 11);
            cout << "                                                   ";
        }
    } while (food.empty() && x < 3);
    if (x == 3)
    {
        return;
    }
    for (int i = 0; i <= counter; i++)
    {
        if (food == food3[i])
        {
            gotoxy(51, 12);
            cout << "Enter new tax: ";
            getline(cin, tax1_admin);
            if (tax1_admin.find_first_not_of("0123456789") == std::string::npos)
            {
                int num = stoi(tax1_admin);
                tax3_admin[i] = num;
            }
            else
            {
                gotoxy(51, 13);
                cout << "invalid input";
                getch();
            }
            gotoxy(51, 13);
            cout << "Tax updated successfully.";
            Sleep(5000);
            return;
        }
    }
}
////////////////////////////////////////////////

//////////////view requests for job///////////////////////////////////
void reqforjob(string employeename[], string employeenumber[], string employeespecial[], string employeeage[], string employeeid[], string employeeaddress[],
               string employeeemail[], int employee)
{
    cls2();
    gotoxy(0, 10);
    cout << left << setw(30) << "Employe" << setw(30) << "Phone" << setw(30) << "Address" << setw(30) << "Email" << setw(30) << "Speciality" << setw(10) << "Age"
         << "ID" << endl;
    for (int i = 0; i < employee; i++)
    {
        cout << left << setw(30) << employeename[i] << setw(30) << employeenumber[i] << setw(30) << employeeaddress[i] << setw(30) << employeeemail[i] << setw(30) << employeespecial[i] << setw(10) << employeeage[i] << employeeid[i] << endl;
    }
    getch();
}
/////////////////////////////////////////////////

///////////////////accept whose req///////////////////////////////////
void accept(string employeename[], int employee, string employename[], int &appointedemployee,
            string employeenumber[],
            string employeespecial[],
            string employeeage[],
            string employeeid[],
            string employeeaddress[],
            string employeeemail[],
            string employenumber[],
            string employespecial[],
            string employeage[],
            string employeid[],
            string employeaddress[],
            string employeemail[], fstream &employe)
{
    cls();
    gotoxy(51, 11);
    cout << "Enter employe's name: ";
    string employe_name;
    int x = 0;
    do
    {
        gotoxy(75, 11);
        getline(cin, employe_name);
        x++;
        if (x == 1 && employe_name.empty())
        {
            gotoxy(75, 11);
            cout << "If u press enter 3 times u will be back to menu";
            getch();
            gotoxy(75, 11);
            cout << "                                                   ";
        }
    } while (employe_name.empty() && x < 3);
    if (x == 3)
    {
        return;
    }
    for (int i = 0; i <= employee; i++)
    {
        if (employe_name == employeename[i])
        {
            gotoxy(51, 12);

            cout << "Employe accepted successfully.";
            employename[appointedemployee] = employeename[i];
            employenumber[appointedemployee] = employeenumber[i];
            employeaddress[appointedemployee] = employeeaddress[i];
            employeemail[appointedemployee] = employeeemail[i];
            employeid[appointedemployee] = employeeid[i];
            employeage[appointedemployee] = employeeage[i];
            employespecial[appointedemployee] = employeespecial[i];
            for (int j = i; j < employee - 1; j++)
            {
                employeename[j] = employeename[j + 1];
                employeenumber[j] = employeenumber[j + 1];
                employeespecial[j] = employeespecial[j + 1];
                employeeage[j] = employeeage[j + 1];
                employeeid[j] = employeeid[j + 1];
                employeeaddress[j] = employeeaddress[j + 1];
                employeeemail[j] = employeeemail[j + 1];
            }
            employee--;
            for (int i = 0; i < employee; i++)
            {
                employe << employeename[i] << "," << employeenumber[i] << "," << employeespecial[i] << ","
                        << employeeage[i] << "," << employeeid[i] << "," << employeeaddress[i] << ","
                        << employeeemail[i] << "\n";
            }

            getch();
            appointedemployee++;
            return;
        }
    }
}
//////////////////////////////////////////////////////////////////////
////////////employees history/////////////////////////
void employehistory(string employename[], int appointedemployee,
                    string employenumber[],
                    string employespecial[],
                    string employeage[],
                    string employeid[],
                    string employeaddress[],
                    string employeemail[])
{
    cls2();
    gotoxy(0, 10);
    cout << left << setw(30) << "Name" << setw(30) << "Address" << setw(30) << "Number" << setw(30) << "ID" << setw(30) << "Age"
         << setw(30) << "Email"
         << "Speciality" << endl;
    for (int i = 0; i < appointedemployee; i++)
    {
        cout << left << setw(30) << employename[i] << setw(30) << employeaddress[i] << setw(30) << employenumber[i] << setw(30) << employeid[i] << setw(30) << employeage[i] << setw(30) << employeemail[i] << employespecial[i] << endl;
    }
    getch();
}
/////////////check rating///////////////////////////////

void adminratecheck(string customeratings[], string customername[], int customer)
{
    cls2();
    gotoxy(0, 10);
    x = 0;
    y = 11;
    cout << left << setw(30) << "Name" << setw(30) << "Ratings\n";
    for (int i = 0; i < customer; i++)
    {
        gotoxy(x, y);
        cout << left << setw(30) << customername[i] << setw(30) << customeratings[i] << endl;
        y++;
    }

    getch();
}
/////////////////////////////////////////////////////////////
///////////customer history/////////////////////////////////////

void customerhistory(
    string customername[],
    string customernumber[],
    string customerid[],
    string customeraddress[],
    string customeremail[],
    int customer, int customertotal[], string customerequirement[])
{
    cls2();
    gotoxy(0, 10);
    cout << left << setw(30) << "Name" << setw(30) << "customeraddress" << setw(30) << "Number" << setw(30) << "ID" << setw(30) << "Total"
         << setw(30) << "Email"
         << "Food Required but not available" << endl;
    for (int i = 0; i < customer; i++)
    {
        cout << left << setw(30) << customername[i] << setw(30) << customeraddress[i] << setw(30) << customernumber[i] << setw(30) << customerid[i] << setw(30) << customertotal[i] << setw(30) << customeremail[i] << customerequirement[i] << endl;
    }
    getch();
}
//////////////////////////////////////////////////////////////////////
/////////////////////request making of employee//////////////////////////////////

void requestmenu()
{
    cls();
    gotoxy(51, 11);
    cout << "Enter Your Name: ";
    gotoxy(51, 12);
    cout << "Enter Your Age: ";
    gotoxy(51, 13);
    cout << "Enter Your ID: ";
    gotoxy(51, 14);
    cout << "Enter Your Address: ";
    gotoxy(51, 15);
    cout << "Enter Your Email: ";
    gotoxy(51, 16);
    cout << "Enter Your Speciality: ";
    gotoxy(51, 17);
    cout << "Enter Your Number: ";
}
void request(string employeename[], string employeenumber[], string employeespecial[], string employeeage[], string employeeid[], string employeeaddress[],
             string employeeemail[], int &employee, fstream &employe)
{
cls2();notice();getch();
    requestmenu();
    string name;
    do
    {
        gotoxy(70, 11);
        getline(cin, name);
    } while (name.empty());
    string age;
    do
    {
        gotoxy(70, 12);
        getline(cin, age);
    } while (age.empty());
    string id;
    do
    {
        gotoxy(70, 13);
        getline(cin, id);
    } while (id.empty());
    string address;
    do
    {
        gotoxy(70, 14);
        getline(cin, address);
    } while (address.empty());
    string email;
    do
    {
        gotoxy(72, 15);
        getline(cin, email);
    } while (email.empty());
    string special;
    do
    {
        gotoxy(77, 16);
        getline(cin, special);
    } while (special.empty());
    string number;
    do
    {
        gotoxy(70, 17);
        getline(cin, number);
    } while (number.empty());
    if (number.find_first_not_of("0123456789") == std::string::npos &&
    age.find_first_not_of("0123456789") == std::string::npos &&
    id.find_first_not_of("0123456789") == std::string::npos &&
    email.find("@gmail.com") != std::string::npos &&
    age.length() == 2 &&
    number.length() == 11 &&
    id.length() == 13 &&
    (address.find("lahore") == std::string::npos ||
     address.find("karachi") == std::string::npos ||
     address.find("multan") == std::string::npos ||
     address.find("islamabad") == std::string::npos))

 {
        employeenumber[employee] = number;
        employeeage[employee] = age;
        employeeid[employee] = id;
        employeeaddress[employee] = address;
        employeeemail[employee] = email;
        employeespecial[employee] = special;
        employeename[employee] = name;
        employe << employeename[employee] << "," << employeenumber[employee] << "," << employeespecial[employee] << "," << employeeage[employee] << "," << employeeid[employee] << "," << employeeaddress[employee] << "," << employeeemail[employee] << endl;

        employee++;
        gotoxy(51, 18);
        cout << "Request sent successfully.";
        getch();
        return;
    }
    else
    {
        gotoxy(51, 18);
        cout << "invalid input";
        getch();

        return;
    }
}

//////////////////deletereuest//////////////////////////
void delreq(string employeename[], string employeenumber[], string employeespecial[], string employeeage[], string employeeid[], string employeeaddress[],
            string employeeemail[], int &employee, fstream &employe)
{
    cls();

    string nm;

    gotoxy(51, 11);
    cout << "Enter your name: ";
    do
    {
        getline(cin, nm);
    } while (nm.empty());
    for (int i = 0; i <= employee; i++)
    {
        if (nm == employeename[i])
        {
            for (int j = i; j <= employee - 1; j++)
            {
                employeename[j] = employeename[j + 1];
                employeenumber[j] = employeenumber[j + 1];
                employeespecial[j] = employeespecial[j + 1];
                employeeage[j] = employeeage[j + 1];
                employeeid[j] = employeeid[j + 1];
                employeeaddress[j] = employeeaddress[j + 1];
                employeeemail[j] = employeeemail[j + 1];
            }
            --employee;
            gotoxy(51, 12);
            cout << "Your request has been delete";
            getch();

            for (int i = 0; i < employee; i++)
            {
                employe << employeename[i] << "," << employeenumber[i] << "," << employeespecial[i] << ","
                        << employeeage[i] << "," << employeeid[i] << "," << employeeaddress[i] << ","
                        << employeeemail[i] << "\n";
            }
            return;
        }
    }
    gotoxy(51, 12);
    cout << "You haven't found";
    getch();
}

///////////////////////////////////////////////////////
/////////////////////////////////checkyouareselectedornot//////////////////
void selectedornot(string employename[100], int appointedemployee)
{
    cls();
    gotoxy(51, 11);
    cout << "Enter your name: ";
    string name;
    do
    {
        getline(cin, name);
    } while (name.empty());
    bool isFound = false;
    for (int i = 0; i <= appointedemployee; i++)
    {
        if (name == employename[i])
        {
            gotoxy(51, 12);
            cout << "You are selected" << endl;
            getch();

            isFound = true;
            break;
        }
    }
    if (!isFound)
    {
        gotoxy(51, 12);
        cout << "You are not selected" << endl;
        getch();
    }
}

/////////////////////////////////////////////////////////////

////////////////////////////menu of food//////////////////////////////
int displayMenu(string food[], int price[], int counter, float total)
{
    string choice = " ";
    cls2();
    gotoxy(80, 30);
    cout << "Total: " << total << endl;
    gotoxy(0, 6);
    for (int i = 0; i <= counter; i++)
    {
        if (food[i] != " " && price[i] != 0)
        {
            cout << left << setw(2) << i + 1 << ". " << left << setw(30) << food[i] << "RS " << price[i] << "\n";
        }
    }
    cout << "(0) Back\n";
    cout << "Enter your choice: ";
    do
    {
        getline(cin, choice);
    } while (choice.empty());
    if (choice.find_first_not_of("0123456789") == std::string::npos)
    {
        // Convert the string to an integer
        int num = stoi(choice);
        // Check if the number is between 0 and 100
        if (num >= 0 && num <= counter)
        {
            return num;
        }
        else
        {
            cout << "Invalid input; please re-enter.\n";
            getch();
        }
    }
    else
    {
        cout << "Invalid input; please re-enter.\n";
        getch();
    }
}

/////////////////////////////////////////////////////////////////
void updateCart(string food[], int price[], int tax[], float &total, int quantity[], int &cart, int i, string optfood[], int optprice[], int opttax[])
{

    food[cart] = optfood[i - 1];
    price[cart] = optprice[i - 1];
    tax[cart] = opttax[i - 1];
    string choice = "";

    cout << "Enter quantity: ";
    do
    {
        getline(cin, choice);
    } while (choice.empty());
    if (choice.find_first_not_of("0123456789") == std::string::npos)
    {
        int num = stoi(choice);
        quantity[cart] = num;
    }
    else
    {
        cout << "Invalid input; please re-enter.\n";
        Sleep(1000);
    }
    total = total + (price[cart] + tax[cart]) * quantity[cart];
    cart++;
}

////////////////////////////cart/////////////////////////////////////
void cart_(string food[], int tax[], int price[], int quantity[], int cart, float total)
{
    cls2();

    string choice = "";
    gotoxy(80, 30);
    cout << "Total: " << total << endl;
    gotoxy(0, 12);
    cout << left << setw(2) << "{} " << left << setw(30) << "Food" << left << setw(30) << "Price" << left << setw(30) << "Tax"
         << "Quantity"
         << "\n";

    for (int i = 0; i < cart; i++)
    {
        cout << left << setw(2) << i + 1 << ". " << left << setw(30) << food[i] << "RS " << left << setw(30) << price[i] << left << setw(30) << tax[i] << quantity[i] << "\n";
    }
    getch();
}
////////////////////////////////////////////////////////////////////

///////////////rating///////////////////////////////////////
void rating_(string customerrating[], int customer)
{
    cls();
    gotoxy(51, 11);
    cout << "How much u wanna rate this app? \n";
    gotoxy(51, 12);
    cout << "Enter 1-10: ";
    string choice = "";
    do
    {
        gotoxy(51, 13);
        getline(cin, choice);
    } while (choice.empty());
    if (choice.find_first_not_of("0123456789") == std::string::npos)
    {

        int num = stoi(choice);
        if (num >= 0 && num <= 10)
        {
            customerrating[customer] = num;
        }
        else
        {
            gotoxy(51, 14);
            cout << "Invalid input\n";
            getch();
        }
    }
    gotoxy(51, 14);
    if (choice == "1")
    {
        customerrating[customer] = "1";
        cout << "very Bad\n";
    }
    if (choice == "2")
    {
        customerrating[customer] = "2";
        cout << "less Bad\n";
    }
    if (choice == "3")
    {
        customerrating[customer] = "3";
        cout << "Bad\n";
    }
    if (choice == "4")
    {
        customerrating[customer] = "4";
        cout << "Just Ok\n";
    }
    if (choice == "5")
    {
        customerrating[customer] = "5";
        cout << "Normal..\n";
    }
    if (choice == "6")
    {
        customerrating[customer] = "6";
        cout << "Good\n";
    }
    if (choice == "7")
    {
        customerrating[customer] = "7";
        cout << "less good";
    }
    if (choice == "8")
    {
        customerrating[customer] = "8";
        cout << "Very good\n";
    }
    if (choice == "9")
    {
        customerrating[customer] = "9";
        cout << "Excellent\n";
    }
    if (choice == "10")
    {
        customerrating[customer] = "10";
        cout << "Fantastic\n";
    }
    gotoxy(51, 15);
    cout << "Thank u for review\n";
    getch();
}

////////////////////////////////////////////////////
///////////////////order//////////////////////////////////////////
void ordermenu()
{
    cls();

    gotoxy(51, 11);
    cout << "Enter your name: \n";
    gotoxy(51, 12);

    cout << "Enter your address: ";
    gotoxy(51, 13);
    cout << "Enter your email: ";
    gotoxy(51, 14);
    cout << "Enter your phone number: ";
    gotoxy(51, 15);
    cout << "Enter your id number: ";
}
string order(string customername[],
             string customernumber[],
             string customerid[],
             string customeraddress[],
             string customeremail[],
             int customer, int customertotal[], float total, string customerequirement[])
{cls2();notice();getch();
    ordermenu();

    string name;
    do
    {
        gotoxy(70, 11);
        getline(cin, name);
    } while (name.empty());

    string address;
    do
    {
        gotoxy(70, 12);
        getline(cin, address);
    } while (address.empty() && (address.find("lahore") == std::string::npos || address.find("karachi") == std::string::npos || address.find("multan") == std::string::npos || address.find("islamabad") == std::string::npos));

    string email;
    do
    {
        gotoxy(71, 13);
        getline(cin, email);
    } while (email.empty() && email.find("@gmail.com") != std::string::npos);

    string number;
    do
    {
        gotoxy(75, 14);
        getline(cin, number);
    } while (number.empty() && number.find_first_not_of("0123456789") != std::string::npos || number.length() != 11);

    string id;
    do
    {
        gotoxy(75, 15);
        getline(cin, id);
    } while (id.empty() && id.find_first_not_of("0123456789") != std::string::npos || id.length() != 13);
    if (number.find_first_not_of("0123456789") == std::string::npos && id.find_first_not_of("0123456789") == std::string::npos && email.find_first_not_of("@gmail.com") == std::string::npos && number.length() == 11 && id.length() == 13 && (address.find_first_not_of("lahore") == std::string::npos || address.find_first_not_of("karachi") == std::string::npos || address.find_first_not_of("multan") == std::string::npos || address.find_first_not_of("islamabad") == std::string::npos))
    {
        customername[customer] = name;
        customernumber[customer] = number;
        customerid[customer] = id;
        customeraddress[customer] = address;
        customeremail[customer] = email;
    }
    else
    {
        return "0";
    }
    gotoxy(51, 17);
    cout << "Total: " << total << endl;
    customertotal[customer] = total;

    gotoxy(51, 18);
    cout << "Are you sure?(y/n)";
    string choice = "";
    gotoxy(71, 18);
    cin >> choice;

    if (choice == "y" || choice == "n")
    {
        return choice;
    }
}

///////////////////////////////////////////////////////////////////////
void remove(string food[], int tax[], int price[], int quantity[], int &cart, float &total)
{
    cls();
    gotoxy(51, 11);
    cout << "What You Wanna Remove?\n";
    string choice;
    do
    {
        gotoxy(75, 11);
        getline(cin, choice);
    } while (choice.empty());
    for (int i = 0; i <= cart; i++)
    {
        if (choice == food[i])
        {
            total = total - ((price[i] + tax[i]) * quantity[i]);

            for (int j = i; j < cart - 1; j++)
            {
                food[j] = food[j + 1];
                price[j] = price[j + 1];
                tax[j] = tax[j + 1];
                quantity[j] = quantity[j + 1];
            }
            cart--;
            gotoxy(75, 12);
            cout << "Your food has been successfully removed";
            getch();
            break;
        }
    }
}

////////////////////////////////////////////////////////////////////////
/////////////view account///////////////////////////
void viewacc(
    string user,
    string pass)
{
    cls();
    gotoxy(51, 11);
    cout << "Name: " << user << "\n";
    gotoxy(51, 12);
    cout << "Password: " << pass << "\n";
    gotoxy(51, 13);
    cout << "Press any key to continue";
    getch();
}

////////////border//////////////////////////////////////////////////
void border()
{
    gotoxy(45, 4);
    cout << "__________________________________________________________________________________________________";
    gotoxy(45, 5);
    cout << "||.____________________________________________________________________________________________.||\n";
    gotoxy(45, 6);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 7);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 8);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 9);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 10);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 11);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 12);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 13);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 14);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 15);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 16);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 17);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 18);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 19);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 20);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 21);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 22);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 23);
    cout << "||.                                                                                            .||\n";
    gotoxy(45, 24);
    cout << "||.                                                                                            .||\n";

    gotoxy(45, 25);

    cout << "||.____________________________________________________________________________________________.||\n";
    gotoxy(45, 26);
    cout << "|________________________________________________________________________________________________|\n";
}

void signinupexit()
{

    cls();

    setcolor(8);
    cout << endl;

    gotoxy(55, 11);
    cout << "'|     ,---.|,---.,   .    |,   .\n";
    gotoxy(55, 12);
    cout << " |     `---.||  _.|\\  |    ||\\  |\n";
    gotoxy(55, 13);
    cout << " |         |||   || \\ |    || \\ |\n";
    gotoxy(55, 14);
    cout << " `o    `---'``---'`  `'    ``  `'\n";

    setcolor(7);

    gotoxy(95, 11);
    cout << ",--.     ,---.|,---.,   .    .   .,---.\n";
    gotoxy(95, 12);
    cout << ",--'     `---.||  _.|\\  |    |   ||---'\n";
    gotoxy(95, 13);
    cout << "|            |||   || \\ |    |   ||    \n";
    gotoxy(95, 14);
    cout << "`--'o    `---'``---'`  `'    `---'`    \n";

    setcolor(8);

    gotoxy(55, 16);
    cout << ",--.     ,---.    o|    \n";
    gotoxy(55, 17);
    cout << "  -|     |--- .  ,.|--- \n";
    gotoxy(55, 18);
    cout << "   |     |     >< ||    \n";
    gotoxy(55, 19);
    cout << "`--'o    `---''  ```---'\n";

    setcolor(15);

    gotoxy(55, 20);
    cout << "  _                                                  ";
    gotoxy(55, 21);
    cout << " /_`_  /_  _ _/_     _     _  _  _ _/_._  _   _  _   .";
    gotoxy(55, 22);
    cout << "._//_'//_'/_ /   /_//_//_//  /_//_// //_// / / //_/ .";
    gotoxy(55, 23);
    cout << "                 _/            /                     ";
}

void signupheader()
{

    cls();
    gotoxy(51, 30);
    setcolor(5);
    cout << "                                         ,--.                      ,-.----.    " << endl;
    gotoxy(51, 31);
    setcolor(5);
    cout << "  .--.--.      ,---,  ,----..          ,--.'|                      \\    /  \\   " << endl;
    gotoxy(51, 32);
    setcolor(5);
    cout << " /  /    '. ,`--.' | /   /   \\     ,--,:  : |                 ,--, |   :    \\  " << endl;
    gotoxy(51, 33);
    setcolor(5);
    cout << "|  :  /`. / |   :  :|   :     : ,`--.'`|  ' :               ,'_ /| |   |  .\\ : " << endl;
    gotoxy(51, 34);
    setcolor(0);
    cout << ";  |  |--`  :   |  '.   |  ;. / |   :  :  | |          .--. |  | : .   :  |: | " << endl;
    gotoxy(51, 35);
    setcolor(7);
    cout << "|  :  ;_    |   :  |.   ; /--`  :   |   \\ | :        ,'_ /| :  . | |   |   \\ : " << endl;
    gotoxy(51, 36);
    setcolor(8);
    cout << " \\  \\    `. '   '  ;;   | ;  __ |   : '  '; |        |  ' | |  . . |   : .   / " << endl;
    gotoxy(51, 37);
    setcolor(8);
    cout << "  `----.   \\|   |  ||   : |.' .''   ' ;.    ;        |  | ' |  | | ;   | |`-'  " << endl;
    gotoxy(51, 38);
    setcolor(7);
    cout << "  __ \\  \\  |'   :  ;.   | '_.' :|   | | \\   |        :  | | :  ' ; |   | ;     " << endl;
    gotoxy(51, 39);
    setcolor(0);
    cout << " /  /`--'  /|   |  ''   ; : \\  |'   : |  ; .'        |  ; ' |  | ' :   ' |     " << endl;
    gotoxy(51, 40);
    setcolor(5);
    cout << "'--'.     / '   :  |'   | '/  .'|   | '`--'          :  | : ;  ; | :   : :     " << endl;
    gotoxy(51, 41);
    setcolor(5);
    cout << "  `--'---'  ;   |.' |   :    /  '   : |              '  :  `--'   \\|   | :     " << endl;
    gotoxy(51, 42);
    setcolor(5);
    cout << "            '---'    \\   \\ .'   ;   |.'              :  ,      .-./`---'.|     " << endl;
    gotoxy(51, 43);
    setcolor(5);
    cout << "                      `---`     '---'                 `--`----'      `---`     " << endl;
}

void signinheader()
{
    cls();

    gotoxy(51, 30);
    setcolor(8);
    cout << "  .--.--.      ,---,  ,----..          ,--.'|           ,---,       ,--.'| " << endl;
    gotoxy(51, 31);
    setcolor(8);
    cout << " /  /    '. ,`--.' | /   /   \\     ,--,:  : |        ,`--.' |   ,--,:  : | " << endl;
    gotoxy(51, 31);
    setcolor(8);
    cout << "|  :  /`. / |   :  :|   :     : ,`--.'`|  ' :        |   :  :,`--.'`|  ' : " << endl;
    gotoxy(51, 32);
    setcolor(8);
    cout << ";  |  |--`  :   |  '.   |  ;. / |   :  :  | |        :   |  '|   :  :  | | " << endl;
    gotoxy(51, 33);
    setcolor(9);
    cout << "|  :  ;_    |   :  |.   ; /--`  :   |   \\ | :        |   :  |:   |   \\ | : " << endl;
    gotoxy(51, 34);
    setcolor(9);
    cout << " \\  \\    `. '   '  ;;   | ;  __ |   : '  '; |        '   '  ;|   : '  '; | " << endl;
    gotoxy(51, 35);
    setcolor(9);
    cout << "  `----.   \\|   |  ||   : |.' .''   ' ;.    ;        |   |  |'   ' ;.    ; " << endl;
    gotoxy(51, 36);
    setcolor(9);
    cout << "  __ \\  \\  |'   :  ;.   | '_.' :|   | | \\   |        '   :  ;|   | | \\   | " << endl;
    gotoxy(51, 37);
    setcolor(9);
    cout << " /  /`--'  /|   |  ''   ; : \\  |'   : |  ; .'        |   |  ''   : |  ; .' " << endl;
    gotoxy(51, 38);
    setcolor(8);
    cout << "'--'.     / '   :  |'   | '/  .'|   | '`--'          '   :  ||   | '`--'   " << endl;
    gotoxy(51, 39);
    setcolor(8);
    cout << "  `--'---'  ;   |.' |   :    /  '   : |              ;   |.' '   : |       " << endl;
    gotoxy(51, 40);
    setcolor(8);
    cout << "            '---'    \\   \\ .'   ;   |.'              '---'   ;   |.'       " << endl;
    gotoxy(51, 41);
    setcolor(8);
    cout << "                      `---`     '---'                        '---'         " << endl;
    gotoxy(51, 42);
}
void adminmenuheader()
{
    cls();
    setcolor(3);

    gotoxy(50, 11);
    cout << "1.Add food\n";
    Sleep(70);
    gotoxy(50, 12);
    cout << "2.Remove food\n";
    Sleep(70);
    gotoxy(50, 13);
    cout << "3.View food\n";
    Sleep(70);
    gotoxy(50, 14);
    cout << "4.Update price\n";
    Sleep(70);
    gotoxy(50, 15);
    cout << "5.Update tax\n";
    Sleep(70);
    setcolor(8);
    gotoxy(50, 16);
    cout << "6.View requests for job\n";
    Sleep(70);
    gotoxy(50, 17);
    cout << "7.Accept request\n";
    Sleep(70);
    gotoxy(50, 18);
    cout << "8.Customer History\n";
    Sleep(70);
    gotoxy(50, 19);
    cout << "9.Check Ratings\n";
    Sleep(70);

    gotoxy(50, 20);
    cout << "10.Check Employees\n";
    Sleep(70);
    gotoxy(50, 21);
    cout << "11.Check Requirements\n";
    Sleep(70);
    setcolor(1);
    gotoxy(50, 22);
    cout << "(0)Back\n";
    Sleep(70);
    gotoxy(50, 23);
    cout << "Enter your option no: ";
    setcolor(1);
    cout << endl;
    cout << endl;
    cout << endl;

    cout << R"(     
                                             _..._       .-'''-.                                         
                                 .---.    .-'_..._''.   '   _    \                                       
                   __.....__     |   |  .' .'      '.\/   /` '.   \  __  __   ___         __.....__      
       _     _ .-''         '.   |   | / .'          .   |     \  ' |  |/  `.'   `.   .-''         '.    
 /\    \\   ///     .-''"'-.  `. |   |. '            |   '      |  '|   .-.  .-.   ' /     .-''"'-.  `.  
 `\\  //\\ ///     /________\   \|   || |            \    \     / / |  |  |  |  |  |/     /________\   \ 
   \`//  \'/ |                  ||   || |             `.   ` ..' /  |  |  |  |  |  ||                  | 
    \|   |/  \    .-------------'|   |. '                '-...-'`   |  |  |  |  |  |\    .-------------' 
     '        \    '-.____...---.|   | \ '.          .              |  |  |  |  |  | \    '-.____...---. 
               `.             .' |   |  '. `._____.-'/              |__|  |__|  |__|  `.             .'  
                 `''-...... -'   '---'    `-.______ /                                   `''-...... -'    
                                                   `                                                     
                                                                                                         
)";

    Sleep(70);
    setcolor(14);
    setcolor(3);

    gotoxy(105, 30);
    cout << "          _______                                      \n";
    gotoxy(105, 31);
    cout << "          \\  ___ `'.    __  __   ___   .--.   _..._    \n";
    gotoxy(105, 32);
    cout << "           ' |--.\\  \\  |  |/  `.'   `. |__| .'     '.  \n";
    gotoxy(105, 33);
    cout << "           | |    \\  ' |   .-.  .-.   '.--..   .-.   . \n";
    gotoxy(105, 34);
    cout << "    __     | |     |  '|  |  |  |  |  ||  ||  '   '  | \n";
    gotoxy(105, 35);
    cout << " .:--.'.   | |     |  ||  |  |  |  |  ||  ||  |   |  | \n";
    gotoxy(105, 36);
    cout << "/ |   \\ |  | |     ' .'|  |  |  |  |  ||  ||  |   |  | \n";
    gotoxy(105, 37);
    cout << "`' __ | |  | |___.' /' |  |  |  |  |  ||  ||  |   |  |  \n";
    gotoxy(105, 38);
    cout << " .'.''| | /_______.'/  |__|  |__|  |__||__||  |   |  |  \n";
    gotoxy(105, 39);
    cout << "/ /   | |_\\_______|/                       |  |   |  |  \n";
    gotoxy(105, 40);
    cout << "\\ \\._,\\ '/                                 |  |   |  |  \n";
    gotoxy(105, 41);
    cout << " `--'  `'                                  '--'   '--'  \n";
}
void changestofoodmenuheader()
{
    cls();
    setcolor(8);
    gotoxy(50, 11);
    cout << "Choose in which catagory of food you wanna do changes...\n";
    Sleep(70);
    gotoxy(50, 12);
    cout << "1.Asian\n";
    Sleep(70);
    gotoxy(50, 13);
    cout << "2.Japanese\n";
    Sleep(70);
    gotoxy(50, 14);
    cout << "3.Italian\n";
    Sleep(70);
    gotoxy(50, 15);
    cout << "4.French\n";
    Sleep(70);
    gotoxy(50, 16);
    cout << "5.Thai\n";
    Sleep(70);
    gotoxy(50, 17);
    cout << "6.Back\n";
    Sleep(70);

    gotoxy(50, 18);
    cout << "Enter your option no: ";
}

void border2()
{
    setcolor(8);
    cout << "\n";
    cout << "\n";
    cout << "________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
    cout << "........................................................................................................................................................................................................................................................\n";
    cout << "________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
    cout << "\n";
    cout << "\n";
}
void cls2()
{
    system("cls");

    border2();
    name();
}

void usermenuheader()
{
    cls();
    setcolor(1);

    gotoxy(51, 10);
    cout << "What you wanna order today:)" << endl;
    Sleep(100);
    gotoxy(51, 11);
    cout << "1-Asian" << endl;
    Sleep(100);
    gotoxy(51, 12);
    cout << "2-Japanese\n";
    Sleep(100);
    gotoxy(51, 13);
    cout << "3-Italian\n";
    Sleep(100);
    gotoxy(51, 14);
    cout << "4-French\n";
    Sleep(100);
    gotoxy(51, 15);
    cout << "5-Thai\n";
    Sleep(100);
    gotoxy(51, 16);
    setcolor(3);
    cout << "6-Cart\n";
    Sleep(100);
    gotoxy(51, 17);
    cout << "7-Remove order\n";
    Sleep(100);
    gotoxy(51, 18);
    cout << "8-Ratings\n";
    Sleep(100);
    gotoxy(51, 19);
    cout << "9.Order now\n ";
    Sleep(100);
    gotoxy(51, 20);
    cout << "10.Check your Account\n";
    Sleep(100);
    gotoxy(51, 21);
    cout << "11-Edit you account\n";
    Sleep(100);
    gotoxy(51, 22);
    cout << "12-Requirements\n";
    Sleep(100);
    gotoxy(51, 23);
    cout << "13-Back\n";
    Sleep(100);
gotoxy(60, 23);
    cout << "14-ChatBox\n";
    gotoxy(51, 24);
    cout << "Enter your order option no... ";
    cout << endl;
    setcolor(1);
    cout << R"(
        
                                             _..._       .-'''-.                                         
                                 .---.    .-'_..._''.   '   _    \                                       
                   __.....__     |   |  .' .'      '.\/   /` '.   \  __  __   ___         __.....__      
       _     _ .-''         '.   |   | / .'          .   |     \  ' |  |/  `.'   `.   .-''         '.    
 /\    \\   ///     .-''"'-.  `. |   |. '            |   '      |  '|   .-.  .-.   ' /     .-''"'-.  `.  
 `\\  //\\ ///     /________\   \|   || |            \    \     / / |  |  |  |  |  |/     /________\   \ 
   \`//  \'/ |                  ||   || |             `.   ` ..' /  |  |  |  |  |  ||                  | 
    \|   |/  \    .-------------'|   |. '                '-...-'`   |  |  |  |  |  |\    .-------------' 
     '        \    '-.____...---.|   | \ '.          .              |  |  |  |  |  | \    '-.____...---. 
               `.             .' |   |  '. `._____.-'/              |__|  |__|  |__|  `.             .'  
                 `''-...... -'   '---'    `-.______ /                                   `''-...... -'    
                                                   `                                                     
                                                                                                         

    )";
    Sleep(70);
    setcolor(14);
    setcolor(3);

    gotoxy(101, 30);
    cout << "                              / /\\                                             \n";
    gotoxy(101, 31);
    cout << "            .--.             / /  '__  __   ___         ,.--.  __  __   ___    \n";
    gotoxy(101, 32);
    cout << "            |__|            / /  /|  |/  `.'   `.      //    \\|  |/  `.'   `.  \n";
    gotoxy(101, 33);
    cout << "            .--..-,.--.    / /  / |   .-.  .-.   '     \\    ||   .-.  .-.   ' \n";
    gotoxy(101, 34);
    cout << "            |  ||  .-. |  / /  /  |  |  |  |  |  |    __`'-)/ |  |  |  |  |  | \n";
    gotoxy(101, 35);
    cout << "        _   |  || |  | | / /  /   |  |  |  |  |  | .:--.'./'  |  |  |  |  |  | \n";
    gotoxy(101, 36);
    cout << "      .' |  |  || |  | |/ /  /    |  |  |  |  |  |/ |   \\ |   |  |  |  |  |  | \n";
    gotoxy(101, 37);
    cout << "     .   | /|  || |  '-/ /  /     |  |  |  |  |  |`' __ | |   |  |  |  |  |  | \n";
    gotoxy(101, 38);
    cout << "   .'.'| |//|__|| |   / /  /      |__|  |__|  |__| .'.''| |   |__|  |__|  |__| \n";
    gotoxy(101, 39);
    cout << " .'.'.-'  /     | |  /_/  /                       / /   | |_                   \n";
    gotoxy(101, 40);
    cout << " .'   \\_.'      |_|  \\ \\ /                        \\ \\._,\\ '/                   \n";
    gotoxy(101, 41);
    cout << "                      --'                          `--'  `''                    \n";
}

void cake()
{
    setcolor(6);
    cout << R"( *                                             
                                          * 
               * 
                             * 
                                                       * 
    * 
                                             * 
        * 
                      *             * 
                                                * 
 *                     )";
    setcolor(7);
    cout << R"(    $             $  )";
    setcolor(6);
    cout << R"(                     * 
          *            )";
    setcolor(7);
    cout << R"(  #  #           #  #
                        & )";
    setcolor(6);
    cout << R"(( )";
    setcolor(7);
    cout << R"( &         &)";
    setcolor(6);
    cout << R"())";
    setcolor(7);
    cout << R"(   &
             )";
    setcolor(6);
    cout << R"(     )      (*))";
    setcolor(7);
    cout << R"( %,,.....,,)";
    setcolor(6);
    cout << R"((*) )";
    setcolor(7);
    cout << R"(% )";
    setcolor(6);
    cout << R"(   ( 
      )";
    setcolor(6);
    cout << R"(   *  )";
    setcolor(6);
    cout << R"(     (*)  )";
    setcolor(7);
    cout << R"(    |             | # )";
    setcolor(6);
    cout << R"(   (*) )";
    setcolor(7);
    cout << R"(
                  |     %|~|           |~|  %   |       )";
    setcolor(6);
    cout << R"(   *  )";
    setcolor(7);
    cout << R"(
                 |~|  %  | |.^.      .^| |   % |~| 
            #''# | | &   | |:*:)    (:*| |    &| | #''#
            #  #,| |a@@@@| |@@@@@@@@@@@| |@@@@a| |.#  #
           .,a@@@| |@@@@@| |@@@@@@@@@@@| |@@@@@| |@@@@a,. 
         ,a@@@@@@| |@@@@@@@@@@@@.@@@@@@@@@@@@@@| |@@@@@@@a, 
        a@@@@@@@@@@@@@@@@@@@@@' . `@@@@@@@@@@@@@@@@@@@@@@@@a 
        ;`@@@@@@@@@@@@@@@@@@'   .   `@@@@@@@@@@@@@@@@@@@@@'; 
        ;@@@`@@@@@@@@@@@@@'     .     `@@@@@@@@@@@@@@@@'@@@; 
        ;@@@;,.aaaaaaaaaa       .       aaaaa,,aaaaaaa,;@@@; 
        ;;@;;;;@@@@@@@@;@      @.@      ;@@@;;;@@@@@@;;;;@@; 
        ;;;;;;;@@@@;@@;;@    @@ . @@    ;;@;;;;@@;@@@;;;;;;; 
        ;;;;;;;;@@;;;;;;;  @@   .   @@  ;;;;;;;;;;;@@;;;;@;; 
        ;;;;;;;;;;;;;;;;;@@     .     @@;;;;;;;;;;;;;;;;@@a; 
    ,%%%;;;;;;;;@;;;;;;;;       .       ;;;;;;;;;;;;;;;;@@;;%%%, 
 .%%%%%%;;;;;;;a@;;;;;;;;     ,%%%,     ;;;;;;;;;;;;;;;;;;;;%%%%%%, 
.%%%%%%%;;;;;;;@@;;;;;;;;   ,%%%%%%%,   ;;;;;;;;;;;;;;;;;;;;%%%%%%%, 
%%%%%%%%`;;;;;;;;;;;;;;;;  %%%%%%%%%%%  ;;;;;;;;;;;;;;;;;;;'%%%%%%%% 
%%%%%%%%%%%%`;;;;;;;;;;;;,%%%%%%%%%%%%%,;;;;;;;;;;;;;;;'%%%%%%%%%%%% 
`%%%%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%%%%%%' 
  `%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%' 
      `%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%' 
             """"""""""""""`,,,,,,,,,'""""""""""""""""" 
                            `%%%%%%%' 
                             `%%%%%' 
                               %%% 
                              %%%%% 
                           .,%%%%%%%,. 
                      ,%%%%%%%%%%%%%%%%%%%, 
          )";
}
void cakecandles()
{
    setcolor(6);
    cout << R"(                *                              
                                          * 
                   *
                                   * 
                                                       
             *              *
                                              *
        *   )";
    setcolor(7);
    cout << R"(              $              $
                        #  #           #  #)";
    setcolor(6);
    cout << R"(
          *          *)";
    setcolor(7);
    cout << R"( &    &         &    &  )";
    setcolor(6);
    cout << R"(          * )";
    setcolor(7);
    cout << R"(
                        %   %,,.....,,%   %   )";
    setcolor(6);
    cout << R"( * )";
    setcolor(7);
    cout << R"(                   
              )";
    setcolor(8);
    cout << R"( .')";
    setcolor(8);
    cout << R"(        #  *         *  # 
         )";
    setcolor(8);
    cout << R"(    ,'/ )";
    setcolor(7);
    cout << R"(      % )";
    setcolor(6);
    cout << R"( ) )";
    setcolor(7);
    cout << R"(         )";
    setcolor(6);
    cout << R"(   ( )";
    setcolor(7);
    cout << R"( %        
          )";
    setcolor(8);
    cout << R"(  / / )";
    setcolor(6);
    cout << R"(  ( )";
    setcolor(7);
    cout << R"( % )";
    setcolor(6);
    cout << R"(  (*))";
    setcolor(7);
    cout << R"(.^.     .^.)";
    setcolor(6);
    cout << R"((*) )";
    setcolor(7);
    cout << R"( %  )";
    setcolor(6);
    cout << R"( ) )";
    setcolor(8);
    cout << R"((*))";
    setcolor(7);
    cout << R"(
         )";
    setcolor(8);
    cout << R"(  (_/  )";
    setcolor(6);
    cout << R"( (*))";
    setcolor(7);
    cout << R"(&     |(:*:)   (:*:)|    &)";
    setcolor(6);
    cout << R"( (*))";
    setcolor(7);
    cout << R"(.)";
    setcolor(8);
    cout << R"(\\)";
    setcolor(7);
    cout << R"(.
      )";
    setcolor(6);
    cout << R"(  * )";
    setcolor(7);
    cout << R"(.)";
    setcolor(8);
    cout << R"(//)";
    setcolor(7);
    cout << R"(:,   | &   '|~|''   ^   ''|~|'  &  | % )";
    setcolor(8);
    cout << R"(\\)";
    setcolor(7);
    cout << R"(    )";
    setcolor(6);
    cout << R"(  *  )";
    setcolor(7);
    cout << R"(
          )";
    setcolor(8);
    cout << R"(//)";
    setcolor(7);
    cout << R"(# :, |~| &   | |  )";
    cout << "\033[1;31m";
    cout << R"( ;'''; )";
    cout << "\033[0m";
    cout << R"(  | |  &  |~|% .)";
    setcolor(8);
    cout << R"('')";
    setcolor(7);
    cout << R"(
         '' '# :,| |  &  | |   )";
    cout << "\033[1;31m";
    cout << R"(:   : )";
    cout << "\033[0m";
    cout << R"(  | | &   | |  #
             '# ;| |a@@@@| |@@@@@@@@@@@| |@@@@a| |.# 
           .,a@@@| |@@@@@| |@@@@@@@@@@@| |@@@@@| |@@@@a,. 
         ,a@@@@@@| |@@@@@@@@@@@@.@@@@@@@@@@@@@@| |@@@@@@@a, 
        a@@@@@@@@@@@@@@@@@@@@@' . `@@@@@@@@@@@@@@@@@@@@@@@@a 
        ;`@@@@@@@@@@@@@@@@@@'   .   `@@@@@@@@@@@@@@@@@@@@@'; 
        ;@@@`@@@@@@@@@@@@@'     .     `@@@@@@@@@@@@@@@@'@@@; 
        ;@@@;,.aaaaaaaaaa       .       aaaaa,,aaaaaaa,;@@@; 
        ;;@;;;;@@@@@@@@;@      @.@      ;@@@;;;@@@@@@;;;;@@; 
        ;;;;;;;@@@@;@@;;@    @@ . @@    ;;@;;;;@@;@@@;;;;;;; 
        ;;;;;;;;@@;;;;;;;  @@   .   @@  ;;;;;;;;;;;@@;;;;@;; 
        ;;;;;;;;;;;;;;;;;@@     .     @@;;;;;;;;;;;;;;;;@@a; 
    ,%%%;;;;;;;;@;;;;;;;;       .       ;;;;;;;;;;;;;;;;@@;;%%%, 
 .%%%%%%;;;;;;;a@;;;;;;;;     ,%%%,     ;;;;;;;;;;;;;;;;;;;;%%%%%%, 
.%%%%%%%;;;;;;;@@;;;;;;;;   ,%%%%%%%,   ;;;;;;;;;;;;;;;;;;;;%%%%%%%, 
%%%%%%%%`;;;;;;;;;;;;;;;;  %%%%%%%%%%%  ;;;;;;;;;;;;;;;;;;;'%%%%%%%% 
%%%%%%%%%%%%`;;;;;;;;;;;;,%%%%%%%%%%%%%,;;;;;;;;;;;;;;;'%%%%%%%%%%%% 
`%%%%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%,,,,,,,%%%%%%%%%%%%%%%%%%%%' 
  `%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%' 
      `%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%' 
             """"""""""""""`,,,,,,,,,'""""""""""""""""" 
                            `%%%%%%%' 
                             `%%%%%' 
                               %%% 
                              %%%%% 
                           .,%%%%%%%,. 
                      ,%%%%%%%%%%%%%%%%%%%, 
          )";
}
void erasecake()
{
    x = 1;
    y = 1;
    for (int i = 0; i < 45; i++)
    {
        gotoxy(x, y);
        cout << "                                                                 ";
        y++;
    }
}
/////////////////////////////////////////////////////////////////////
void thanks()
{
    setcolor(8);
    gotoxy(70, 20);
    cout << "sdSS_SSSSSSbs   .S    S.    .S_SSSs     .S_sSSs     .S    S.          .S S.     sSSs_sSSs     .S       S. \n";
    gotoxy(70, 21);
    cout << "YSSS~S%SSSSSP  .SS    SS.  .SS~SSSSS   .SS~YS%%b   .SS    SS.        .SS SS.   d%%SP~YS%%b   .SS       SS.\n";
    gotoxy(70, 22);
    cout << "     S%S       S%S    S%S  S%S   SSSS  S%S   `S%b  S%S    S&S        S%S S%S  d%S'     `S%b  S%S       S%S\n";
    gotoxy(70, 23);
    cout << "     S%S       S%S    S%S  S%S    S%S  S%S    S%S  S%S    d*S        S%S S%S  S%S       S%S  S%S       S%S\n";
    gotoxy(70, 24);
    cout << "     S&S       S%S SSSS%S  S%S SSSS%S  S%S    S&S  S&S   .S*S        S%S S%S  S&S       S&S  S&S       S&S\n";
    setcolor(4);
    gotoxy(70, 25);
    cout << "     S&S       S&S  SSS&S  S&S  SSS%S  S&S    S&S  S&S_sdSSS          SS SS   S&S       S&S  S&S       S&S\n";
    gotoxy(70, 26);
    cout << "     S&S       S&S    S&S  S&S    S&S  S&S    S&S  S&S~YSSY%b          S S    S&S       S&S  S&S       S&S\n";
    gotoxy(70, 27);
    cout << "     S&S       S&S    S&S  S&S    S&S  S&S    S&S  S&S    `S%          SSS    S&S       S&S  S&S       S&S\n";
    gotoxy(70, 28);
    cout << "     S*S       S*S    S*S  S*S    S&S  S*S    S*S  S*S     S%          S*S    S*b       d*S  S*b       d*S\n";
    setcolor(8);
    gotoxy(70, 29);
    cout << "     S*S       S*S    S*S  S*S    S*S  S*S    S*S  S*S     S&          S*S    S*S.     .S*S  S*S.     .S*S\n";
    gotoxy(70, 30);
    cout << "     S*S       S*S    S*S  S*S    S*S  S*S    S*S  S*S     S&          S*S     SSSbs_sdSSS    SSSbs_sdSSS \n";
    gotoxy(70, 31);
    cout << "     S*S       SSS    S*S  SSS    S*S  S*S    SSS  S*S     SS          S*S      YSSP~YSSY      YSSP~YSSY  \n";
    gotoxy(70, 32);
    cout << "     SP               SP          SP   SP          SP                  SP                                 \n";
    gotoxy(70, 33);
    cout << "     Y                Y           Y    Y           Y                   Y                                  \n";
}
void animationcake()
{
    system("cls");
    thanks();
    gotoxy(1, 1);
    for (int i = 0; i < 20; i++)
    {
        gotoxy(1, 1);
        erasecake();
        gotoxy(1, 1);
        cake();
        Sleep(400);
        gotoxy(1, 1);
        erasecake();
        gotoxy(1, 1);
        cakecandles();
        Sleep(400);
    }
}

void prints(int x, int y)
{
    cout << "\033[0;93m";
    gotoxy(x, y);
    cout << " .*." << endl;
    gotoxy(x, y + 1);
    cout << "*****" << endl;
    gotoxy(x, y + 2);
    cout << " '*'" << endl;
    cout << " \033[0m";
}
void erase(int x, int y)
{
    for (int i = 1; 1 >= 50; i++)
    {
        gotoxy(5, y);
        cout << "                                                                                               ";
        y++;
    }
}
void erases(int x, int y)
{
    gotoxy(x, y);
    cout << "     ";
    gotoxy(x, y + 1);
    cout << "     ";
    gotoxy(x, y + 2);
    cout << "     ";
}
void print(int x, int y)
{
    erase(x, y);
    gotoxy(x, y);
    cout << R"(                                                             
                        :***#%%%%%##**-                                 
                     =*%#==:.      :==*%*=                    ,,,,,,,,,,,,,,,                  
           -#%%%%#-                         .%              .'. HAAPY EATING,
        *%%*-.....                            ..    ..=%  .'   ''''''''''''''
       :#:  :::.                               .:::::: .#   
       :# -:-:.                                 .:-:::::*    
       :# ::-:.                                  .::::.++ 
        % :::                                     .::-.*+ 
        %.:--.                                    :-:- %    
        :% -.                                      :::+*  
        .#.:                                       .: #  
         #+                                         .=%    
         %.        .:=.             .:=.              #-
         %.       '-%, .           '-%, .             #=   
         %:      ' .#  .          ' .#  .             *=  
         %        '-%#'            '-%#'  )";
    cout << "\033[1;31m";
    cout << R"(..)";
    cout << "\033[0m";
    cout << R"(          *=
         %     )";
    cout << "\033[1;31m";
    cout << R"(..          %=-#+         ....)";
    cout << "\033[0m";
    cout << R"(         #- 
         %    )";
    cout << "\033[1;31m";
    cout << R"(....         %   =         ....)";
    cout << "\033[0m";
    cout << R"(         #:   
         %    )";
    cout << "\033[1;31m";
    cout << R"(....         #   -          ..)";
    cout << "\033[0m";
    cout << R"(          %:
         %.    )";
    cout << "\033[1;31m";
    cout << R"(..          =   -                     )";
    cout << "\033[0m";
    cout << R"(=#:
         %:                )";
    cout << "\033[1;31m";
    cout << R"( =-* )";
    cout << "\033[0m";
    cout << R"(    =:               %-:
         %:.                      .#:                %--
         %.                       #%                %=:
          #..                   :+:                #--
           #-.            .=+++#.%                %%*
             #*=:.      :+        *:            =%*
                #%%@@%  #-        .%.         *%*  
                   %:   %         :#.     ##%%:
                  ++    #=%#%%%%%%#%         #.
                 #     -#          %         #+ 
                ++     .#=        %#+         #. 
               ,#-     :%-       ..%*         ++
               :#        :#.     **            %.
               #     .   +#.     %    /    ,'  .#
               #  ',  ', :#.     +   '    .    .%  
               %    *   *=#:     #- '   ##     .#'
               =     =   *#+     %.'   =#      .*'
               *.     '-=+*:    =# %%*-        .*'
               '.        .*:    =%             .*'
               %.         %*--:-+*             .*'
              *#                              .*'
             =#                              ..'
             #:          *%%%%#%%%          ..' 
             %          *#      %.         ..*
             %        .%*      =*         ..
             =*      #%-       =*       ...    
             :*#***#%-        ::#     ...*   
                               :+#+::-+*                                                   
    )";
}
void drink(int x, int y)
{

    erase(x, y);
    gotoxy(x, y);
    cout << R"(                                   
                        :***#%%%%%##**-                                 
                     =*%#==:.      :==*%*=                    ,,,,,,,,,,,,,,,                  
           -#%%%%#-                         .%              .'. HAAPY EATING,
        *%%*-.....                            ..    ..=%  .'   ''''''''''''''
       :#:  :::.                               .:::::: .#                
       :# -:-:.                                 .:-:::::*    
       :# ::-:.                                  .::::.++ 
        % :::                                     .::-.*+      
        %.:--.                                    :-:- %        
        :% -.                                      :::+*  
        .#.:                                       .: #  
         #+                                         .=%    
         %.         ,                   :=            #-
         %.         .%                 -%             #=   
         %:          -%-             .#*              *=    
         %         %'                  -% )";
    cout << "\033[1;31m";
    cout << R"(..)";
    cout << "\033[0m";
    cout << R"(          *=
         %     )";
    cout << "\033[1;31m";
    cout << R"(..           =-#          ....)";
    cout << "\033[0m";
    cout << R"(         #- 
         %    )";
    cout << "\033[1;31m";
    cout << R"(....         %   =         ....)";
    cout << "\033[0m";
    cout << R"(         #:   
         %    )";
    cout << "\033[1;31m";
    cout << R"(....         #   -          ..)";
    cout << "\033[0m";
    cout << R"(          %:
         %.    )";
    cout << "\033[1;31m";
    cout << R"(..          =   -                     )";
    cout << "\033[0m";
    cout << R"(=#:
         %:                )";
    cout << "\033[1;31m";
    cout << R"( = )";
    cout << "\033[0m";
    cout << R"(=:                     %-:
         %:.                  .#:                    %--
         %.                    #%                   %=:
          #..                  :+:                 #--
           #-.            .=+++#.%                %%*
             #*=:.      :+        *:            =%*    
                #%%@@%  #-        .%.         *%*  
                   %:   %         :#.     ##%%:
                  ++    #=%#%%%%%%#%         #.  
                 #     -#          %         #+         
                ++     .#=        %#+         #.         
               ,#-     :%-       ..%*         ++
               :#        :#.     **            %.
               #     .   +#.     %    /    ,'  .#
               #  ',  ', :#.     +   '    .    .%  
               %    *   *=#:     #- '   ##     .#'
               =     =   *#+     %.'   =#      .*'
               *.     '-=+*:    =# %%*-        .*'
               '.        .*:    =%             .*'
               %.         %*--:-+*             .*'
              *#                              .*'
             =#                              ..'
             #:          *%%%%#%%%          ..' 
             %          *#      %.         ..*
             %        .%*      =*         ..
             =*      #%-       =*       ...                
             :*#***#%-        ::#     ...*                     
                               :+#+::-+*                                                   
    )";
}

/////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////mainNAME///////////////////////////////////////////////////////////////////////
void mainname()
{
    system("cls");

    cout << "\033[0m";
    gotoxy(65, 10);
    cout << "    \033[0;93m,                               ;\033[0m   ";
    gotoxy(65, 11);
    cout << "    Et           :           :      ED. ";
    gotoxy(65, 12);
    setcolor(8);
    cout << "    E#t         t#,         t#,     E#Wi ";
    gotoxy(65, 13);
    cout << "    E##t       ;##W.       ;##W.    E###G.                        t              i              i              i  ";
    gotoxy(65, 14);
    cout << "    E#W#t     :#L:WE      :#L:WE    E#fD#W;                       Ej            LE             LE             LE              ..";
    gotoxy(65, 15);
    cout << "    E#tfL.   .KG  ,#D    .KG  ,#D   E#t t##L           t      .DD.E#,          L#E            L#E            L#E             ;W,";
    gotoxy(65, 16);
    cout << "    E#t      EE    ;#f   EE    ;#f  E#t  .E#K,         EK:   ,WK. E#t         G#W.           G#W.           G#W.            j##,";
    gotoxy(65, 17);
    setcolor(7);
    cout << " \033[1;31m,ffW#Dffj. f#.     t#i f#.     t#i E#t    j##f        E#t  i#D   E#t        D#K.           D#K.           D#K.            G###,";
    gotoxy(65, 18);
    cout << "  ;LW#ELLLf.:#G     GK  :#G     GK  E#t    :E#K:       E#t j#f    E#t       E#K.           E#K.           E#K.           :E####,";
    gotoxy(65, 19);
    cout << "    E#t      ;#L   LW.   ;#L   LW.  E#t   t##L         E#tL#i     E#t     .E#E.          .E#E.          .E#E.           ;W#DG##,";
    gotoxy(65, 20);
    cout << "    E#t       t#f f#:     t#f f#:   E#t .D#W;          E#WW,      E#t    .K#E           .K#E           .K#E            j###DW##,\033[0m";
    gotoxy(65, 21);
    cout << "    E#t        f#D#;       f#D#;    E#tiW#G.           E#K:       E#t   .K#D           .K#D           .K#D            G##i,,G##,";
    gotoxy(65, 22);
    cout << "    E#t         G#t         G#t     E#K##i             ED.        E#t  .W#G           .W#G           .W#G           :K#K:   L##,";
    gotoxy(65, 23);
    cout << "    E#t          t           t      E##D.              t          E#t :W##########Wt :W##########Wt :W##########Wt ;##D.    L##,";
    gotoxy(65, 24);
    cout << "    \033[0;93m;#t                             E#t                           ,;. :,,,,,,,,,,,,,.:,,,,,,,,,,,,,.:,,,,,,,,,,,,,.,,,      .,, ";
    gotoxy(65, 25);
    cout << "     :;                             L:   \033[0m      ";

    gotoxy(50, 28);
    cout << "                                                        _  _  _ ___    _";
    gotoxy(50, 29);
    cout << "                                                    |  / \\|_|| \\ | |\\|/__";
    gotoxy(50, 30);
    cout << "                                                    |__\\_/| ||_/_|_| |\\_|  ";

    int x = 101;
    int y = 31;
    for (int i = 1; i < 24; i++)
    {

        if (i <= 8)
        {
            gotoxy(x, y);
            cout << "\033[1;31m|\033[0m";
            x++;
        }
        else if (i > 8 && i <= 16)
        {
            gotoxy(x, y);
            setcolor(8);
            cout << "|";
            x++;
            setcolor(7);
        }

        else if (i > 16)
        {
            gotoxy(x, y);
            cout << "\033[0;93m|\033[0m";
            x++;
        }

        print(0, 0);
        erases(57, 18);
        erases(3, 13);
        erases(8, 31);
        prints(57, 19);
        prints(2, 10);
        prints(7, 30);
        Sleep(200);

        drink(0, 0);
        erases(57, 19);
        erases(2, 10);
        erases(7, 30);
        prints(57, 18);
        prints(3, 13);
        prints(8, 31);
        Sleep(200);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////for customer account editing///////////////////////////
void accountedit(string username[], string password[], string customername[],
                 string customernumber[],
                 string customerid[],
                 string customeraddress[],
                 string customeremail[], int number)
{
    cls();
    gotoxy(51, 11);
    cout << "Enter your name\n";
    gotoxy(51, 12);
    cout << "Enter your password\n";

    string name;

    string pass;
    do
    {
        gotoxy(70, 11);
        getline(cin, name);
    } while (name.empty());
    do
    {
        gotoxy(72, 12);
        getline(cin, pass);
    } while (pass.empty());

    for (int i = 0; i <= number; i++)
    {
        if (name == username[i] && pass == password[i])
        {cls2();notice();getch();
            while (true)
            {
                cls();
                gotoxy(51, 11);
                cout << "1.Username: " << username[i] << endl;
                gotoxy(51, 12);
                cout << "2.Password: " << password[i] << endl;
                gotoxy(51, 13);
                cout << "3.Name: " << customername[i] << endl;
                gotoxy(51, 14);
                cout << "4.Address: " << customeraddress[i] << endl;
                gotoxy(51, 15);
                cout << "5.Id" << customerid[i] << endl;
                gotoxy(51, 16);
                cout << "6.Email" << customeremail[i] << endl;
                gotoxy(51, 17);
                cout << "7.Number" << customernumber[i] << endl;
                gotoxy(51, 18);
                cout << "8.Back\n";
                gotoxy(51, 19);
                cout << "Select the option no. you wanna edit: ";
                string optno;
                gotoxy(90, 19);
                do{getline(cin , optno);}while(optno.empty());
                bool valid = true;
                if (optno == "1")
                {
                    cls();
                    gotoxy(51, 11);
                    cout << "Enter new username: ";
                    gotoxy(70, 11);
                    cin >> optno;
                    for (int i = 0; i <= number; i++)
                    {
                        if (optno == username[i])
                        {
                            gotoxy(51, 12);
                            cout << "This username is already taken..";
                            getch();
                            valid = false;
                            break;
                        }
                    }
                    if (valid == true)
                    {
                        username[i] = optno;
                        gotoxy(51, 12);
                        cout << "Your username has been updated\n";
                        getch();
                    }
                }
                if (optno == "2")
                {
                    cls();
                    gotoxy(51, 11);
                    cout << "Enter new password: ";
                    gotoxy(70, 11);
                    cin >> optno;
                    for (int i = 0; i <= number; i++)
                    {
                        if (optno == password[i])
                        {
                            gotoxy(51, 12);
                            cout << "This password is already taken..";
                            getch();
                            valid = false;
                            break;
                        }
                    }
                    if (optno.length() != 8)
                    {
                        valid = false;
                    }
                    if (valid == true)
                    {
                        password[i] = optno;
                        gotoxy(51, 12);
                        cout << "Your password has been updated\n";
                        getch();
                    }
                }
                else if (optno == "3")
                {
                    cls();
                    gotoxy(51, 11);
                    cout << "Enter new name: ";

                    gotoxy(70, 11);
                    cin >> optno;

                    customername[i] = optno;
                    gotoxy(51, 12);
                    cout << "Your name has been updated\n";
                    getch();
                }
                else if (optno == "4")
                {
                    cls();
                    gotoxy(51, 11);
                    cout << "Enter new address: ";
                    gotoxy(70, 11);
                    cin >> optno;
                    if (optno.find("lahore") == std::string::npos || optno.find("karachi") == std::string::npos || optno.find("multan") == std::string::npos || optno.find("islamabad") == std::string::npos)
                    {

                        customeraddress[i] = optno;
                        gotoxy(51, 12);
                        cout << "Your address has been updated\n";
                        getch();
                    }
                }
                else if (optno == "5")
                {
                    cls();
                    gotoxy(51, 11);
                    cout << "Enter new ID: ";
                    gotoxy(70, 11);
                    cin >> optno;
                    for (int i = 0; i <= number; i++)
                    {
                        if (optno == customerid[i])
                        {
                            gotoxy(51, 12);
                            cout << "Two ids can't be identical..";
                            getch();
                            valid = false;
                            break;
                        }
                    }
                    if (optno.length() != 13)
                    {
                        valid = false;
                    }
                    if (valid == true && optno.find_first_not_of("0123456789") == std::string::npos)
                    {
                        customerid[i] = optno;
                        gotoxy(51, 12);
                        cout << "Your ID has been updated\n";
                        getch();
                    }
                    else
                    {
                        cout << "Invalid Input";
                        getch();
                    }
                }
                else if (optno == "6")
                {
                    cls();
                    gotoxy(51, 11);
                    cout << "Enter new email: ";
                    gotoxy(70, 11);
                    cin >> optno;
                    for (int i = 0; i <= number; i++)
                    {
                        if (optno == customeremail[i])
                        {
                            gotoxy(51, 12);
                            cout << "This email is already taken..";
                            getch();
                            valid = false;
                            break;
                        }
                    }

                    if (valid == true && optno.find("@gmail.com") == std::string::npos)
                    {
                        customeremail[i] = optno;
                        gotoxy(51, 12);
                        cout << "Your email has been updated\n";
                        getch();
                    }
                }
                else if (optno == "7")
                {
                    cls();
                    gotoxy(51, 11);
                    cout << "Enter new number: ";
                    gotoxy(70, 11);
                    cin >> optno;
                    for (int i = 0; i <= number; i++)
                    {
                        if (optno == customernumber[i])
                        {
                            gotoxy(51, 12);
                            cout << "This number is already taken..";
                            getch();
                            valid = false;
                            break;
                        }
                    }
                    if (valid == true && optno.find_first_not_of("0123456789") == std::string::npos && optno.length() == 11)
                    {
                        customernumber[i] = optno;
                        gotoxy(51, 12);
                        cout << "Your number has been updated\n";
                        getch();
                    }
                    else
                    {
                        cout << "Invalid Input";
                        getch();
                    }
                }
                else if (optno == "8")
                {

                    break;
                }
                else
                {
                    cout << "Invalid input";
                }
            }
        }
    }
    return;
}

string getfield(string record, int field)
{
    int commaCount = 0;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void loadDataInArray(int &count, string Uname[], string role[], string Password[])
{
    string record;
    fstream data;
    int idx = 0;
    data.open("villa.txt", ios::in);
    while (getline(data, record))
    {
        Uname[idx] = getfield(record, 0);
        role[idx] = getfield(record, 1);
        Password[idx] = getfield(record, 2);
        idx = idx + 1;
    }
    count = idx;
}

void storeFoodData(int &count, string asianfood[], int asianprice[], int asiantax[], fstream &data)
{

    // Write all initial data to file
    for (int i = 0; i <= count; i++)
    { // Loop through initial data
        data << asianfood[i] << ',' << asianprice[i] << ',' << asiantax[i] << '\n';
    }

    data.close();
}

void loadFoodDataInArray(int &count, string asianfood[], int asianprice[], int asiantax[], fstream &data)
{
    string record;

    int idx = 0;

    while (getline(data, record))
    {
        asianfood[idx] = getfield(record, 0);
        asianprice[idx] = stoi(getfield(record, 1));
        asiantax[idx] = stoi(getfield(record, 2));
        idx = idx + 1;
    }
    count = idx;
}

void loadEmployeeDataInArray(int &employee, string employeename[], string employeenumber[], string employeespecial[], string employeeage[], string employeeid[], string employeeaddress[], string employeeemail[], fstream &data)
{
    string record;
    int idx = 0;
    data.open("employee.txt", ios::in);
    while (getline(data, record))
    {
        employeename[idx] = getfield(record, 0);
        employeenumber[idx] = getfield(record, 1);
        employeespecial[idx] = getfield(record, 2);
        employeeage[idx] = getfield(record, 3);
        employeeid[idx] = getfield(record, 4);
        employeeaddress[idx] = getfield(record, 5);
        employeeemail[idx] = getfield(record, 6);
        idx = idx + 1;
    }
    employee = idx;
    data.close();
}
void loadEmployeeData(string employename[], string employenumber[], string employespecial[], string employeage[], string employeid[], string employeaddress[], string employeemail[], int &appointedemployee)
{
    string record;
    fstream data;
    data.open("selectemp.txt", ios::in);
    int idx = 0;
    while (getline(data, record))
    {
        employename[idx] = getfield(record, 0);
        employenumber[idx] = getfield(record, 1);
        employespecial[idx] = getfield(record, 2);
        employeage[idx] = getfield(record, 3);
        employeid[idx] = getfield(record, 4);
        employeaddress[idx] = getfield(record, 5);
        employeemail[idx] = getfield(record, 6);
        idx++;
    }
    appointedemployee = idx;
    data.close();
}

void loadCustomerData(string customername[], string customernumber[], string customerid[], string customeraddress[], string customeremail[], int customertotal[], string customerequirement[], string customerratings[], int &customer)
{
    string record;
    fstream data;
    data.open("customer.txt", ios::in);
    int idx = 0;
    while (getline(data, record))
    {
        customername[idx] = getfield(record, 0);
        customernumber[idx] = getfield(record, 1);
        customerid[idx] = getfield(record, 2);
        customeraddress[idx] = getfield(record, 3);
        customeremail[idx] = getfield(record, 4);
        customertotal[idx] = stoi(getfield(record, 5));
        customerratings[customer] = getfield(record, 6);

        idx++;
    }
    customer = idx;
    data.close();
}
void foodrequirement(string customerequirement[], int counterforreq)
{
    cls();
    gotoxy(51, 11);
    cout << "Enter your required food: ";
    gotoxy(77, 11);
    cin >> customerequirement[counterforreq];
    cout << "Thanks for letting us know";
    getch();
    fstream data;
    data.open("requirement.txt", ios::app);
    data << customerequirement[counterforreq]<<endl;

    data.close();
    counterforreq++;
}
void loadCustomereq(string customerequirement[], int counterforreq)
{
    string record;
    fstream data;
    data.open("requirement.txt", ios::in);
    int idx = 0;
    while (getline(data, record))
    {

        customerequirement[idx] = getfield(record, 0);

        idx++;
    }
    counterforreq = idx;
    data.close();
}
void adminfoodcheck(string customerequirement[], int counterforreq)
{
    cls2();
    cout << "customerequirement" << endl;
    for (int i = 0; i <= counterforreq; i++)
    {
        cout << customerequirement[i] << endl;
    }
    getch();
}

void recommendFood(string foodItems[], int price[], int size, int budget)
{
    cout << "Here are some food items within your budget:\n";
    for (int i = 0; i < size; i++)
    {
        if (price[i] <= budget)
        {
            cout << foodItems[i] << " with price: " << price[i] << "\n";
        }
    }
}
void msg()
{system("cls");
    setcolor(3);cout<<R"(
888~~\            888 888           888                  d8                88~\   888~~                          888   Y88b      / ,e, 888 888           
888   |  e88~~8e  888 888   /~~~8e  888-~88e   e88~-_  _d88__    e88~-_  _888__   888___  e88~-_   e88~-_   e88~\888    Y88b    /   "  888 888   /~~~8e  
888 _/  d888  88b 888 888       88b 888  888b d888   i  888     d888   i  888     888    d888   i d888   i d888  888     Y88b  /   888 888 888       88b 
888  \  8888__888 888 888  e88~-888 888  8888 8888   |  888     8888   |  888     888    8888   | 8888   | 8888  888      Y888/    888 888 888  e88~-888 
888   | Y888    , 888 888 C888  888 888  888P Y888   '  888     Y888   '  888     888    Y888   ' Y888   ' Y888  888       Y8/     888 888 888 C888  888 
888__/   "88___/  888 888  "88_-888 888-_88"   "88_-~   "88_/    "88_-~   888     888     "88_-~   "88_-~   "88_/888        Y      888 888 888  "88_-888 
                                                                                                                                                         

)";
setcolor(7);
 gotoxy(0,10);   cout<<"____________________________________________________________________________________________________________________________";
    
    
    
    
   gotoxy(0,50);   cout<<"____________________________________________________________________________________________________________________________";
}
void findCheapestAndMostExpensive(string foodItems[], int size, int price[])
{
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (price[i] < price[minIndex])
        {
            minIndex = i;
        }
        if (price[i] > price[maxIndex])
        {
            maxIndex = i;
        }
    }
    cout << "Cheapest food item: " << foodItems[minIndex] << " with price: " << price[minIndex] << "\n";
    cout << "Most expensive food item: " << foodItems[maxIndex] << " with price: " << price[maxIndex] << "\n";
}
void bella()
{
    system("cls");
for(int x=0;x<15;x++){
    
setcolor(8);gotoxy(70,15);cout<<":::::::::  :::::::::: :::        :::            :::     :::::::::   ::::::::  :::::::::::\n"; 
setcolor(8);gotoxy(70,16);cout<<":+:    :+: :+:        :+:        :+:          :+: :+:   :+:    :+: :+:    :+:     :+:    \n"; 
setcolor(8);gotoxy(70,17);cout<<"+:+    +:+ +:+        +:+        +:+         +:+   +:+  +:+    +:+ +:+    +:+     +:+    \n"; 
setcolor(14);gotoxy(70,18);cout<<"+#++:++#+  +#++:++#   +#+        +#+        +#++:++#++: +#++:++#+  +#+    +:+     +#+    \n"; 
setcolor(12);gotoxy(70,19);cout<<"+#+    +#+ +#+        +#+        +#+        +#+     +#+ +#+    +#+ +#+    +#+     +#+    \n"; 
setcolor(12);gotoxy(70,20);cout<<"#+#    #+# #+#        #+#        #+#        #+#     #+# #+#    #+# #+#    #+#     #+#    \n"; 
setcolor(12);gotoxy(70,21);cout<<"#########  ########## ########## ########## ###     ### #########   ########      ###    \n"; 
   gotoxy(0,1);
    for(int i=0;i<50;i++)
    {
        cout<<"                                                                  \n";
    } gotoxy(0,1);cout<<"\033[1;31m";
    cout<<R"(                                                               
                              .                             
                         .--::=+=:                          
                       .=-.-------+                         
                      --.-:-==..====                        
                     =---++=--++--=*.        ..:::.   )";cout<<"\033[1;33m";cout<<R"(      
                   :-=--:::----:::-==--.)";cout<<"\033[1;31m";cout<<R"(.---=-..--::=:      
              )";cout<<"\033[1;33m";cout<<R"(  .==-=====------==+=-----)";cout<<"\033[1;31m";cout<<R"(+==-:-----::-+.     
            )";cout<<"\033[1;33m";cout<<R"(  .===-:. :..         .:-==---=)";cout<<"\033[1;31m";cout<<R"(==---::==:-: )";cout<<"\033[1;33m";cout<<R"(    
             :++=  )";cout<<"\033[1;37m";cout<<R"(               )";cout<<"\033[1;33m";cout<<R"(       .-==---)";cout<<"\033[1;31m";cout<<R"(+=-==..=*:  )";cout<<"\033[1;33m";cout<<R"(    
            -++.   )";cout<<"\033[1;37m";cout<<R"(   =---      )";cout<<"\033[1;33m";cout<<R"(          .=+=---)";cout<<"\033[1;31m";cout<<R"(+.:+=.=  )";cout<<"\033[1;33m";cout<<R"(     
           .++.  )";cout<<"\033[1;37m";cout<<R"(   .=:+#*#     )";cout<<"\033[1;33m";cout<<R"(            =:+---*)";cout<<"\033[1;31m";cout<<R"(= :+=  )";cout<<"\033[1;33m";cout<<R"(     
           ==-    )";cout<<"\033[1;37m";cout<<R"( + =*+=#         - ::    )";cout<<"\033[1;33m";cout<<R"(   +---*)";cout<<"\033[1;31m";cout<<R"(+=+  )";cout<<"\033[1;33m";cout<<R"(      
           +*     )";cout<<"\033[1;37m";cout<<R"( + +###:        :=:---    )";cout<<"\033[1;33m";cout<<R"(  .+--=)";cout<<"\033[1;31m";cout<<R"(++  )";cout<<"\033[1;33m";cout<<R"(       
           ++  )";cout<<"\033[1;31m";cout<<R"(... )";cout<<"\033[1;37m";cout<<R"( :::-. .-:.   =...  =    )";cout<<"\033[1;33m";cout<<R"(   +---*         
           ++  )";cout<<"\033[1;31m";cout<<R"( ..  )";cout<<"\033[1;37m";cout<<R"(     +:-=.  :::.=:.=     )";cout<<"\033[1;33m";cout<<R"(  =---+         
           ++     )";cout<<"\033[1;31m";cout<<R"(   =.  )";cout<<"\033[1;37m";cout<<R"( :::    =.  --      )";cout<<"\033[1;33m";cout<<R"(  +---+         
      :-::-*#       )";cout<<"\033[1;31m";cout<<R"(  :+=-..        .::.     )";cout<<"\033[1;33m";cout<<R"( -=--+.         
     -:    :#=      )";cout<<"\033[1;31m";cout<<R"(   -#***###-    ....    )";cout<<"\033[1;33m";cout<<R"( :+--==          
     :-    :*#:        )";cout<<"\033[1;31m";cout<<R"(   **               )";cout<<"\033[1;33m";cout<<R"( :+--==           
      .:-==+--*-:..                       ==--+:            
         =----++====+++=--:.            -+-=++--.           
          =--=*====#+==++=--===---:. :-+-=*:    --          
       .-::=-*==. --=+=+- .::-+====+**+++=+      +          
      =:      =-::.-==-:       ==---------+=:..:+=          
     =         =*+-:-++--::     +---------=+=+*=.*.         
     =          *.-=-.:==::=++. -=---=+++*- :*==*.:=        
     =         .++-.-==::---+=  +----*::. :-+==== .+        
     :-        +=.:-=+=-=++-. .=-----*-::-. +. :+:.         
      :-:. ..:*+===-:...   .:==--------   :=..:.            
         ::::   .:::-=++++=----------+.     +               
                        .::--========.      -:              
                                 .:=       .=.              
                                   .=:   ..--               
                                     .-::--                 
                                                            
    )";
    gotoxy(0,1);
    Sleep(300);
    for(int i=0;i<50;i++)
    {
        cout<<"                                                                   \n";
    }

    
gotoxy(0,1);cout<<"\033[1;31m";
    cout<<R"(                                              
             .:---:.               .:----.                  
          .=**##*##*+-           :*#######*=:               
         =*##########*+         =###########*+.             
        :*#############+)";cout<<"\033[0;33m";cout<<R"(.......)";cout<<"\033[1;31m";cout<<R"(=#############*+             
        =##########+=-)";cout<<"\033[0;33m";cout<<R"(:::::::::::-)";cout<<"\033[1;31m";cout<<R"(=*##########*:            
        -#######+-)";cout<<"\033[0;33m";cout<<R"(::::::-------::::::)";cout<<"\033[1;31m";cout<<R"(-+#######*.            
        .*###*=)";cout<<"\033[0;33m";cout<<R"(::::-::..       ...::-:::)";cout<<"\033[1;31m";cout<<R"(=*####+             
         =##=)";cout<<"\033[0;33m";cout<<R"(:::-:.                  :-:::)";cout<<"\033[1;31m";cout<<R"(-##=              
          +)";cout<<"\033[0;33m";cout<<R"(:::-:         )";cout<<"\033[1;37m";cout<<R"(        .--. )";cout<<"\033[1;33m";cout<<R"( .)";cout<<"\033[1;33m";cout<<R"(-:::- )";cout<<"\033[0;33m";cout<<R"(              
          :::-    )";cout<<"\033[1;37m";cout<<R"( .        )";cout<<"\033[1;33m";cout<<R"(             :-::.              
         ::-:   )";cout<<"\033[1;37m";cout<<R"(.::              :-=:.   )";cout<<"\033[1;33m";cout<<R"( .-::. . .        
        .:::                )";cout<<"\033[1;37m";cout<<R"(    -%#@=-:   )";cout<<"\033[1;33m";cout<<R"( :-::.    :        
        ::=     )";cout<<"\033[1;37m";cout<<R"(  :.  :         %*:#* - )";cout<<"\033[1;33m";cout<<R"(    -:=:. ..        
        :.-    )";cout<<"\033[1;37m";cout<<R"(  :     -        =*++: - )";cout<<"\033[1;33m";cout<<R"(    ::=--:.         
        :::     )";cout<<"\033[1;37m";cout<<R"(  .===--         .:..:  )";cout<<"\033[1;33m";cout<<R"(    .-=::::         
        .:-    )";cout<<"\033[1;37m";cout<<R"(  .-.     ......  )";cout<<"\033[1;33m";cout<<R"(           ::=::::.        
         :=            )";cout<<"\033[1;37m";cout<<R"(    -:-   )";cout<<"\033[1;33m";cout<<R"(           -=-:::..        
          :-       )";cout<<"\033[1;31m";cout<<R"(    .         .  )";cout<<"\033[1;33m";cout<<R"(       :=-:::::         
           :-        )";cout<<"\033[1;31m";cout<<R"(  :.------  - )";cout<<"\033[1;33m";cout<<R"(       .+-::::::         
            :-.         )";cout<<"\033[1;31m";cout<<R"( :      .  )";cout<<"\033[1;33m";cout<<R"(      :=-::::.:.         
              :-         )";cout<<"\033[1;31m";cout<<R"( =+++=.   )";cout<<"\033[1;33m";cout<<R"(    .=+:::::::.          
                -:...           ..:::--===:::::.:           
                 -==-=+=--========----=::::::::.            
               .    -:)";cout<<"\033[1;31m";cout<<R"(:  -==)";cout<<"\033[1;33m";cout<<R"(=+=)";cout<<"\033[1;31m";cout<<R"(=-:     -)";cout<<"\033[1;33m";cout<<R"(-::::.              
              .    .=)";cout<<"\033[1;31m";cout<<R"(=    .-=+-:        -)";cout<<"\033[1;33m";cout<<R"(::::               
               :::-)";cout<<"\033[1;31m";cout<<R"(=-:                   =)";cout<<"\033[1;33m";cout<<R"(:::               
              ::::-)";cout<<"\033[1;31m";cout<<R"(:+.                   -)";cout<<"\033[1;33m";cout<<R"(:::               
             .::::-:)";cout<<"\033[1;31m";cout<<R"(=-     ..............-)";cout<<"\033[1;33m";cout<<R"(:::               
             .:::::+--)";cout<<"\033[1;31m";cout<<R"(::..            .:)";cout<<"\033[1;33m";cout<<R"(-::::               
               .::=-:::)";cout<<"\033[1;31m";cout<<R"(--           .:)";cout<<"\033[1;33m";cout<<R"(=-::::-               
                  :::::::)";cout<<"\033[1;31m";cout<<R"(--:.    .:)";cout<<"\033[1;33m";cout<<R"(---::::::-               
                  :::::::::--)";cout<<"\033[1;31m";cout<<R"(-==-)";cout<<"\033[1;33m";cout<<R"(--::::::::::               
                  :-:::::::::::::::::::::::-.               
                   .:-:::::---...:--------:. :              
                .     .::::. :   ........    :              
                .           .     .          :              
                 .        .                ..               
                   .... .            . ....                                      
    )";
   Sleep(300);
   

}
}
void chatbox(string user, string asianfood[],string japanfood[],string italyfood[],string francefood[],string thaifood[],int asianprice[],int japanprice[],int italyprice[],int franceprice[],int thaiprice[],int asiantax[],int japantax[],int francetax[],int thaitax[],int italytax[],int counterforasia,int counterforjapan,int counterforitaly,int counterforfrance,int counterforthai )
{
string branches[] = {
    "Lahore, Johar town Lahore, 9:00 AM - 5:00 PM",
    "Lahore, Wapda town Lahore, 10:00 AM - 6:00 PM",
    "Karachi, Clifton Karachi, 10:00 AM - 8:00 PM",
    "Islamabad, F-6 Islamabad, 9:00 AM - 7:00 PM",
    "Multan, Gulgasht Colony Multan, 11:00 AM - 7:00 PM",
    "Faisalabad, D Ground Faisalabad, 10:00 AM - 6:00 PM",
    "Rawalpindi, Saddar Rawalpindi, 9:00 AM - 5:00 PM",
    "Gujranwala, Model Town Gujranwala, 10:00 AM - 6:00 PM",
    "Peshawar, University Road Peshawar, 9:00 AM - 5:00 PM",
    "Quetta, Jinnah Road Quetta, 10:00 AM - 6:00 PM"
};
bool on=true;
int c=0;
    string age;
    string no1_str, no2_str;
    double no1, no2;
    string question;
 string ans="0";msg();
     gotoxy(0,11); cout<<"Hi ... hope so u r doing good.\n";
     getch();
    while(true){ msg();
    gotoxy(0,12); cout << "Ask me something: ";
    getline(cin, question);

if (question.find("your name") != std::string::npos)
{
    cout << "I'm Bellabot.\n";getch();
}
else if (question.find("your age") != std::string::npos)
{
    cout << "I'm robot so i dont have age.\n";getch();
}
else if (question.find("my age") != std::string::npos)
{string ageStr;if(c<1)
{
    cout << "Sorry but u didnt have told me that plz tell me so next time it would be useful.\n";
    
    cin >> ageStr;
 ans=ageStr;
c++;

// Convert ageStr to an integer
int age = stoi(ageStr);

if (age < 10)
{
    cout << "You are too young\n";
}
else if (age >= 10 && age < 20)
{
    cout << "You are newly young\n";
}
else if (age >= 20 && age < 30)
{
    cout << "You are young\n";
}
else if (age >= 30 && age < 40)
{
    cout << "You are middle-aged\n";
}
else if (age >= 40 && age < 50)
{
    cout << "You are old\n";
}
else if (age >= 50)
{
    cout << "You are very old. Take care of yourself\n";
}
getch();}
else if(c>=1)
{
    cout<<"your age is "<<ans;getch();
}
 cin.ignore();
}
else if (question.find("my name") != std::string::npos)
{
    cout << "Your name is "
         << " which is nyc one\n";getch();
}
else if (question.find("calculate") != std::string::npos)
{
    cout << "What kind of calculation you want?\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cin >> question;
    if (question == "1") // Addition
    {
        cout << "How many numbers do you want to add?\n";
        int numCount;
        cin >> numCount;
        int sum = 0;
        for (int i = 0; i < numCount; i++)
        {
            cout << "Enter number " << i + 1 << ": ";
            int num;
            cin >> num;
            sum += num;
        }
        cout << "The sum is " << sum << "\n";
    }
    else if (question == "2") // Subtraction
    {
        cout << "Enter the first number: ";
        int result;
        cin >> result;
        cout << "How many numbers do you want to subtract from the first number?\n";
        int numCount;
        cin >> numCount;
        for (int i = 0; i < numCount; i++)
        {
            cout << "Enter number " << i + 1 << ": ";
            int num;
            cin >> num;
            result -= num;
        }
        cout << "The result is " << result << "\n";
    }
    else if (question == "3") // Multiplication
    {
        cout << "How many numbers do you want to multiply?\n";
        int numCount;
        cin >> numCount;
        int product = 1;
        for (int i = 0; i < numCount; i++)
        {
            cout << "Enter number " << i + 1 << ": ";
            int num;
            cin >> num;
            product *= num;
        }
        cout << "The product is " << product << "\n";
    }
    else if (question == "4") // Division
    {
        cout << "Enter the dividend: ";
        double dividend;
        cin >> dividend;
        cout << "Enter the divisor: ";
        double divisor;
        cin >> divisor;
        if (divisor != 0)
        {
            double quotient = dividend / divisor;
            cout << "The quotient is " << quotient << "\n";
        }
        else
        {
            cout << "Error: Division by zero is not allowed.\n";
        }
    }getch();
cin.ignore();}

else if (question.find("catagory of foods") != std::string::npos)
{
    cout << "What kind of foods you want? we have\n";
    cout << "1. Asian\n";
    cout << "2. Japanese\n";
    cout << "3. Thai\n";
    cout << "4.Italian\n";
    cout << "5.French\n";
    cin >> question;
    if (question == "1" || question.find("asian") != std::string::npos)
    {
        cout << "Asian foods are known for their diversity and rich flavors.\n They often incorporate a balance of different taste elements, including sweet, sour, salty, bitter, and umami\n";
    }
    else if (question == "2" || question.find("japanese") != std::string::npos)
    {
        cout << "Japanese cuisine, known as Washoku, is highly regarded worldwide for its seasonal ingredients,\n aesthetic presentation, and the balance of flavors\n";
    }
    else if (question == "3" || question.find("thai") != std::string::npos)
    {
        cout << "Thai cuisine is the national cuisine of Thailand and is characterized by lightly prepared dishes with strong aromatic components and a spicy edge\n It is unique because of its use of contrasting flavors1. A typical Thai meal often includes many small dishes1 and is also known for its impeccable presentation.\n";
    }
    else if (question == "4" || question.find("italian") != std::string::npos)
    {
        cout << "Italian cuisine is renowned for its simplicity, with many dishes made up of just a few high-quality ingredients.\n The Mediterranean diet, which is rich in pasta, fish, fruits, and vegetables, forms the basis of Italian cuisine.\n Cheese, cold cuts, and wine are central to Italian cuisine, along with pizza and coffee, especially espresso\n";
    }
    else if (question == "5" || question.find("french") != std::string::npos)
    {
        cout << "French cuisine is renowned for its finesse and simplicity1. It is generally considered the backbone and underpinning of many cuisines across the Western world.\n The influence and recognition of classical French cooking techniques are legendary\n. This status is precisely why French cuisine can be intimidating for a beginner to learn to prepare in their own kitchen.\n";
    }getch();
cin.ignore();}

else if (question.find("time") != std::string::npos)
{
    time_t t = time(nullptr);
    char buffer[100];
    strftime(buffer, sizeof(buffer), "%a %b %d, %Y  %H:%M", localtime(&t));
    cout << buffer << '\n';getch();
}
else if (question.find("weather") != std::string::npos)
{
    cout << "Sorry, I cannot provide real-time weather updates as I don't have access to the internet.\n";getch();
}
else if (question.find("price") != std::string::npos)
{
    cout << "Which food item's price would you like to know about?\n";
    string foodItem;
    cin >> foodItem;
    for (int i = 0; i < counterforasia; i++)
    {
        if (foodItem == asianfood[i])
        {
            cout << "Price: " << asianprice[i];
        }
    }
    for (int i = 0; i < counterforjapan; i++)
    {
        if (foodItem == japanfood[i])
        {
            cout << "Price: " << asianprice[i];
        }
    }
    for (int i = 0; i < counterforitaly; i++)
    {
        if (foodItem == italyfood[i])
        {
            cout << "Price: " << italyprice[i];
        }
    }
    for (int i = 0; i < counterforfrance; i++)
    {
        if (foodItem == francefood[i])
        {
            cout << "Price: " << franceprice[i];
        }
    }
    for (int i = 0; i < counterforthai; i++)
    {
        if (foodItem == thaifood[i])
        {
            cout << "Price: " << thaiprice[i];
        }
    }getch();
cin.ignore();}
else if (question.find("tax") != std::string::npos)
{
    cout << "Which food item's tax would you like to know about?\n";
    string foodItem;
    cin >> foodItem;
    for (int i = 0; i < counterforasia; i++)
    {
        if (foodItem == asianfood[i])
        {
            cout << "Tax: " << asiantax[i];
        }
    }
    for (int i = 0; i < counterforjapan; i++)
    {
        if (foodItem == japanfood[i])
        {
            cout << "Tax: " << japantax[i];
        }
    }
    for (int i = 0; i < counterforitaly; i++)
    {
        if (foodItem == italyfood[i])
        {
            cout << "Tax: " << italytax[i];
        }
    }
    for (int i = 0; i < counterforfrance; i++)
    {
        if (foodItem == francefood[i])
        {
            cout << "Tax: " << francetax[i];
        }
    }
    for (int i = 0; i < counterforthai; i++)
    {
        if (foodItem == thaifood[i])
        {
            cout << "Tax: " << thaitax[i];
        }
    }getch();
 cin.ignore();}
else if (question.find("recommend") != std::string::npos)
{
    cout << "Our famous dishes are: \n";
    cout << "Asian Cuisine:\n"
         << "1.Biryani: A flavorful rice dish with aromatic spices and meat.\n"
         << "2.Butter Chicken: A rich and creamy chicken dish with a tomato-based sauce.\n"
         << "3.Palak Paneer: A vegetarian dish made with paneer (cottage cheese) in a thick paste made from puréed spinach.\n\n"
         << "Japanese Cuisine:\n"
         << "1.Sushi: A traditional Japanese dish made with vinegared rice, usually topped with other ingredients, such as fish or other seafood.\n"
         << "2.Ramen: A noodle soup dish with Chinese origins, it’s become a staple part of Japanese cuisine.\n"
         << "3.Matcha Ice Cream: A sweet and refreshing dessert made from matcha, a type of powdered green tea.\n\n"
         << "Italian Cuisine:\n"
         << "1.Sushi: A traditional Japanese dish made with vinegared rice, usually topped with other ingredients, such as fish or other seafood.\n"
         << "2.Ramen: A noodle soup dish with Chinese origins, it’s become a staple part of Japanese cuisine.\n"
         << "3.Matcha Ice Cream: A sweet and refreshing dessert made from matcha, a type of powdered green tea.\n\n"
         << "French Cuisine:\n"
         << "1.Coq au Vin: A French dish of chicken braised with wine, lardons, mushrooms, and optionally garlic.\n"
         << "2.Ratatouille: A French Provençal stewed vegetable dish, originating in Nice, and sometimes referred to as ratatouille niçoise.\n"
            "3.Crème Brûlée: Also known as burnt cream, it’s a dessert consisting of a rich custard base topped with a layer of hardened caramelized sugar.\n\n"
            "Thai Cuisine:\n"
         << "1.Tom Yum Goong: A type of hot and sour Thai soup, usually cooked with shrimp.\n"
         << "2.Green Curry: A variety of curry in Thai cuisine made with green chillies, coconut milk, and fresh basil leaves.\n";
getch();}
else if (question.find("diet food") != std::string::npos)
{
    cout << "Here are some dishes suitable for a balanced dietary plan:\n";
    cout << "Asian Cuisine:\n"
         << "1. Palak Paneer: A vegetarian dish made with paneer (cottage cheese) in a thick paste made from puréed spinach. It's rich in protein and iron.\n\n"
         << "Japanese Cuisine:\n"
         << "1. Sushi: A traditional Japanese dish made with vinegared rice, usually topped with other ingredients, such as fish or other seafood. It's low in fat and a good source of omega-3 fatty acids.\n"
         << "2. Miso Soup: A light and nutritious soup made from a miso base. It's low in calories and high in probiotics.\n\n"
         << "Italian Cuisine:\n"
         << "1. Caprese Salad: This is a light salad made with fresh tomatoes, mozzarella cheese, and basil. It's low in calories and high in vitamins C and A.\n\n"
         << "French Cuisine:\n"
         << "1. Ratatouille: This is a vegetable stew that's low in calories and high in nutrients.\n\n"
         << "Thai Cuisine:\n"
         << "1. Tom Yum Goong: A type of hot and sour Thai soup, usually cooked with shrimp. It's low in calories and can be a good source of protein.\n"
         << "2. Green Curry: A variety of curry in Thai cuisine made with green chillies, coconut milk, and fresh basil leaves. Opt for versions with lean meat or tofu and lots of vegetables for a balanced meal.\n";
getch();}

else if (question.find("lowest price") != std::string::npos || question.find("highest price") != std::string::npos || question.find("cheapest") != std::string::npos || question.find("low budget") != std::string::npos)
{
    cout << "Asian Cuisine:\n";
    findCheapestAndMostExpensive(asianfood, counterforasia, asianprice);
    cout << "\nJapanese Cuisine:\n";
    findCheapestAndMostExpensive(japanfood, counterforjapan, japanprice);
    cout << "\nItalian Cuisine:\n";
    findCheapestAndMostExpensive(italyfood, counterforitaly, italyprice);
    cout << "\nFrench Cuisine:\n";
    findCheapestAndMostExpensive(francefood, counterforfrance, franceprice);
    cout << "\nThai Cuisine:\n";
    findCheapestAndMostExpensive(thaifood, counterforthai, thaiprice);getch();
 cin.ignore();}
else if (question.find("budget") != std::string::npos || question.find("my budget") != std::string::npos)
{
    cout << "How much money do you have?\n";
    string bud;
    int budget;
    cin >> bud;
    if (bud.find_first_not_of("0123456789") == std::string::npos)
    {
        budget = stoi(bud);
    }

    cout << "Which cuisine would you prefer? Asian, Japanese, Italian, French, or Thai?\n";
    string cuisine;
    cin >> cuisine;

    if (cuisine == "Asian" || cuisine == "asian")
    {
        recommendFood(asianfood, asianprice, counterforasia, budget);
    }
    else if (cuisine == "Japanese" || cuisine == "japanese")
    {
        recommendFood(japanfood, japanprice, counterforjapan, budget);
    }
    else if (cuisine == "Italian" || cuisine == "italian")
    {
        recommendFood(italyfood, italyprice, counterforitaly, budget);
    }
    else if (cuisine == "French" || cuisine == "french")
    {
        recommendFood(francefood, franceprice, counterforfrance, budget);
    }
    else if (cuisine == "Thai" || cuisine == "thai")
    {
        recommendFood(thaifood, thaiprice, counterforthai, budget);
    }
    else
    {
        cout << "Sorry, we don't have any food items from that cuisine within your budget.\n";
    }getch();
 cin.ignore();}


else if (question.find("branch") != std::string::npos)
{
    cout << "Which city branch's information would you like to know about?\n";
    string branchName;
    cin >> branchName;  // Enter branch name with a comma, like this: "Lahore,"
    for (int i = 0; i < 10; i++)  // There are 10 branches in your array
    {
        if (branches[i].find(branchName) != string::npos)  // Compare with the city name
        {
            cout << "Branch Info: " << branches[i] << "\n";
        }
    }getch();
}

else if(question.find("search") != std::string::npos || question.find("available") != std::string::npos)
{
    cout<<"Enter the food name u wanna search: ";
    string foodItem;
    cin>>foodItem;
    bool on=false;
 for (int i = 0; i < counterforasia; i++)
    {
        if (foodItem == asianfood[i])
        {
            cout<<"Available in asian cuisine\n";
        on=true;
        break;}
    }
    for (int i = 0; i < counterforjapan; i++)
    {
        if (foodItem == japanfood[i])
        {
            cout << "Available in japanese cuisine\n ";
        on=true;
        break;}
    }
    for (int i = 0; i < counterforitaly; i++)
    {
        if (foodItem == italyfood[i])
        {
            cout << "Available in italian cuisine\n";
        on=true;
        break;}
    }
    for (int i = 0; i < counterforfrance; i++)
    {
        if (foodItem == francefood[i])
        {
            cout <<"Available in french cuisine\n";
        on=true;
        break;}
    }
    for (int i = 0; i < counterforthai; i++)
    {
        if (foodItem == thaifood[i])
        {
            cout << "Available in thai cuisine\n";
        on=true;
        break;}
    }
    if(on==false)
    {
        cout<<"Not Available kindly let us know if u want it in near future.";
    
    }
getch();
 cin.ignore();}
else if(question.find("bbye") != std::string::npos || question.find("bye") != std::string::npos|| question.find("goodbye") != std::string::npos)
{
    cout<<"Bye byeeeeee";
    getch();
    break;
}
else
{
    cout << "Sorry, I didn't understand that and plz prefer to ask questions about this app ..\n";
    getch();
}
}
}

void notice()
{
    cout<<"Password should contain 8 words\n";
    cout<<"ID should contain 13 no.\n";
    cout<<"Address should contain city name in lowercases\n";
    cout<<"Age shoulld be 2 letter digit\n";
    cout<<"Email should contain @gmail.com";
}