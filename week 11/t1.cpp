#include <iostream>
#include <fstream>
#include <string>
using namespace std;
main()
{string line; 
    string path = "nmfile.txt";
    fstream file;
  
    
    file.open(path, ios::in); 
     int count = 0;
    while (!file.eof())
    {
        getline(file,line);
       
        count++;
    }
    cout << count;
  
}
