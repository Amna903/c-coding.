#include <iostream>
using namespace std;
string passorfail( int score );
main()
{
    int score;
    cout<<"Enter your score: ";
    cin>>score;
    cout<< passorfail(score);

    return 0;
}

string passorfail(int score)
{
    string result;
    if(score>50)
    {result="You are Passed with " + to_string(score) + " marks";}
     else
    {result="You are failed with " + to_string(score) + " marks";}
return result;


}