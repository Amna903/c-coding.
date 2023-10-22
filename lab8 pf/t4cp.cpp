#include <iostream>
using namespace std;
void digit(int num,int num1);
main()
{int num,num1;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the digit to check: ";
    cin>>num1;
 digit( num, num1);

}
void digit(int num,int num1)
{int ans=0 , a=0;
    while (num!=0)
    { a=num%10;
        num=num/10;
       
        if(a==num1)
        ans++;

    }
    cout<<"Frequency: " << ans;


}