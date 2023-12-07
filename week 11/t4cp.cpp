#include <iostream>
#include <fstream>
#include <string>
using namespace std;
main()
{ 
    string path = "task4.txt";
    fstream file;
    int starter=0;
    int no=100;
  string name[no];
  int age[no];
int matric[no];
int fsc[no];
int ecat[no];
    
    file.open(path, ios::out); 
    string yesorno="yes";
    while(yesorno=="yes"){
cout<<"Enter student's name: ";
cin>> name[starter];
file<< name[starter]<<"\t";
cout<<"Enter student's age: ";
cin>> age[starter];
file<< age[starter]<<"\t";
cout<<"Enter student's matric marks: ";
cin>> matric[starter];
file<< matric[starter]<<"\t";
cout<<"Enter student's Fsc marks: ";
cin>> fsc[starter];
file<< fsc[starter]<<"\t";
cout<<"Enter student's Ecat marks: ";
cin>> ecat[starter];
file<< ecat[starter]<<endl;
starter++;
cout<<"Enter No to Stop or Yes to Continue Enter: ";
cin>>yesorno;


    }
  
}
