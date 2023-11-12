#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a String: ";
    cin>>word;
   cout<<"Shifted String: ";
   for(int i=0; word[i] != '\0';i++)
   {int no=word[i];
   no++;
   if (no==123)
   {no=97;}
   if (no==91)
   {no=65;}
   word[i]=no;
   cout<<word[i];}
    


}