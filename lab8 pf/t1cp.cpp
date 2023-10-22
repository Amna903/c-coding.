#include <iostream>
using namespace std;
void printtable(int num);
main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
   printtable(num);
}
void printtable(int num)
{
    int num1=num;
for(int x=1; x<=10; x++)
{
    int res= num1*x;
    cout<<num1<<" x "<<x<<" = "<<res<<endl;
}

}