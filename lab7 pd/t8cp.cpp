#include <iostream>
#include <cmath>
using namespace std;
float game(string type, int num, int week);
main()
{
    cout << "Enter year type: ";
    string type;
    cin >> type;
    cout << "Enter number of holidays: ";
    int num;
    cin >> num;
    cout << "Enter number of weekends: ";
    int week;
    cin >> week;
    float result = game(type, num, week);
    cout << result;
}
float game(string type, int num, int week)
{
    float holiday;
    holiday = (2.0 / 3.0) * num;
    float sofia;
    sofia = 48 - week;
    float games;
     games = sofia * 3.0 / 4.0;
    float hometown = week;
    float total = (games + hometown + holiday);
    if (type == "leap")
    {
       total += total * 0.15; 
    }
    return floor(total);
}