#include <iostream>
using namespace std;

void calculatePrice(int money, int year);

int main()
{
    cout << "Enter money: ";
    int money;
    cin >> money;
    cout << "Enter year: ";
    int year;
    cin >> year;
    calculatePrice(money, year);
    
    return 0;
}

void calculatePrice(int money, int year)
{
    int age = 18; // Ivan's age when he received the inheritance
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            money -= 12000;
        }
        else
        {
            money -= 12000 + 50 * age;
            age++;
        }
    }

    if (money >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << -money << " dollars to survive." << endl;
    }
}
