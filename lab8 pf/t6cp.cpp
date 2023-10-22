#include <iostream>
using namespace std;
int calculateLCM(int num1, int num2, int gcd1);
int calculateGCD(int num1, int num2);
main()
{
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;
    cout << "Enter the second number: ";
    int num2;
    cin >>num2;

    int gcd1 = calculateGCD( num1,  num2);
    int lcm1 = calculateLCM( num1,  num2,  gcd1);
    cout << "GCD: " << gcd1<<endl;
    cout << "LCM: " << lcm1;
}
int calculateGCD(int num1, int num2)
{
    int gcd;
    while (num2 != 0)
    {
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
    }
    return num1;
}

int calculateLCM(int num1, int num2, int gcd1)
{
    int lcm = (num1 * num2) / gcd1;
    return lcm;
}