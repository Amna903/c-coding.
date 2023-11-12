#include<iostream>
using namespace std;
main()
{
    int num[5];
    num[1]=15;
    num[2]=12;
    num[3]=13;
    num[0]=19;
    num[4]=10;
    for(int i=0; i<5; i++ )
    {
        cout<<"The "<<i+1<<" element at location number["<<i<<"] is: "<<num[i]<<endl;

    }


}