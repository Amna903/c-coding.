#include <iostream>
using namespace std;

float calculate(float age, float toy, float price);
int main()
{
    cout << "Enter Lily's age: ";
    float age;
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    float price;
    cin >> price;
    cout << "Enter the unit price of each toy: ";
    float toy;
    cin >> toy;
    float result = calculate(age, toy, price);
    if (result >= price)
    {
        cout << "Yes!" << endl;
        result -= price;
        cout << result;
    }
    else
    {
        cout << "No!\n";
        result = price - result;
        cout<<result;
    }
}

float calculate(float age, float toy, float price)
{
    float money = 0;
    float receive = 10;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            money += receive - 1; // Lilly's brother took 1 USD
            receive += 10;
        }
        else
        {
            money += toy; // Lilly sells her toys
        }
    }

    return money; // Return the total money Lilly has saved
}
