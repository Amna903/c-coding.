#include <iostream>
#include <fstream>
#include <string>
using namespace std;
main()
{ 
    string path = "task3.txt";
    fstream file;
  
    
    file.open(path, ios::in); 
     int count = 0;
    char line;
     
    while (!file.eof())
    {
       file>>line;
       if (line=='s' || line=='S')
        {count++;}
       
    }
    cout << count;
  
}
