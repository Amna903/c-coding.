#include<iostream>
using namespace std;

void treated(int num);

int main()
{
    cout << "Enter Number of days you visited Hospital: ";
    int num;
    cin >> num;
    treated(num);
    return 0;
}

void treated(int num)
{
    int treat = 0; 
    int untreat = 0;
    int doctor = 7; 
    int day = 0;

    for(int i = 1; i <= num; i++)
    {
        if(i % 3 == 0 && untreat > treat)
        {
            doctor++;
        }

        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> day;

        if(day <= doctor)
        {
            treat += day;
        }
        else
        {
            treat += doctor;
            untreat += day - doctor;
        }
    }

    cout << "Treated patients: " << treat << endl;
    cout << "Untreated patients: " << untreat << endl;
}
