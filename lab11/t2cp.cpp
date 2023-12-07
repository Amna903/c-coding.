#include<iostream>
using namespace std;
main()
{
    int rowsize=3;
    int colsize=3;
  
    cout<<"Enter the elements of the matrix: \n";
    int matrix[rowsize][colsize];
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<colsize;j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];
            
        }
    }
    cout<<"The matrix you entered is: \n";
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<colsize;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    if(matrix[0][0]==1 && 
    matrix[1][1]==1 &&
    matrix[2][2]==1 )
    {
        cout<<"The entered matrix is an identity matrix.";
    }
    else
    {
        cout<<"The entered matrix is NOT an identity matrix.";
    }
}