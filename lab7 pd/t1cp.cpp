#include <iostream>
using namespace std;
string game(string temp, string humid);
main()
{
    cout << "Enter temperature (warm or cold): " ;
    string temp;
    cin >> temp;
    cout << "Enter humidity (dry or humid): " ;
    string humid;
    cin >> humid;
    string act = game ( temp, humid );
    cout << "Recommended activity: "<<act ;


}

string game(string temp, string humid)
{
    string activity;
    if ( temp == "warm" && humid == "dry" )
    {activity = "Play tennis"; }
     if ( temp == "warm" && humid == "humid" )
    {activity = "Swim"; }
     if ( temp == "cold" && humid == "dry" )
    {activity = "Play basketball"; }
     if ( temp == "cold" && humid == "humid" )
    {activity = "Watch TV"; }
    return activity;




}