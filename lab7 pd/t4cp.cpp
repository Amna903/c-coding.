#include <iostream>

using namespace std;
float dues(char code, char time, float min);
main()
{
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    char code;
    cin >> code;
    char time;
    float min;
    if (code == 'P' || code == 'p')
    {

        cout << "Enter time of the call (D/d for day, N/n for night): ";

        cin >> time;
        cout << "Enter the number of minutes used: ";

        cin >> min;
        cout << "Service Type: Premium" << endl;
        cout << "Total Minutes Used: " << min << " minutes"<< endl;
        float amount = (dues(code, time, min));
        cout << "Amount Due: $" << amount;
    }
    if (code == 'R' || code == 'r')
    {

        cout << "Enter the number of minutes used: ";

        cin >> min;
        cout << "Service Type: Regular" << endl;
        cout << "Total Minutes Used: " << min << " minutes"<<endl;
        float amount = dues(code, time, min);
        cout << "Amount Due: $" << amount;
    }
    if (code != 'P' && code != 'p' && code != 'R' && code != 'r')
    {
        cout << "Error" << endl;
    }
}
float dues(char code, char time, float min)
{
    float due;
    if ((code == 'R' || code == 'r') && min > 50)
    {
        due = 10.00 + (0.20 * (min - 50));
    }
    if ((code == 'P' || code == 'p') && min > 75 && time == 'D')
    {
        due = 25.00 + (0.10 * (min - 75));
    }
    if ((code == 'P' || code == 'p') && min > 100 && time == 'N')
    {
        due = 25.00 + (0.05 * (min - 100));
    }
    if ((code == 'P' || code == 'p') && min <= 100 && time == 'N')
    {
        due = 25.00;
    }
    if ((code == 'P' || code == 'p') && min <= 75 && time == 'D')
    {
        due = 25.00;
    }
    if ((code == 'R' || code == 'r') && min <= 50)
    {
        due = 10.00;
    }
    return due;
}
