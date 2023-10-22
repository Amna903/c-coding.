#include <iostream>
using namespace std;

bool prime(int num);

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    bool result = prime(num);

    cout << result;

    return 0;
}

bool prime(int num)
{
    if (num == 1)
        return false;

    if ((num == 2) || (num == 3) || (num == 5))
        return true;

    if ((num % 2 != 0) && (num % 3 != 0) && (num % 5 != 0))
        return true;
    else
        return false;
}
