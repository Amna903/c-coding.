#include <iostream>
using namespace std;
string sign(int day, string month);
main()
{
    int day;
     string month;
    cout<<"Enter the day of birth: ";
    cin>> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    string zsign= sign( day,  month);
cout<< "Zodiac Sign: "<<zsign;




}
string sign(int day, string month)
{
    string star;
    if(month=="March" && (day>=21 && day<=31)   || month=="April" && (day>=1 || day<=19))
    {star= "Aries"; }
     if(month=="April" && (day>=20 && day<=30)   || month=="May" && (day>=1 && day<=20))
    {star= "Taurus"; }
     if(month=="May" && (day>=21  && day<=31)   || month=="June" && (day>=1 && day<=20))
    {star= "Gemini"; }
     if(month=="June" && (day>=21 && day<=30)   || month=="July" && (day>=1 && day<=22))
    {star= "Cancer"; }
     if(month=="July" && (day>=23 && day<=31)   || month=="August" && (day>=1 && day<=22))
    {star= "Leo"; }
     if(month=="August" && (day>=23 && day<=31)   || month=="September" && (day>=1 && day<=22))
    {star= "Virgo"; }
     if(month=="September" && (day>=23 && day<=30)   || month=="October" && (day>=1 && day<=22))
    {star= "Libra"; }
     if(month=="October" && (day>=23 && day<=31)   || month=="November" && (day>=1 && day<=21))
    {star= "Scorpio"; }
     if(month=="November" && (day>=22 && day<=30)   || month=="December" && (day>=1 && day<=21))
    {star= "Sagittarius"; }
     if(month=="December" && (day>=22 && day<=31)   || month=="January" && (day>=1 && day<=19))
    {star= "Capricorn"; }
    if(month=="January" && (day>=20 && day<=31)   || month=="February" && (day>=1 && day<=18))
    {star= "Aquarius"; }
     if(month=="February" && (day>=19 && day<=28)   || month=="September" && (day>=1 && day<=20))
    {star= "Pisces"; }
    return star;





}