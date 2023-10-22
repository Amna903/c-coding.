#include <iostream>
using namespace std;
void digit(int num);
main()
{
cout<<"Enter a number: ";
int num;
cin>>num;
 digit( num);

}
void digit(int num)
{int ans=0;
    while (num!=0)
    {
        num=num/10;
        
        ans++;

    }
    cout <<"Total number of digits: "<< ans;


}