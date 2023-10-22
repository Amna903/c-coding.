#include <iostream>
using namespace std;
void upper(int num);
main()
{
    cout << "Enter desired number of rows: ";
    int num;
    cin >> num;
    upper(num);
}
void upper(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
    
    cout << endl;}
}