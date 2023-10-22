#include <iostream>
using namespace std;
int digsum(int num);
main()
{
    cout<<"Enter a number: ";
    int num;
   int sum= digsum( num);
   cout<<"Sum of digits: "<<sum;


}
int digsum(int num)
{int stnum=0;
    while (num!=0)
    {stnum=stnum+num/10;
    num/10;}
return  stnum;

}