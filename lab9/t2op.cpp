#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a string: ";
    cin>>word;
   int count=0;
   for(int i=0; word[i] != '\0';i++)
   {count++;}
   cout<<"Reversed String: ";
   for(int j=count-1; j>=0;j-- )
   {cout<<word[j];}
    


}