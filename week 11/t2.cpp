#include <iostream>
#include <fstream>
#include <string>
using namespace std;
main()
{ 
    string path = "task2.txt";
    fstream file;
  
    
    file.open(path, ios::in); 
     int count = 0;
    string line;
     
    while (!file.eof())
    {
       getline(file,line);
        {count=count+line.length();}
       
    }
    cout << count;
  
}
