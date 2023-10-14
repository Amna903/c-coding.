#include <iostream>
#include <cmath>
using namespace std;
double ans(double budget, string cata, int no);
main()
{
    double budget;
    cout << "Enter the budget: " ;
    cin >> budget;
    cout << "Enter the category (VIP/Normal): " ;
    string cata;
    cin >> cata;
    cout << "Enter the number of people in the group: " ;
    int no;
    cin >> no;
double res= round(ans( budget,  cata,  no)*100)/100;
if (res>=0) {cout << "Yes! You have "<<res<<" leva left.";}
if (res<0) {cout << "Not enought money! You need "<<abs(res)<<" leva.";}
}

double ans(double budget, string cata, int no)
{double bud;
    if(1<=no && no<=4)
    {bud = (budget*0.75);}
    if(4<no && no<=9)
    {bud = (budget*0.60);}
    if(9<no && no<=24)
    {bud = (budget*0.50);}
    if(24<no && no<=49)
    {bud = (budget*0.40);}
    if(49< no)
    {bud = (budget*0.25);}
    double price ;
    if(cata=="VIP"){ price=no*499.99;}
    if(cata=="Normal")
    { price =no*249.99;}

    double rem;
     rem= budget- bud- price;
    
    return rem;


}
