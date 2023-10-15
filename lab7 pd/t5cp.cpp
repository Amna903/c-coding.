#include <iostream>
using namespace std;
float calculate(string fruit, double quantity, string day);
main()
{
    string fruit;
    string day;
    double quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;
    
    
        float result = calculate(fruit, quantity, day);
        if (result!=0.0){cout << result;}
        if (result==0.0){cout << "error";}
    
}
float calculate(string fruit, double quantity, string day)
{
    float res;
    res=0.0;
    if (fruit == "banana")
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        {
            res = quantity * 2.50;
        }
        if (day == "Sunday" || day == "Saturday")
        {
            res = quantity * 2.70;
        }
    }
    else if (fruit == "apple")
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        {
            res = quantity * 1.20;
        }
        if (day == "Sunday" || day == "Saturday")
        {
            res = quantity * 1.25;
        }
    }
    else if (fruit == "orange")
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        {
            res = quantity * 0.85;
        }
        if (day == "Sunday" || day == "Saturday")
        {
            res = quantity * 0.90;
        }
    }
    else if (fruit == "grapefruit")
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        {
            res = quantity * 1.45;
        }
        if (day == "Sunday" || day == "Saturday")
        {
            res = quantity * 1.60;
        }
    }
    else if (fruit == "kiwi")
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        {
            res = quantity * 2.70;
        }
        if (day == "Sunday" || day == "Saturday")
        {
            res = quantity * 3.00;
        }
    }
    else if (fruit == "pineapple")
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        {
            res = quantity * 5.50;
        }
        if (day == "Sunday" || day == "Saturday")
        {
            res = quantity * 5.60;
        }
    }
    else if (fruit == "grapes")
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
        {
            res = quantity * 3.85;
        }
        if (day == "Sunday" || day == "Saturday")
        {
            res = quantity * 4.20;
        }
    }

    return res;
}