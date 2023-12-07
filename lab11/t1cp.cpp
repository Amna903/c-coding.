#include<iostream>
using namespace std;
main()
{
    int rowsize=0;
    int colsize=3;
    cout<<"Enter row size: ";
    cin>>rowsize;
    int sum=0;
    cout<<"Enter the elements of the matrix: \n";
    int matrix[rowsize][colsize];
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<colsize;j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];
            sum=sum+matrix[i][j];
        }
    }
cout<<"The sum of elements in the matrix is: "<<sum;
}