#include <iostream>
using namespace std;
string title(int age, char gender);
main()
{
    cout<<"Enter your age: ";
    int age;
    cin>>age;
    cout<<"Enter your gender (m/f): ";
    char gender;
    cin>> gender;
string x= title( age,  gender);
cout<<"Your personal title is: "<<x;
}
string title(int age, char gender)
{string name;
    if(gender =='m'&& age>=16)
    {name="Mr.";}
    if(gender =='f'&& age>=16)
    {name="Ms.";}
    if(gender =='m'&& age<16)
    {name="Master";}
    if(gender =='f'&& age<16)
    {name="Miss";}
    return name;
}