#include <iostream>
using namespace std;
float ans(string type, float row, float clm);
main()
{
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    string type;
    cin>>type;
    cout<<"Enter the number of rows: ";
    float row;
    cin>>row;
    cout<<"Enter the number of columns: ";
    float clm;
    cin>>clm;
float result= ans( type,  row,  clm);
cout<<result;

}
float ans(string type, float row, float clm)
{float res;
    if(type=="Premiere")
{res= 12.00*row*clm;}
    if(type=="Normal")
{res= 7.50*row*clm;}
    if(type =="Discount")
{res= 5.00*row*clm;}
return res;
}