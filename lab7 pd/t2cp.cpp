#include <iostream>
using namespace std;
float calculateavrg(float bio, float chem, float sst, float math, float eng);
string calculategrade(float avrg);
main()
{
    cout << "Enter student name: " ;
    string name;
    cin >> name;
    cout << "Enter marks for English: " ;
    float eng;
    cin >> eng;
    cout << "Enter marks for Maths: " ;
    float math;
    cin >> math;
    cout << "Enter marks for Chemistry: " ;
    float chem;
    cin >> chem;
    cout << "Enter marks for Social Science: " ;
    float sst;
    cin >> sst;
    cout << "Enter marks for Biology: " ;
    float bio;
    cin >> bio;
float avrg = calculateavrg( bio,  chem,  sst,  math,  eng );
cout<<"Student Name: "<<name<<endl;
cout<<"Percentage: "<<avrg<<"%"<<endl;
string grd= calculategrade( avrg);
cout<<"Grade: "<<grd;
}
float calculateavrg(float bio, float chem, float sst, float math, float eng)
{
    float avg;
    avg=((bio+chem+sst+math+eng)/500)*100;
    return avg;
}
string calculategrade(float avrg)
{
  string grade;
    if(100 >= avrg && avrg >= 90)
    {grade = "A+";}
    else if(90 > avrg && avrg >= 80)
    {grade = "A";}
    else if(80 > avrg && avrg >= 70)
    {grade = "B+";}
    else if(70 > avrg && avrg >= 60)
    {grade = "B";}
    else if(60 > avrg && avrg >= 50)
    {grade = "C";}
    else if(50 > avrg && avrg >= 40)
    {grade = "D";}
    else
    {grade = "F";}
    
    return grade;
}
