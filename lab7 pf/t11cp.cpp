#include <iostream>
using namespace std;
string sp(float speed);
main()
{
    float speed;
    cout<<"Enter the speed: ";
    cin>>speed;
string res= sp( speed);
cout<<res;

}
string sp(float speed)
{   string ans;
    if(speed<=10)
    {ans="slow";}
    if(speed>10 && speed<=50)
    {ans="average";}
if(speed>50 && speed <=150)
    {ans="fast";}
    if(speed>150 && speed<=1000)
    {ans="ultra-fast";}
    if(speed>1000)
    {ans="extremely fast";}
return ans;



}