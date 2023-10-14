#include <iostream>
using namespace std;
float fprice(char type, double price);
main()
{
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    char type;
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    double price;
    cin>>price;
    float result;
    result= fprice( type ,  price);
    
    cout<<"The final price of a vehicle of type "<<type<<" after adding this tax is $"<<result<<".";
}

float fprice(char type, double price)
{
    float res;
    if(type == 'M')
    {
        res=price+(price*6/100);
    }
    if(type == 'E')
    {
        res=price+(price*8/100);
    }
    if(type=='S')
    {
        res=price+(price*10/100);
    }
    if(type=='V')
    {
        res=price+(price*12/100);
    }
    if(type=='T')
    {
        res=price+(price*15/100);
    }

return res;


}