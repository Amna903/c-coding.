#include <iostream>
using namespace std;
float ans(float km, string time);
main()
{
    float km;
    cout<<"Enter the number of kilometers: ";
    cin>>km;
    string time;
    cout<<"Enter the period of the day (day/night): ";
    cin>>time;
float res= ans( km,  time);
cout<<"Lowest price for "<<km<<" kilometers: "<<res<<" EUR";

}
float ans(float km, string time)
{float ans;
    if (km >= 20 && km < 100)
    {
        ans = 0.09 * km; 
    }
    else if (km >= 100)
    {
        ans = 0.06 * km; 
    }
    else
    {
        
        if (time == "day")
        {
            ans = 0.70 + 0.79 * km;
        }
        else if (time == "night")
        {
            ans = 0.70 + 0.90 * km;
        }}
return ans;
}