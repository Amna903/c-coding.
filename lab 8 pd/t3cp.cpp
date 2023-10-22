#include <iostream>
using namespace std;
void a(float num);
main()
{
    cout << "Enter the number to Amplify: ";
    float num;
    cin >> num;
    a(num);
}
void a(float num)
{
    int b = 1;
    cout << b;
    b = 2;
    for (int i = 1; i < num; i++)
    {

        if (b % 4 != 0)
            cout << ", " << b;
        b++;
        if (b % 4 == 0)
        {

            cout << ", " << b * 10;
        }
    }
}