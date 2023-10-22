#include <iostream>
using namespace std;

bool isPrime(int num);
int primorial(int num);

int main()
{
    cout << "Enter Number: ";
    int num;
    cin >> num;
    int result = primorial(num);
    cout << result;

    return 0;
}

bool isPrime(int num)
{
    if(num <= 1)
        return false;

    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return false;
    }

    return true;
}

int primorial(int num)
{
    int primorial = 1;
    int count = 0;
    int b = 2;

    while(count < num)
    {
        if(isPrime(b))
        {
            primorial *= b;
            count++;
        }
        b++;
    }

    return primorial;
}
