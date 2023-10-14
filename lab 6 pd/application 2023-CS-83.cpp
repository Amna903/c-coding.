#include <iostream>
#include<conio.h>
using namespace std;
void name();
int option();
void display(string product,int amount, int quantity, float tax,float total);
float calculation( int amount, int quantity, float tax);
string product1, product2, product3; 
int amount1, amount2, amount3;
float tax1, tax2, tax3;
int quantity1, quantity2, quantity3;
main()

{
    while (true)
{
system("cls");
name();


int opt=option() ;

float total1 ,total2 ,total3 ;

if(opt == 1)
{cout<<"You Have Select Option 1"<<endl;
 cout<<"Name of DESSERT: "<<endl;
    cin>>product1;
    cout<<"Quantity: "<<endl;
    cin>>quantity1;
    cout<<"Amount: "<<endl;
    cin>>amount1;
    cout<<"Tax: "<<endl;
    cin>>tax1;
    total1= calculation(  amount1,  quantity1,  tax1);
}
if(opt == 2)
{cout<<"You Have Select Option 2"<<endl;
cout<<"Name of BEVERAGE: "<<endl;
    cin>>product2;
    cout<<"Quantity: "<<endl;
    
    cin>>quantity2;
    cout<<"Amount: "<<endl;
    cin>>amount2;
    cout<<"Tax: "<<endl;
    cin>>tax2;
    total2= calculation(  amount2,  quantity2,  tax2);
}
if(opt == 3)
 {cout<<"You Have Select Option 3"<<endl;
 cout<<"Name of MEAL: "<<endl;
    cin>>product3;
    cout<<"Quantity: "<<endl;
    
    cin>>quantity3;
    cout<<"Amount: "<<endl;
    cin>>amount3;
    cout<<"Tax: "<<endl;
    cin>>tax3;
    total3= calculation(  amount3,  quantity3,  tax3);}

if(opt == 4)
{cout<<"You Have Select Option 4"<<endl;

int result= total1+total2+total3;
cout<<"Total Payable Amount Is: "<<result<<endl;}

if(opt == 5)
{cout<<"You Have Select Option 5"<<endl;
cout <<"Name\t" << "Price\t" << "Quantity\t" << "Tax\t"  <<
"TotalPerProduct" << endl;
 display( product1, amount1,  quantity1,  tax1, total1);
 display( product2, amount2,  quantity2,  tax2, total2);
 display( product3, amount3,  quantity3,  tax3, total3);
 }

 if (opt == 6)
{
return 0;
}
cout << "Press any Key to Continue: ";
getch();
}
system("pause");
return 0;
}

void name()
{
cout << "************************************************************" << endl;
cout << " *                    _____\\    //                       *" << endl;
cout << "  *                  |FOOD )\\VILLA :)                  *" << endl;
cout << " *                   |  |,'  \\//                         *" << endl;
cout << "************************************************************" << endl;
cout << endl;
    
}

int option()
{
int option;
cout << "Select one of the following option no:-" << endl;
cout << "1. DESSERT: " << endl;
cout << "2. BEVERAGES: " << endl;
cout << "3. MEAL: " << endl;
cout << "4. Calculate Total Amount: " << endl;
cout << "5. View Products Data: "<<endl;
cout << "6. Exit. "<<endl;
cout << "Your Option:";
cin >> option;
return option;
}




float calculation( int amount, int quantity, float tax)
{
float total;
total = amount * quantity;
total = total + total * ((tax / 100));
return total;

}

void display(string product ,int amount, int quantity, float tax,float total)
{
cout<< product << "\t" << amount << "\t" << quantity << "\t\t" << tax << "\t" << total <<endl;

}
