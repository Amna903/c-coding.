#include <iostream>
using namespace std;
bool parity(int num);
main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    bool result = parity(num);
    cout << result;
}

bool parity(int num)
{
    bool res;
    int a = num / 100;

    int b = num % 100;
    int c = b / 10;
    int d = b % 10;

    int sum = a + c + d;

   
        if (sum % 2 == 1 && num % 2 == 1)
        {
            return true;
        }
       if(sum % 2 != 1 && num % 2 == 1)
        {
            return  false;
        }
    

    
        if (sum % 2 == 0 && num % 2 == 0)
        {
            return true;
        }
        
        if(sum % 2 == 1 && num % 2 != 1)
        {
            return  false;
        }
    
    
    
}