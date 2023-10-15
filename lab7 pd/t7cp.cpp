#include <iostream>
#include <cmath>
using namespace std;
void status(int exam, int arrive);
main()
{
    cout << "Enter Exam Starting Time (hour): ";
    int ehr;
    cin >> ehr;
    cout << "Enter Exam Starting Time (minutes): ";
    int emin;
    cin >> emin;
    cout << "Enter Student hour of arrival: ";
    int ahr;
    cin >> ahr;
    cout << "Enter Student minutes of arrival: ";
    int amin;
    cin >> amin;
    int exam = (ehr * 60) + emin;
    int arrive = (ahr * 60) + amin;
    status(exam, arrive);
}
void status(int exam, int arrive)
{
    int time;
    int hr, min;
    if (exam == arrive)
    {
        cout << "On time";
    }

    if (exam > arrive)
    {
        cout << "Early\n";
        time = exam - arrive;
        if (time < 60)
        {
            cout << time << " minutes before the start";
        }
        if (time > 60)
        {
            hr = time / 60;
            min = time % 60;
            cout << hr << ":" << min << " hours before the start";
        }
    }
    if (exam < arrive)
    {
         cout << "Late\n";
        time = arrive - exam;
        if (time < 60)
        {
            cout << time << " minutes after the start";
        }
        if (time > 60)
        {
            hr = time / 60;
            min = time % 60;
            cout << hr << ":" << min << " after the start";
        }
    }
}