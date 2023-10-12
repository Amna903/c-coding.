#include <iostream>
#include <cmath>
using namespace std;
int hour(int hr, int day, int wk);
main()
{
    cout<<"Enter the needed hours: ";
    int hr;
    cin>>hr;
    cout<<"Enter the days that the firm has: ";
    int day;
    cin>>day;
    cout<<"Enter the number of all workers: ";
    int wk;
    cin>>wk;
    int result= hour( hr,  day,  wk);
   
    if(result<hr)
    {
    cout<<"Not enough time! "<<result<<" hours needed.";
    }
   
    if(result>hr)
    {  
    cout<<"Yes!"<<result<<" hours left.";
    }
  \
}

int hour(int hr, int day, int wk)
{
    int time;

    time=day*9*wk;
    int rem;
    rem=abs(hr-time);
    return rem;
}