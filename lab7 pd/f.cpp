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
    float price=50;
    float price1=65;
    float price2=75.20;
    float price3=68.70;
    float price4=76;
    float price5=77;
    if (month == "May" || month == "October")
    {
        if (day <= 7)
        {
            res = price;
            aprt = price1;
        }
        if (day > 7 && day <= 14)
        {
            res = (price - (price * 0.05));
            aprt = price1;
        }
        if (day > 14)
        {
            res = (price - (price * 0.30));
            aprt = (price1 - (price1 * 0.10));
        }
    }
    if (month == "June" || month == "September")

    {
        if (day <= 14)
        {
            res = price2;
            aprt = price3;
        }
        if (day > 14)
        {
            res = (price2 - (price2 * 0.20));
            aprt = (price3 - (price3 * 0.10));
        }
    }
    if (month == "July" || month == "August")
    {
        if (day <= 14)
        {
            res = price4;
            aprt = price5;
        }
        if (day > 14)
        {
            res = price4;
            aprt = (price5 - (price5 * 0.10));
        }
    }
    result = day * res;
    result1 = day * aprt;
    string result2 = "Apartment: " + to_string(result1) + "$.\n" + "Studio: " + to_string(result) + "$.";
    return result2;
}