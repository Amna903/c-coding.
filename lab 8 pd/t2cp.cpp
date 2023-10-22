#include <iostream>
using namespace std;
void upper(int num);
void lower(int num);
main()
{
    cout << "Enter desired number of rows: ";
    int num;
    cin >> num;
    upper(num);
    lower(num);
}

void upper(int num)
{ int num1=num;
    for (int i = 1; i <= num / 2; i++)
    {
       num1=num1-2;
        for (int k = 1; k <= (num1 / 2) ; k++)
        {
            cout << " ";

        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void lower(int num)
{int num1=num;
    for (int i = 1; i <= num / 2; i++)
    { for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

       num1=num1-2;

        for (int k = 1; k <= (num1 / 2) ; k++)
        {
            cout << "*";

        }

       
        cout << endl;
    }
}