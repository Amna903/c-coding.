#include <iostream>
using namespace std;
float amount(string day, string month, float price);
main()
{
    cout<<"Enter Purchase Day: ";
    string day;
    cin>>day;
    cout<<"Enter Purchase Month: ";
    string month;
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    float price;
    cin>>price;
float finalam= amount( day,  month,  price);
cout<<"Payable Amount after discount: "<<finalam;
}

float amount(string day, string month, float price)
{float dis;
dis=price;
    if(day=="Sunday" && (month=="October" || month=="March" || month=="August"))
    {dis=price-(price*10/100);}
    

return dis;

}