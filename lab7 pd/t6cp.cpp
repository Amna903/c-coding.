#include <iostream>
using namespace std;
string price(string month, int day);
main()
{
    string month;
    int day;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> day;
    string ans = price(month, day);
    cout << ans;
}
string price(string month, int day)
{
    float result, result1;
    float res;
    float aprt;
    if (month == "May" || month == "October")
    {
        if (day <= 7)
        {
            res = 50;
            aprt = 65;
        }
        if (day > 7 && day <= 14)
        {
            res = (50 - (50 * 0.05));
            aprt = 65;
        }
        if (day > 14)
        {
            res = (50 - (50 * 0.30));
            aprt = (65 - (65 * 0.10));
        }
    }
    if (month == "June" || month == "September")

    {
        if (day <= 14)
        {
            res = 75.20;
            aprt = 68.70;
        }
        if (day > 14)
        {
            res = (75.20 - (75.20 * 0.20));
            aprt = (68.70 - (68.70 * 0.10));
        }
    }
    if (month == "July" || month == "August")
    {
        if (day <= 14)
        {
            res = 76;
            aprt = 77;
        }
        if (day > 14)
        {
            res = 76;
            aprt = (77 - (77 * 0.10));
        }
    }
    result = day * res;
    result1 = day * aprt;
    string result2 = "Apartment: " + to_string(result1) + "$.\n" + "Studio: " + to_string(result) + "$.";
    return result2;
}